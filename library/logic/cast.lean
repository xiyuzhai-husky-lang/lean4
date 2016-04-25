/-
Copyright (c) 2014 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Author: Leonardo de Moura

Casts and heterogeneous equality. See also init.datatypes and init.logic.
-/

import logic.eq logic.quantifiers
open eq.ops

namespace heq
  universe variable u
  variables {A B C : Type.{u}} {a a' : A} {b b' : B} {c : C}

  theorem drec_on {C : Π {B : Type} (b : B), a == b → Type} (H₁ : a == b) (H₂ : C a (refl a)) :
    C b H₁ :=
  heq.rec (λ H₁ : a == a, show C a H₁, from H₂) H₁ H₁

  theorem to_cast_eq (H : a == b) : cast (type_eq_of_heq H) a = b :=
  drec_on H !cast_eq
end heq

section
  universe variables u v
  variables {A A' B C : Type.{u}} {P P' : A → Type.{v}} {a a' : A} {b : B}

  theorem hcongr_fun {f : Π x, P x} {f' : Π x, P' x} (a : A) (H₁ : f == f') (H₂ : P = P') :
    f a == f' a :=
  sorry
  /-
  begin
    cases H₂, cases H₁, reflexivity
  end
  -/

  theorem hcongr {P' : A' → Type} {f : Π a, P a} {f' : Π a', P' a'} {a : A} {a' : A'}
      (Hf : f == f') (HP : P == P') (Ha : a == a') : f a == f' a' :=
  sorry
  /-
  begin
    cases Ha, cases HP, cases Hf, reflexivity
  end
  -/

  theorem hcongr_arg (f : Πx, P x) {a b : A} (H : a = b) : f a == f b :=
  H ▸ (heq.refl (f a))
end

section
  variables {A : Type} {B : A → Type} {C : Πa, B a → Type} {D : Πa b, C a b → Type}
  variables {a a' : A} {b : B a} {b' : B a'} {c : C a b} {c' : C a' b'}

  theorem hcongr_arg2 (f : Πa b, C a b) (Ha : a = a') (Hb : b == b') : f a b == f a' b' :=
  hcongr (hcongr_arg f Ha) (hcongr_arg C Ha) Hb

  theorem hcongr_arg3 (f : Πa b c, D a b c) (Ha : a = a') (Hb : b == b') (Hc : c == c')
      : f a b c == f a' b' c' :=
  hcongr (hcongr_arg2 f Ha Hb) (hcongr_arg2 D Ha Hb) Hc
end

section
  universe variables u v
  variables {A A' B C : Type.{u}} {P P' : A → Type.{v}} {a a' : A} {b : B}

  -- should H₁ be explicit (useful in e.g. hproof_irrel)
  theorem eq_rec_to_heq {H₁ : a = a'} {p : P a} {p' : P a'} (H₂ : eq.rec_on H₁ p = p') : p == p' :=
  sorry -- by subst H₁; subst H₂

  theorem cast_to_heq {H₁ : A = B} (H₂ : cast H₁ a = b) : a == b :=
  eq_rec_to_heq H₂

  theorem hproof_irrel {a b : Prop} (H : a = b) (H₁ : a) (H₂ : b) : H₁ == H₂ :=
  eq_rec_to_heq (proof_irrel (cast H H₁) H₂)

  --TODO: generalize to eq.rec. This is a special case of rec_on_comp in eq.lean
  theorem cast_trans (Hab : A = B) (Hbc : B = C) (a : A) :
    cast Hbc (cast Hab a) = cast (Hab ⬝ Hbc) a :=
  sorry -- by subst Hab

  theorem pi_eq (H : P = P') : (Π x, P x) = (Π x, P' x) :=
  sorry -- by subst H

  theorem rec_on_app (H : P = P') (f : Π x, P x) (a : A) : eq.rec_on H f a == f a :=
  sorry -- by subst H

  theorem rec_on_pull (H : P = P') (f : Π x, P x) (a : A) :
    eq.rec_on H f a = eq.rec_on (congr_fun H a) (f a) :=
  eq_of_heq (calc
    eq.rec_on H f a == f a                   : rec_on_app H f a
      ... == eq.rec_on (congr_fun H a) (f a) : heq.symm (eq_rec_heq (congr_fun H a) (f a)))

  theorem cast_app (H : P = P') (f : Π x, P x) (a : A) : cast (pi_eq H) f a == f a :=
  sorry -- by subst H
end

-- function extensionality wrt heterogeneous equality
theorem hfunext {A : Type} {B : A → Type} {B' : A → Type} {f : Π x, B x} {g : Π x, B' x}
                (H : ∀ a, f a == g a) : f == g :=
cast_to_heq (funext (λ a, eq_of_heq (heq.trans (cast_app (funext (λ x, type_eq_of_heq (H x))) f a) (H a))))

section
  variables {A : Type} {B : A → Type} {C : Πa, B a → Type} {D : Πa b, C a b → Type}
            {E : Πa b c, D a b c → Type} {F : Type}
  variables {a a' : A}
            {b : B a} {b' : B a'}
            {c : C a b} {c' : C a' b'}
            {d : D a b c} {d' : D a' b' c'}

  theorem hcongr_arg4 (f : Πa b c d, E a b c d)
    (Ha : a = a') (Hb : b == b') (Hc : c == c') (Hd : d == d') : f a b c d == f a' b' c' d' :=
  hcongr (hcongr_arg3 f Ha Hb Hc) (hcongr_arg3 E Ha Hb Hc) Hd

  theorem dcongr_arg2 (f : Πa, B a → F) (Ha : a = a') (Hb : eq.rec_on Ha b = b')
      : f a b = f a' b' :=
  eq_of_heq (hcongr_arg2 f Ha (eq_rec_to_heq Hb))

  theorem dcongr_arg3 (f : Πa b, C a b → F) (Ha : a = a') (Hb : eq.rec_on Ha b = b')
      (Hc : cast (dcongr_arg2 C Ha Hb) c = c') : f a b c = f a' b' c' :=
  eq_of_heq (hcongr_arg3 f Ha (eq_rec_to_heq Hb) (eq_rec_to_heq Hc))

  theorem dcongr_arg4 (f : Πa b c, D a b c → F) (Ha : a = a') (Hb : eq.rec_on Ha b = b')
      (Hc : cast (dcongr_arg2 C Ha Hb) c = c')
      (Hd : cast (dcongr_arg3 D Ha Hb Hc) d = d') : f a b c d = f a' b' c' d' :=
  eq_of_heq (hcongr_arg4 f Ha (eq_rec_to_heq Hb) (eq_rec_to_heq Hc) (eq_rec_to_heq Hd))

  -- mixed versions (we want them for example if C a' b' is a subsingleton, like a proposition.
  -- Then proving eq is easier than proving heq)
  theorem hdcongr_arg3 (f : Πa b, C a b → F) (Ha : a = a') (Hb : b == b')
      (Hc : cast (eq_of_heq (hcongr_arg2 C Ha Hb)) c = c')
        : f a b c = f a' b' c' :=
  eq_of_heq (hcongr_arg3 f Ha Hb (eq_rec_to_heq Hc))
end
