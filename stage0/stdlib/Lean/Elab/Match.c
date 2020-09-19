// Lean compiler output
// Module: Lean.Elab.Match
// Imports: Init Lean.Meta.Match.MatchPatternAttr Lean.Meta.Match.Match Lean.Elab.SyntheticMVars Lean.Elab.App
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___rarg(lean_object*);
lean_object* l___private_Lean_Elab_Match_38__withElaboratedLHS___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_9__getMatchAlts(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabInaccessible___closed__2;
lean_object* l___private_Lean_Elab_Match_27__nameToPattern___main___closed__3;
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabNoMatch___closed__1;
lean_object* l_Lean_mkAppStx(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_CollectPatternVars_CtorApp_Context_inhabited___closed__1;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(lean_object*);
lean_object* l___private_Lean_Elab_Match_9__getMatchAlts___boxed(lean_object*);
lean_object* l___private_Lean_Elab_Match_10__registerAuxiliaryNodeKind___closed__2;
lean_object* l___private_Lean_Elab_Match_14__getNumExplicitCtorParams___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l___private_Lean_Elab_Match_39__elabMatchAux___closed__7;
uint8_t l_Lean_Expr_isCharLit(lean_object*);
lean_object* l___private_Lean_Elab_Match_10__registerAuxiliaryNodeKind___closed__1;
lean_object* l_Lean_registerTraceClass(lean_object*, lean_object*);
lean_object* l_Array_findIdxAux___main___at___private_Lean_Elab_Match_24__processCtorAppAux___main___spec__1(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isNatLit(lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___spec__4(lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
extern lean_object* l___private_Lean_Meta_ExprDefEq_8__checkTypesAndAssign___closed__7;
lean_object* l___private_Lean_Elab_Match_24__processCtorAppAux___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_toString___at_Lean_MetavarContext_MkBinding_Exception_toString___spec__2(lean_object*);
lean_object* l___private_Lean_Elab_Match_29__collect___main___closed__5;
lean_object* l_Lean_Elab_Term_mkMotiveType___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_27__nameToPattern___main___closed__15;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Elab_throwIllFormedSyntax___rarg___closed__3;
lean_object* l___private_Lean_Elab_Match_29__collect___main___closed__15;
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l___private_Lean_Elab_Match_27__nameToPattern___main___closed__14;
lean_object* l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_kabstract___at___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Elab_Term_CollectPatternVars_resolveId_x3f___spec__2(lean_object*);
extern lean_object* l___private_Lean_Meta_ExprDefEq_12__addAssignmentInfo___closed__4;
lean_object* l___private_Lean_Elab_Match_29__collect___main___closed__14;
lean_object* l___private_Lean_Elab_Match_29__collect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_withIncRecDepth___rarg___lambda__2___closed__2;
lean_object* l___private_Lean_Elab_Match_27__nameToPattern___main___closed__18;
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l___private_Lean_Elab_Match_25__processVar___closed__6;
lean_object* l_Lean_Elab_Term_elabMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unreachable_x21___rarg(lean_object*);
extern lean_object* l_Lean_nullKind;
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__17(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_3__getAppArgsAux___main(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl___at___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Match_36__throwInvalidPattern___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_App_10__elabAppArgsAux___main___spec__4(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__2;
lean_object* l___private_Lean_Elab_Match_38__withElaboratedLHS___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__12;
lean_object* l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Elab_Match_14__getNumExplicitCtorParams___spec__2(lean_object*);
extern lean_object* l_Lean_MessageData_ofList___closed__3;
lean_object* l_Array_eraseIdx___rarg(lean_object*, lean_object*);
extern lean_object* l___private_Lean_Elab_App_23__elabAppFn___main___closed__12;
lean_object* l_Lean_Elab_Term_ToDepElimPattern_main___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_List_repr___rarg___closed__1;
lean_object* l___private_Lean_Elab_Match_12__getMVarSyntaxMVarId___boxed(lean_object*);
lean_object* l___private_Lean_Elab_Match_5__mkUserNameFor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_14__getNumExplicitCtorParams___closed__1;
lean_object* l_Lean_Elab_Term_elabNoMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Format_pretty(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabInaccessible___closed__1;
extern lean_object* l_Lean_Elab_throwUnsupportedSyntax___rarg___closed__1;
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_8__getMatchAltsAux(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_HeadIndex_1__headNumArgsAux___main(lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__25(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_25__processVar___closed__5;
lean_object* l___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarWithId___at___private_Lean_Elab_Match_31__withPatternVarsAux___main___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFVarLocalDecl___at_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnf___at___private_Lean_Elab_Term_3__isTypeApp_x3f___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_identKind___closed__2;
lean_object* l_Lean_Elab_Term_withDepElimPatterns(lean_object*);
lean_object* l_Array_iterateMAux___main___at___private_Lean_Elab_Match_14__getNumExplicitCtorParams___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkMotiveType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Match_41__elabMatchCore___spec__1(lean_object*, lean_object*);
lean_object* lean_metavar_ctx_get_expr_assignment(lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_Elab_Term_reportMatcherResultErrors___spec__1(lean_object*);
lean_object* l_Lean_Elab_Term_elabMVarWithIdKind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_erase(lean_object*, lean_object*);
lean_object* l_Lean_mkMVar(lean_object*);
extern lean_object* l_Array_empty___closed__1;
lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_29__collect___main___closed__3;
lean_object* l___private_Lean_Elab_Match_22__processExplicitArg___closed__1;
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_checkTraceOption(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_27__nameToPattern___main___closed__16;
lean_object* l___private_Lean_Elab_Match_18__finalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_22__processExplicitArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__4;
lean_object* l___private_Lean_Elab_Match_25__processVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___regBuiltin_Lean_Elab_Term_elabQuotedName___closed__2;
lean_object* l___private_Lean_Elab_Match_19__isNextArgAccessible___boxed(lean_object*);
extern lean_object* l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__8;
lean_object* l_Array_mapSepElemsM___at___private_Lean_Elab_Match_29__collect___main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__1;
lean_object* l_Lean_annotation_x3f(lean_object*, lean_object*);
lean_object* l_Array_reverseAux___main___rarg(lean_object*, lean_object*);
extern lean_object* l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__2;
lean_object* l_Lean_Meta_mkLambdaFVars___at___private_Lean_Elab_Term_15__elabImplicitLambdaAux___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_22__processExplicitArg___closed__4;
lean_object* l_Lean_Elab_Term_elabInaccessible(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__6;
lean_object* l___private_Lean_Elab_Match_29__collect___main___closed__6;
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Match_38__withElaboratedLHS___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarWithIdImpl(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_29__collect___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__21(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_kabstract___at___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__11;
lean_object* l___private_Lean_Elab_Match_23__processImplicitArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_24__processCtorAppAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Meta_getExprMVarAssignment_x3f___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_27__nameToPattern___main___closed__7;
lean_object* l_Lean_Expr_getAppFn___main(lean_object*);
lean_object* l___private_Lean_Elab_Match_30__collectPatternVars___closed__1;
extern lean_object* l_String_splitAux___main___closed__1;
extern lean_object* l_Lean_Expr_getAppArgs___closed__1;
lean_object* l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Elab_Match_14__getNumExplicitCtorParams___spec__2___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_22__processExplicitArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___lambda__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_37__mkLocalDeclFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkAuxName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_InferType_4__getLevelImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_22__processExplicitArg___closed__2;
extern lean_object* l_List_repr___rarg___closed__3;
lean_object* l_Lean_Meta_assignExprMVar___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Match_25__processVar___spec__1(lean_object*);
lean_object* l___private_Lean_Elab_Match_27__nameToPattern___main___closed__5;
lean_object* l___private_Lean_Elab_Match_11__mkMVarSyntax___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__1;
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_mkMatcher(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__14(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapM___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findIdxAux___main___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__5___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getMainModule___rarg(lean_object*, lean_object*);
extern lean_object* l___private_Init_LeanInit_14__quoteName___main___closed__2;
lean_object* l___private_Lean_Elab_Match_1__expandSimpleMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___lambda__1___boxed(lean_object**);
extern lean_object* l_Lean_Elab_Term_NamedArg_inhabited;
lean_object* l_Array_iterateMAux___main___at___private_Lean_Elab_Match_14__getNumExplicitCtorParams___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Init_LeanInit_14__quoteName___main___closed__1;
extern lean_object* l_Lean_mkAppStx___closed__8;
lean_object* l_Lean_throwError___at___private_Lean_Elab_Match_36__throwInvalidPattern___spec__1(lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq___at___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_36__throwInvalidPattern___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Match_39__elabMatchAux___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Match_25__processVar___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_27__nameToPattern___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_LocalContext_4__mkInaccessibleUserNameAux___closed__2;
extern lean_object* l_Lean_getConstInfo___rarg___lambda__1___closed__3;
lean_object* l___private_Lean_Elab_Match_36__throwInvalidPattern___rarg___closed__1;
lean_object* l_Lean_Elab_Term_elabMatch___closed__3;
lean_object* l___private_Lean_Elab_Match_38__withElaboratedLHS___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__10;
lean_object* l___private_Lean_Elab_Match_35__markAsVisited___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Meta_Closure_mkBinding___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_finalizePatternDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_8__getMatchAltsAux___main(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_16__throwInvalidPattern(lean_object*);
lean_object* l_Lean_Meta_instantiateLocalDeclMVars___at_Lean_Elab_Term_finalizePatternDecls___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_28__quotedNameToPattern___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_findIdxAux___main___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__5(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_Match_17__isDone(lean_object*);
lean_object* l_Lean_Elab_Term_finalizePatternDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_18__finalize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Match_38__withElaboratedLHS___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgsAux___main(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_18__finalize___closed__1;
lean_object* l_Lean_Elab_Term_mkMatchAltView___boxed(lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_Lean_AddMessageContext___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_21__pushNewArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Elab_Match_14__getNumExplicitCtorParams___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__20(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_assignExprMVar___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_25__processVar___closed__7;
lean_object* l_Lean_Elab_Term_elabMatchAltView(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_HasRepr___rarg___closed__1;
lean_object* l___private_Lean_Elab_Match_25__processVar___closed__3;
lean_object* l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_27__nameToPattern___main___closed__20;
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_21__pushNewArg___closed__1;
lean_object* l___private_Lean_Elab_Match_35__markAsVisited(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_42__regTraceClasses(lean_object*);
lean_object* l___private_Lean_Elab_Match_27__nameToPattern___main___closed__10;
lean_object* l___private_Lean_Elab_Match_38__withElaboratedLHS___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_41__elabMatchCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_36__throwInvalidPattern___rarg___closed__3;
lean_object* l___private_Lean_Elab_Match_21__pushNewArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getConstInfo___at_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnf___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
lean_object* l_Lean_Elab_logAt___at_Lean_Elab_Term_CollectPatternVars_main___spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_numLitKind;
lean_object* l___private_Lean_Elab_Match_36__throwInvalidPattern(lean_object*);
lean_object* l___private_Lean_Elab_Match_30__collectPatternVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwIllFormedSyntax___at___private_Lean_Elab_Match_28__quotedNameToPattern___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_11__mkMVarSyntax___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_31__withPatternVarsAux___main___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabMatch(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq___at_Lean_Elab_Term_isDefEqNoConstantApprox___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_16__throwInvalidPattern___rarg___closed__2;
lean_object* l___private_Lean_Elab_Match_31__withPatternVarsAux___main___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_strLitKind;
extern lean_object* l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__24;
lean_object* l___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_16__throwInvalidPattern___rarg___closed__1;
lean_object* l___private_Lean_Elab_Match_15__throwAmbiguous(lean_object*);
lean_object* l___private_Lean_Elab_Match_27__nameToPattern___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_toStringAux___main___at_Lean_Elab_Term_elabMatchAltView___spec__2___boxed(lean_object*, lean_object*);
extern lean_object* l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__42;
extern lean_object* l_Lean_nameToExpr___closed__1;
lean_object* l_Lean_Expr_toHeadIndex___main(lean_object*);
lean_object* l___private_Lean_Elab_Match_40__waitExpectedType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVars___at_Lean_Elab_Term_MVarErrorContext_logError___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__20;
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAnnotation(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__18;
lean_object* l___private_Lean_Elab_Match_16__throwInvalidPattern___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_log___at_Lean_Elab_Term_CollectPatternVars_main___spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ToDepElimPattern_main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Elab_Term_10__isExplicit___closed__2;
lean_object* l___private_Lean_Elab_Match_31__withPatternVarsAux___main___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_logTrace___at_Lean_Elab_Term_CollectPatternVars_main___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_getConstInfo___rarg___lambda__1___closed__5;
extern lean_object* l___private_Lean_Elab_App_23__elabAppFn___main___closed__5;
lean_object* l___private_Lean_Elab_Match_10__registerAuxiliaryNodeKind(lean_object*);
lean_object* l_Lean_Meta_getFVarLocalDecl___at_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_29__collect___main___closed__7;
lean_object* l_Lean_Elab_Term_mkMatcher(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_27__nameToPattern___main___closed__12;
lean_object* l___private_Lean_Elab_Match_8__getMatchAltsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_31__withPatternVarsAux___main___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_14__getNumExplicitCtorParams___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateLocalDeclMVars___at_Lean_Elab_Term_finalizePatternDecls___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__4___closed__1;
lean_object* l_Lean_Elab_Term_mkMatchAltView(lean_object*, lean_object*);
lean_object* l_Nat_repr(lean_object*);
lean_object* l_Lean_Elab_Term_elabMatchAltView___closed__3;
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_2__expandSimpleMatchWithType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
lean_object* l_Lean_Elab_Term_expandMacrosInPatterns(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq___at___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_inferTypeRef;
lean_object* l_Lean_Elab_Term_elabNoMatch___closed__2;
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_expandMacros___main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_inaccessible_x3f___boxed(lean_object*);
lean_object* l___private_Lean_Elab_Match_29__collect___main___closed__10;
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Elab_Term_reportMatcherResultErrors___closed__6;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
extern lean_object* l_Lean_choiceKind;
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__4___closed__2;
extern lean_object* l_List_repr___rarg___closed__2;
extern lean_object* l_Lean_charLitKind;
extern lean_object* l_List_reprAux___main___rarg___closed__1;
lean_object* l_Lean_Meta_mkFreshTypeMVar___at___private_Lean_Elab_Term_6__exceptionToSorry___spec__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__15(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_resolveName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_getCurrMacroScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_LocalDecl_Inhabited;
lean_object* l_Lean_MetavarContext_assignExpr(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAtomic(lean_object*);
extern lean_object* l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__6;
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__7;
lean_object* l___regBuiltin_Lean_Elab_Term_elabNoMatch___closed__1;
lean_object* l___private_Lean_Elab_Match_27__nameToPattern___main___closed__19;
lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_CollectPatternVars_processCtorApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_15__throwAmbiguous___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkAppStx___closed__6;
lean_object* l_Lean_Elab_logTrace___at_Lean_Elab_Term_CollectPatternVars_main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_39__elabMatchAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_31__withPatternVarsAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_29__collect___main___closed__8;
lean_object* l___private_Lean_Elab_Match_4__elabDiscrsWitMatchType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_11__mkMVarSyntax___rarg(lean_object*, lean_object*);
lean_object* l_List_filterAux___main___at_Lean_Elab_Term_CollectPatternVars_resolveId_x3f___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__3;
lean_object* l_Array_mapSepElemsM___at___private_Lean_Elab_Match_29__collect___main___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandApp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabInaccessible(lean_object*);
lean_object* l___private_Lean_Elab_Match_36__throwInvalidPattern___rarg___closed__2;
lean_object* l___private_Lean_Elab_Match_29__collect___main___closed__4;
lean_object* l___private_Lean_Elab_Match_26__processId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Array_isEmpty___rarg(lean_object*);
lean_object* l___private_Lean_Elab_Match_13__throwCtorExpected___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__12;
lean_object* l___private_Lean_Meta_Basic_20__forallTelescopeReducingImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_redLength___main___rarg(lean_object*);
extern lean_object* l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__11;
lean_object* l_Lean_Elab_Term_inaccessible_x3f(lean_object*);
lean_object* l___private_Lean_Elab_Match_34__alreadyVisited(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_29__collect___main___closed__11;
lean_object* l___private_Lean_Elab_Match_34__alreadyVisited___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkInaccessible(lean_object*);
lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Binders_7__elabBinderViews___main___spec__1___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_39__elabMatchAux___closed__4;
lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__2___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_22__processExplicitArg___closed__3;
lean_object* l_Lean_mkFVar(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity___main(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Match_Alt_checkAndReplaceFVarId___closed__12;
lean_object* l___private_Lean_Elab_Match_39__elabMatchAux___closed__8;
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_16__throwInvalidPattern___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__22(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
extern lean_object* l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__10;
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__19(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Match_13__throwCtorExpected___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_21__forallBoundedTelescopeImp___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_27__nameToPattern___main___closed__11;
extern lean_object* l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__26;
lean_object* l_Lean_Elab_Term_PatternVar_hasToString___closed__1;
lean_object* l_Lean_throwError___at___private_Lean_Elab_Match_13__throwCtorExpected___spec__1(lean_object*);
extern lean_object* l___private_Lean_Meta_ExprDefEq_8__checkTypesAndAssign___lambda__1___closed__1;
lean_object* l___private_Lean_Elab_Match_39__elabMatchAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_mkWHNFRef___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Match_39__elabMatchAux___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_38__withElaboratedLHS(lean_object*);
extern lean_object* l_Lean_nullKind___closed__2;
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_13__throwCtorExpected___rarg___closed__1;
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__2;
lean_object* l___private_Lean_Elab_Match_29__collect___main___closed__1;
lean_object* l_List_toString___at_Lean_Elab_Term_elabMatchAltView___spec__1(lean_object*);
lean_object* l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabMatch___closed__2;
extern lean_object* l_Lean_Elab_Term_termElabAttribute;
lean_object* l___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars___at___private_Lean_Elab_Term_15__elabImplicitLambdaAux___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_expandMacrosInPatterns___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Match_39__elabMatchAux___spec__3(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_18__finalize___closed__2;
lean_object* l_Lean_Elab_Term_CollectPatternVars_processCtor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalDecl___at___private_Lean_Elab_Match_5__mkUserNameFor___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_27__nameToPattern___main___closed__17;
lean_object* l_List_toStringAux___main___at___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___spec__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabMatchAltView___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_elabAttr___rarg___closed__3;
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_LeanInit_18__mapSepElemsMAux___main___at___private_Lean_Elab_Match_29__collect___main___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Syntax_inhabited;
extern lean_object* l___private_Lean_Elab_Tactic_Basic_2__expandTacticMacroFns___main___closed__5;
extern lean_object* l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__16;
lean_object* l_Lean_Elab_Term_elabMVarWithIdKind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_PersistentArray_push___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__3;
lean_object* l_Lean_Elab_Term_mkFreshBinderName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_27__nameToPattern___main___closed__8;
lean_object* l___private_Lean_Elab_Match_32__withPatternVars___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__6;
lean_object* l___private_Lean_Elab_Match_39__elabMatchAux___closed__3;
lean_object* l___private_Lean_Elab_Match_39__elabMatchAux___closed__5;
lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalDecl___at_Lean_Meta_getFVarLocalDecl___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_8__getMatchAltsAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_Match_19__isNextArgAccessible(lean_object*);
lean_object* l_Lean_Syntax_setArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_environment_main_module(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_KAbstract_1__kabstractAux___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forMAux___main___at___private_Lean_Elab_Match_31__withPatternVarsAux___main___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_27__nameToPattern___main___closed__4;
lean_object* l_Lean_Elab_Term_CollectPatternVars_resolveId_x3f___closed__2;
lean_object* l___private_Lean_Elab_Match_29__collect___main___closed__12;
lean_object* l_Lean_Elab_Term_CollectPatternVars_resolveId_x3f___closed__1;
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__3;
lean_object* l_Lean_throwError___at___private_Lean_Elab_Match_13__throwCtorExpected___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21___main(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_13__throwCtorExpected___rarg___closed__3;
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_elabLetDeclCore___closed__6;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkMotiveType___closed__1;
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
extern lean_object* l_Lean_SourceInfo_inhabited___closed__1;
lean_object* l_Lean_Elab_Term_elabInaccessible___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_33__elabPatternsAux___main___closed__3;
lean_object* l___private_Lean_Elab_Match_27__nameToPattern___main___closed__9;
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabInaccessible___closed__3;
lean_object* l_Lean_Meta_throwUnknownFVar___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isExplicit(uint8_t);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l___private_Lean_Elab_Match_27__nameToPattern(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__2___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabMatchAltView___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_CollectPatternVars_resolveId_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_28__quotedNameToPattern(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_41__elabMatchCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__3;
extern lean_object* l_Lean_Elab_Term_quoteAutoTactic___main___closed__2;
lean_object* l_Lean_Elab_Term_reportMatcherResultErrors___closed__7;
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLocalDecl___at___private_Lean_Elab_Match_5__mkUserNameFor___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_11__mkMVarSyntax(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_TagAttribute_hasTag(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getConstInfo___at_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_39__elabMatchAux___closed__1;
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_31__withPatternVarsAux___main___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_37__mkLocalDeclFor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_whnfRef;
lean_object* l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_16__elabImplicitLambda___main___spec__1___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_addDecl(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_25__processVar___closed__9;
lean_object* l___private_Lean_Elab_Match_14__getNumExplicitCtorParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_7__elabMatchTypeAndDiscrs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__7;
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__26(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_39__elabMatchAux___closed__2;
lean_object* l___private_Lean_Elab_Match_20__getNextParam(lean_object*);
lean_object* l___private_Lean_Elab_Match_32__withPatternVars(lean_object*);
lean_object* l_Lean_Parser_registerBuiltinNodeKind(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_33__elabPatternsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabMatch___closed__1;
lean_object* l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__5;
lean_object* l_Lean_Elab_Term_CollectPatternVars_resolveId_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarWithId___at___private_Lean_Elab_Match_31__withPatternVarsAux___main___spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkStxStrLit(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos(lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__5;
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Match_39__elabMatchAux___spec__2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_toString___at_Lean_OpenDecl_HasToString___spec__2(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__1;
lean_object* l___private_Lean_Elab_Match_7__elabMatchTypeAndDiscrs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_23__processImplicitArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_List_toString___at___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___spec__1(lean_object*);
extern lean_object* l_Lean_mkAppStx___closed__9;
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__4;
lean_object* l_Lean_Elab_Term_withSynthesize___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Elab_Binders_16__expandMatchAltsIntoMatchAux___main___closed__3;
lean_object* l___private_Lean_Elab_Match_27__nameToPattern___main___closed__13;
lean_object* l___private_Lean_Elab_Match_31__withPatternVarsAux___main(lean_object*);
lean_object* l_Lean_Elab_Term_CollectPatternVars_CtorApp_Context_inhabited;
lean_object* l___private_Lean_Elab_Match_25__processVar___closed__4;
lean_object* l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__2;
lean_object* l___private_Lean_Elab_Match_39__elabMatchAux___closed__6;
lean_object* l_Lean_Elab_Term_elabMatchAltView___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwIllFormedSyntax___at___private_Lean_Elab_Match_28__quotedNameToPattern___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_AppBuilder_3__mkEqImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Array_findIdxAux___main___at___private_Lean_Elab_Match_24__processCtorAppAux___main___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkMotiveType___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__1;
lean_object* l___private_Lean_Elab_Match_40__waitExpectedType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_arrayLit_x3f(lean_object*);
lean_object* l___private_Lean_Elab_Match_36__throwInvalidPattern___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_29__collect___main___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkOptionalNode___closed__1;
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__16(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_isNameLit_x3f(lean_object*);
extern lean_object* l___private_Lean_Elab_Binders_16__expandMatchAltsIntoMatchAux___main___closed__5;
lean_object* l___private_Lean_Elab_Match_13__throwCtorExpected___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__23(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_18__finalize___closed__3;
lean_object* l_Array_toList___rarg(lean_object*);
lean_object* l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isStringLit(lean_object*);
lean_object* l_Lean_Elab_Term_reportMatcherResultErrors___closed__4;
lean_object* lean_mk_array(lean_object*, lean_object*);
extern lean_object* l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
lean_object* l___private_Lean_Elab_Match_27__nameToPattern___main___closed__2;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_31__withPatternVarsAux(lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabMatchAltView___closed__1;
lean_object* l___private_Lean_Elab_Match_13__throwCtorExpected(lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__4;
extern lean_object* l_Lean_mkHole___closed__2;
lean_object* l_List_toStringAux___main___at___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___spec__2(uint8_t, lean_object*);
lean_object* l___private_Lean_Elab_Match_15__throwAmbiguous___rarg___closed__3;
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType___at_Lean_Elab_Term_tryLiftAndCoe___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVars___at_Lean_Meta_instantiateLocalDeclMVars___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_AppBuilder_5__mkEqReflImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_17__isDone___boxed(lean_object*);
lean_object* l_Lean_Elab_Term_reportMatcherResultErrors___closed__3;
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_15__throwAmbiguous___rarg___closed__2;
lean_object* l_Lean_Meta_assignExprMVar___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkStxLit(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___spec__4___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Match_39__elabMatchAux___spec__4___rarg(lean_object*);
lean_object* l___private_Lean_Elab_Match_27__nameToPattern___main___closed__1;
lean_object* l_Lean_Meta_whnf___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkOptionalNode___closed__2;
lean_object* l___private_Lean_Elab_Match_27__nameToPattern___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_CollectPatternVars_main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__9;
lean_object* l_Lean_Elab_Term_mkMatcher___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forMAux___main___at___private_Lean_Elab_Match_31__withPatternVarsAux___main___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_map___main___at_Lean_MessageData_hasCoeOfListExpr___spec__1(lean_object*);
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Match_39__elabMatchAux___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_15__throwAmbiguous___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_15__throwAmbiguous___rarg___closed__1;
lean_object* l_Lean_Elab_Term_CollectPatternVars_processCtorApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_25__processVar___closed__2;
lean_object* l___private_Lean_Elab_Match_13__throwCtorExpected___rarg___closed__2;
lean_object* l_Lean_Syntax_formatStxAux___main(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_List_toArrayAux___main___rarg(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_29__collect___main___closed__13;
extern lean_object* l_System_FilePath_dirName___closed__1;
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___rarg(lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_PatternVar_hasToString(lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__4___closed__3;
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Match_36__throwInvalidPattern___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithSep___main(lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl___at___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_occurs(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_33__elabPatternsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_reportMatcherResultErrors(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Match_25__processVar___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_29__collect___main___closed__9;
lean_object* l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__8;
lean_object* l_Lean_Elab_Term_reportMatcherResultErrors___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Term_elabMVarWithIdKind___closed__1;
lean_object* l_List_toStringAux___main___at_Lean_Elab_Term_elabMatchAltView___spec__2(uint8_t, lean_object*);
lean_object* l___private_Lean_Elab_Match_25__processVar___closed__1;
extern lean_object* l___private_Lean_Elab_App_23__elabAppFn___main___closed__11;
lean_object* l_Lean_Elab_Term_reportMatcherResultErrors___closed__5;
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l___private_Lean_Elab_Util_4__expandMacro_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_mkAppStx___closed__2;
lean_object* l___private_Lean_Elab_Match_4__elabDiscrsWitMatchType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_12__getMVarSyntaxMVarId(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabMatchAltView___closed__2;
lean_object* l_Lean_Elab_Term_reportMatcherResultErrors___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_counterExamplesToMessageData(lean_object*);
lean_object* l___private_Lean_Elab_Match_29__collect___main___closed__2;
lean_object* l___private_Lean_Elab_Match_5__mkUserNameFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_insertAt___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__2;
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_27__nameToPattern___main___closed__6;
lean_object* l___private_Lean_Elab_Match_25__processVar___closed__8;
lean_object* l_Lean_Meta_mkForallFVars___at_Lean_Elab_Term_elabForall___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_log___at_Lean_Elab_Term_CollectPatternVars_main___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_25__processVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabMatch___closed__1;
lean_object* lean_name_mk_numeral(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_16__throwInvalidPattern___rarg___closed__3;
lean_object* l_Lean_Elab_logAt___at_Lean_Elab_Term_CollectPatternVars_main___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabMVarWithIdKind(lean_object*);
extern lean_object* l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__1;
extern lean_object* l_Lean_mkAppStx___closed__1;
lean_object* l_Lean_Elab_Term_withDepElimPatterns___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__13;
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__8;
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__9;
lean_object* l___private_Lean_Elab_Match_33__elabPatternsAux___main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_33__elabPatternsAux___main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Elab_Util_5__regTraceClasses___closed__1;
lean_object* l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__6;
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__24(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getExprMVarAssignment_x3f___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_33__elabPatternsAux___main___closed__1;
lean_object* l___private_Init_LeanInit_18__mapSepElemsMAux___main___at___private_Lean_Elab_Match_29__collect___main___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Match_33__elabPatternsAux___main___closed__2;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_reportMatcherResultErrors___closed__1;
lean_object* l_monadInhabited___rarg(lean_object*, lean_object*);
extern lean_object* l_Lean_matchPatternAttr;
uint8_t l_Lean_Syntax_isIdent(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Term_elabNoMatch(lean_object*);
lean_object* l_Lean_mkThunk(lean_object*);
lean_object* l_Lean_Elab_Term_mkMatchAltView(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_Lean_Syntax_getArg(x_2, x_3);
x_5 = l_Lean_Syntax_getArgs(x_4);
lean_dec(x_4);
x_6 = lean_unsigned_to_nat(2u);
x_7 = l_Array_empty___closed__1;
x_8 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_6, x_5, x_3, x_7);
lean_dec(x_5);
x_9 = l_Lean_Syntax_getArg(x_2, x_6);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_8);
lean_ctor_set(x_10, 2, x_9);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_mkMatchAltView___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Term_mkMatchAltView(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Match_1__expandSimpleMatch(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_13 = l_Lean_Elab_Term_getCurrMacroScope(x_6, x_7, x_8, x_9, x_10, x_11, x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_Lean_Elab_Term_getMainModule___rarg(x_11, x_14);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Array_empty___closed__1;
x_18 = lean_array_push(x_17, x_3);
x_19 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__42;
x_20 = lean_array_push(x_18, x_19);
x_21 = lean_array_push(x_20, x_19);
x_22 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__10;
x_23 = lean_array_push(x_21, x_22);
x_24 = lean_array_push(x_23, x_2);
x_25 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__8;
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
x_27 = lean_array_push(x_17, x_26);
x_28 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__6;
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
x_30 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__4;
x_31 = lean_array_push(x_30, x_29);
x_32 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__16;
x_33 = lean_array_push(x_31, x_32);
x_34 = lean_array_push(x_33, x_4);
x_35 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__2;
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
x_37 = !lean_is_exclusive(x_6);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; lean_object* x_42; 
x_38 = lean_ctor_get(x_6, 6);
lean_inc(x_36);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_1);
lean_ctor_set(x_39, 1, x_36);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
lean_ctor_set(x_6, 6, x_40);
x_41 = 1;
x_42 = l_Lean_Elab_Term_elabTerm(x_36, x_5, x_41, x_6, x_7, x_8, x_9, x_10, x_11, x_16);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; uint8_t x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; lean_object* x_57; 
x_43 = lean_ctor_get(x_6, 0);
x_44 = lean_ctor_get(x_6, 1);
x_45 = lean_ctor_get(x_6, 2);
x_46 = lean_ctor_get(x_6, 3);
x_47 = lean_ctor_get(x_6, 4);
x_48 = lean_ctor_get(x_6, 5);
x_49 = lean_ctor_get(x_6, 6);
x_50 = lean_ctor_get(x_6, 7);
x_51 = lean_ctor_get_uint8(x_6, sizeof(void*)*8);
x_52 = lean_ctor_get_uint8(x_6, sizeof(void*)*8 + 1);
lean_inc(x_50);
lean_inc(x_49);
lean_inc(x_48);
lean_inc(x_47);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_6);
lean_inc(x_36);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_1);
lean_ctor_set(x_53, 1, x_36);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_49);
x_55 = lean_alloc_ctor(0, 8, 2);
lean_ctor_set(x_55, 0, x_43);
lean_ctor_set(x_55, 1, x_44);
lean_ctor_set(x_55, 2, x_45);
lean_ctor_set(x_55, 3, x_46);
lean_ctor_set(x_55, 4, x_47);
lean_ctor_set(x_55, 5, x_48);
lean_ctor_set(x_55, 6, x_54);
lean_ctor_set(x_55, 7, x_50);
lean_ctor_set_uint8(x_55, sizeof(void*)*8, x_51);
lean_ctor_set_uint8(x_55, sizeof(void*)*8 + 1, x_52);
x_56 = 1;
x_57 = l_Lean_Elab_Term_elabTerm(x_36, x_5, x_56, x_55, x_7, x_8, x_9, x_10, x_11, x_16);
return x_57;
}
}
}
lean_object* l___private_Lean_Elab_Match_2__expandSimpleMatchWithType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; 
x_14 = l_Lean_Elab_Term_getCurrMacroScope(x_7, x_8, x_9, x_10, x_11, x_12, x_13);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = l_Lean_Elab_Term_getMainModule___rarg(x_12, x_15);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = l_Array_empty___closed__1;
x_19 = lean_array_push(x_18, x_3);
x_20 = l___private_Lean_Elab_Quotation_2__quoteSyntax___main___closed__42;
x_21 = lean_array_push(x_19, x_20);
x_22 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__26;
x_23 = lean_array_push(x_22, x_4);
x_24 = l_Lean_Elab_Term_elabLetDeclCore___closed__6;
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
x_26 = lean_array_push(x_18, x_25);
x_27 = l_Lean_nullKind___closed__2;
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
x_29 = lean_array_push(x_21, x_28);
x_30 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__10;
x_31 = lean_array_push(x_29, x_30);
x_32 = lean_array_push(x_31, x_2);
x_33 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__8;
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
x_35 = lean_array_push(x_18, x_34);
x_36 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__6;
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
x_38 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__4;
x_39 = lean_array_push(x_38, x_37);
x_40 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__16;
x_41 = lean_array_push(x_39, x_40);
x_42 = lean_array_push(x_41, x_5);
x_43 = l___private_Lean_Elab_Quotation_4__getHeadInfo___elambda__3___closed__2;
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
x_45 = !lean_is_exclusive(x_7);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; lean_object* x_50; 
x_46 = lean_ctor_get(x_7, 6);
lean_inc(x_44);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_1);
lean_ctor_set(x_47, 1, x_44);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
lean_ctor_set(x_7, 6, x_48);
x_49 = 1;
x_50 = l_Lean_Elab_Term_elabTerm(x_44, x_6, x_49, x_7, x_8, x_9, x_10, x_11, x_12, x_17);
return x_50;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint8_t x_59; uint8_t x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; lean_object* x_65; 
x_51 = lean_ctor_get(x_7, 0);
x_52 = lean_ctor_get(x_7, 1);
x_53 = lean_ctor_get(x_7, 2);
x_54 = lean_ctor_get(x_7, 3);
x_55 = lean_ctor_get(x_7, 4);
x_56 = lean_ctor_get(x_7, 5);
x_57 = lean_ctor_get(x_7, 6);
x_58 = lean_ctor_get(x_7, 7);
x_59 = lean_ctor_get_uint8(x_7, sizeof(void*)*8);
x_60 = lean_ctor_get_uint8(x_7, sizeof(void*)*8 + 1);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_7);
lean_inc(x_44);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_1);
lean_ctor_set(x_61, 1, x_44);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_57);
x_63 = lean_alloc_ctor(0, 8, 2);
lean_ctor_set(x_63, 0, x_51);
lean_ctor_set(x_63, 1, x_52);
lean_ctor_set(x_63, 2, x_53);
lean_ctor_set(x_63, 3, x_54);
lean_ctor_set(x_63, 4, x_55);
lean_ctor_set(x_63, 5, x_56);
lean_ctor_set(x_63, 6, x_62);
lean_ctor_set(x_63, 7, x_58);
lean_ctor_set_uint8(x_63, sizeof(void*)*8, x_59);
lean_ctor_set_uint8(x_63, sizeof(void*)*8 + 1, x_60);
x_64 = 1;
x_65 = l_Lean_Elab_Term_elabTerm(x_44, x_6, x_64, x_63, x_8, x_9, x_10, x_11, x_12, x_17);
return x_65;
}
}
}
lean_object* l_List_toStringAux___main___at___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___spec__2(uint8_t x_1, lean_object* x_2) {
_start:
{
if (x_1 == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = l_String_splitAux___main___closed__1;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_box(0);
x_7 = 0;
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_formatStxAux___main(x_6, x_7, x_8, x_4);
x_10 = lean_box(0);
x_11 = l_Lean_Format_pretty(x_9, x_10);
x_12 = l_List_reprAux___main___rarg___closed__1;
x_13 = lean_string_append(x_12, x_11);
lean_dec(x_11);
x_14 = l_List_toStringAux___main___at___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___spec__2(x_1, x_5);
x_15 = lean_string_append(x_13, x_14);
lean_dec(x_14);
return x_15;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_16; 
x_16 = l_String_splitAux___main___closed__1;
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_17 = lean_ctor_get(x_2, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_2, 1);
lean_inc(x_18);
lean_dec(x_2);
x_19 = lean_box(0);
x_20 = 0;
x_21 = lean_unsigned_to_nat(0u);
x_22 = l_Lean_Syntax_formatStxAux___main(x_19, x_20, x_21, x_17);
x_23 = lean_box(0);
x_24 = l_Lean_Format_pretty(x_22, x_23);
x_25 = l_List_toStringAux___main___at___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___spec__2(x_20, x_18);
x_26 = lean_string_append(x_24, x_25);
lean_dec(x_25);
return x_26;
}
}
}
}
lean_object* l_List_toString___at___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = l_List_repr___rarg___closed__1;
return x_2;
}
else
{
uint8_t x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = 1;
x_4 = l_List_toStringAux___main___at___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___spec__2(x_3, x_1);
x_5 = l_List_repr___rarg___closed__2;
x_6 = lean_string_append(x_5, x_4);
lean_dec(x_4);
x_7 = l_List_repr___rarg___closed__3;
x_8 = lean_string_append(x_6, x_7);
return x_8;
}
}
}
lean_object* _init_l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid result type provided to match-expression");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid type provided to match-expression, function type with arity #");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" expected");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__7;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Util_5__regTraceClasses___closed__1;
x_2 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("discr #");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__11;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__12;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_array_get_size(x_1);
x_14 = lean_nat_dec_lt(x_3, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_dec(x_3);
x_15 = lean_ctor_get(x_8, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_8, 1);
lean_inc(x_16);
x_17 = lean_ctor_get(x_8, 2);
lean_inc(x_17);
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
uint8_t x_19; lean_object* x_20; lean_object* x_21; 
x_19 = 1;
lean_ctor_set_uint8(x_15, 0, x_19);
lean_ctor_set_uint8(x_15, 1, x_19);
lean_ctor_set_uint8(x_15, 2, x_19);
lean_ctor_set_uint8(x_15, 3, x_19);
x_20 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_20, 0, x_15);
lean_ctor_set(x_20, 1, x_16);
lean_ctor_set(x_20, 2, x_17);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_2);
lean_inc(x_4);
x_21 = l_Lean_Meta_isExprDefEq___at_Lean_Elab_Term_isDefEqNoConstantApprox___spec__1(x_4, x_2, x_6, x_7, x_20, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_unbox(x_22);
lean_dec(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
lean_dec(x_5);
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_dec(x_21);
x_25 = l_Lean_indentExpr(x_4);
x_26 = l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__3;
x_27 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
x_28 = l_Lean_MessageData_ofList___closed__3;
x_29 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
x_30 = l_Lean_Meta_Match_Alt_checkAndReplaceFVarId___closed__12;
x_31 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
x_32 = l_Lean_indentExpr(x_2);
x_33 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
x_34 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_33, x_6, x_7, x_8, x_9, x_10, x_11, x_24);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
return x_34;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_34, 0);
x_37 = lean_ctor_get(x_34, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_34);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
else
{
uint8_t x_39; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_39 = !lean_is_exclusive(x_21);
if (x_39 == 0)
{
lean_object* x_40; 
x_40 = lean_ctor_get(x_21, 0);
lean_dec(x_40);
lean_ctor_set(x_21, 0, x_5);
return x_21;
}
else
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_ctor_get(x_21, 1);
lean_inc(x_41);
lean_dec(x_21);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_5);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
else
{
uint8_t x_43; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_43 = !lean_is_exclusive(x_21);
if (x_43 == 0)
{
return x_21;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_21, 0);
x_45 = lean_ctor_get(x_21, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_21);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
else
{
uint8_t x_47; uint8_t x_48; uint8_t x_49; uint8_t x_50; uint8_t x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_47 = lean_ctor_get_uint8(x_15, 4);
x_48 = lean_ctor_get_uint8(x_15, 5);
x_49 = lean_ctor_get_uint8(x_15, 6);
x_50 = lean_ctor_get_uint8(x_15, 7);
lean_dec(x_15);
x_51 = 1;
x_52 = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint8(x_52, 0, x_51);
lean_ctor_set_uint8(x_52, 1, x_51);
lean_ctor_set_uint8(x_52, 2, x_51);
lean_ctor_set_uint8(x_52, 3, x_51);
lean_ctor_set_uint8(x_52, 4, x_47);
lean_ctor_set_uint8(x_52, 5, x_48);
lean_ctor_set_uint8(x_52, 6, x_49);
lean_ctor_set_uint8(x_52, 7, x_50);
x_53 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_16);
lean_ctor_set(x_53, 2, x_17);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_2);
lean_inc(x_4);
x_54 = l_Lean_Meta_isExprDefEq___at_Lean_Elab_Term_isDefEqNoConstantApprox___spec__1(x_4, x_2, x_6, x_7, x_53, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; uint8_t x_56; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_unbox(x_55);
lean_dec(x_55);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
lean_dec(x_5);
x_57 = lean_ctor_get(x_54, 1);
lean_inc(x_57);
lean_dec(x_54);
x_58 = l_Lean_indentExpr(x_4);
x_59 = l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__3;
x_60 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_58);
x_61 = l_Lean_MessageData_ofList___closed__3;
x_62 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
x_63 = l_Lean_Meta_Match_Alt_checkAndReplaceFVarId___closed__12;
x_64 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
x_65 = l_Lean_indentExpr(x_2);
x_66 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
x_67 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_66, x_6, x_7, x_8, x_9, x_10, x_11, x_57);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_70 = x_67;
} else {
 lean_dec_ref(x_67);
 x_70 = lean_box(0);
}
if (lean_is_scalar(x_70)) {
 x_71 = lean_alloc_ctor(1, 2, 0);
} else {
 x_71 = x_70;
}
lean_ctor_set(x_71, 0, x_68);
lean_ctor_set(x_71, 1, x_69);
return x_71;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_72 = lean_ctor_get(x_54, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_73 = x_54;
} else {
 lean_dec_ref(x_54);
 x_73 = lean_box(0);
}
if (lean_is_scalar(x_73)) {
 x_74 = lean_alloc_ctor(0, 2, 0);
} else {
 x_74 = x_73;
}
lean_ctor_set(x_74, 0, x_5);
lean_ctor_set(x_74, 1, x_72);
return x_74;
}
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_75 = lean_ctor_get(x_54, 0);
lean_inc(x_75);
x_76 = lean_ctor_get(x_54, 1);
lean_inc(x_76);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_77 = x_54;
} else {
 lean_dec_ref(x_54);
 x_77 = lean_box(0);
}
if (lean_is_scalar(x_77)) {
 x_78 = lean_alloc_ctor(1, 2, 0);
} else {
 x_78 = x_77;
}
lean_ctor_set(x_78, 0, x_75);
lean_ctor_set(x_78, 1, x_76);
return x_78;
}
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_79 = lean_array_fget(x_1, x_3);
x_80 = lean_unsigned_to_nat(1u);
x_81 = l_Lean_Syntax_getArg(x_79, x_80);
lean_dec(x_79);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
x_82 = l_Lean_Meta_whnf___at___private_Lean_Elab_Term_3__isTypeApp_x3f___spec__1(x_4, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_82) == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec(x_82);
if (lean_obj_tag(x_83) == 7)
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; 
x_98 = lean_ctor_get(x_83, 1);
lean_inc(x_98);
x_99 = lean_ctor_get(x_83, 2);
lean_inc(x_99);
lean_dec(x_83);
lean_inc(x_98);
x_100 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_100, 0, x_98);
x_101 = lean_ctor_get(x_8, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_8, 1);
lean_inc(x_102);
x_103 = lean_ctor_get(x_8, 2);
lean_inc(x_103);
x_104 = !lean_is_exclusive(x_101);
if (x_104 == 0)
{
uint8_t x_105; lean_object* x_106; lean_object* x_107; 
x_105 = 1;
lean_ctor_set_uint8(x_101, 0, x_105);
lean_ctor_set_uint8(x_101, 1, x_105);
lean_ctor_set_uint8(x_101, 2, x_105);
lean_ctor_set_uint8(x_101, 3, x_105);
x_106 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_106, 0, x_101);
lean_ctor_set(x_106, 1, x_102);
lean_ctor_set(x_106, 2, x_103);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_7);
lean_inc(x_6);
x_107 = l_Lean_Elab_Term_elabTermEnsuringType(x_81, x_100, x_105, x_6, x_7, x_106, x_9, x_10, x_11, x_84);
if (lean_obj_tag(x_107) == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; uint8_t x_112; 
x_108 = lean_ctor_get(x_107, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_107, 1);
lean_inc(x_109);
lean_dec(x_107);
x_110 = lean_ctor_get(x_10, 0);
lean_inc(x_110);
x_111 = l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__10;
x_112 = l_Lean_checkTraceOption(x_110, x_111);
lean_dec(x_110);
if (x_112 == 0)
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; 
lean_dec(x_98);
x_113 = lean_nat_add(x_3, x_80);
lean_dec(x_3);
x_114 = lean_expr_instantiate1(x_99, x_108);
lean_dec(x_99);
x_115 = lean_array_push(x_5, x_108);
x_3 = x_113;
x_4 = x_114;
x_5 = x_115;
x_12 = x_109;
goto _start;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; 
lean_inc(x_3);
x_117 = l_Nat_repr(x_3);
x_118 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_118, 0, x_117);
x_119 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_119, 0, x_118);
x_120 = l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__13;
x_121 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_119);
x_122 = l___private_Lean_Meta_ExprDefEq_12__addAssignmentInfo___closed__4;
x_123 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_123, 0, x_121);
lean_ctor_set(x_123, 1, x_122);
lean_inc(x_108);
x_124 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_124, 0, x_108);
x_125 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_125, 0, x_123);
lean_ctor_set(x_125, 1, x_124);
x_126 = l___private_Lean_Meta_ExprDefEq_8__checkTypesAndAssign___closed__7;
x_127 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_127, 0, x_125);
lean_ctor_set(x_127, 1, x_126);
x_128 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_128, 0, x_98);
x_129 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_129, 0, x_127);
lean_ctor_set(x_129, 1, x_128);
x_130 = l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_111, x_129, x_6, x_7, x_8, x_9, x_10, x_11, x_109);
x_131 = lean_ctor_get(x_130, 1);
lean_inc(x_131);
lean_dec(x_130);
x_132 = lean_nat_add(x_3, x_80);
lean_dec(x_3);
x_133 = lean_expr_instantiate1(x_99, x_108);
lean_dec(x_99);
x_134 = lean_array_push(x_5, x_108);
x_3 = x_132;
x_4 = x_133;
x_5 = x_134;
x_12 = x_131;
goto _start;
}
}
else
{
uint8_t x_136; 
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_136 = !lean_is_exclusive(x_107);
if (x_136 == 0)
{
return x_107;
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; 
x_137 = lean_ctor_get(x_107, 0);
x_138 = lean_ctor_get(x_107, 1);
lean_inc(x_138);
lean_inc(x_137);
lean_dec(x_107);
x_139 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_139, 0, x_137);
lean_ctor_set(x_139, 1, x_138);
return x_139;
}
}
}
else
{
uint8_t x_140; uint8_t x_141; uint8_t x_142; uint8_t x_143; uint8_t x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; 
x_140 = lean_ctor_get_uint8(x_101, 4);
x_141 = lean_ctor_get_uint8(x_101, 5);
x_142 = lean_ctor_get_uint8(x_101, 6);
x_143 = lean_ctor_get_uint8(x_101, 7);
lean_dec(x_101);
x_144 = 1;
x_145 = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_uint8(x_145, 0, x_144);
lean_ctor_set_uint8(x_145, 1, x_144);
lean_ctor_set_uint8(x_145, 2, x_144);
lean_ctor_set_uint8(x_145, 3, x_144);
lean_ctor_set_uint8(x_145, 4, x_140);
lean_ctor_set_uint8(x_145, 5, x_141);
lean_ctor_set_uint8(x_145, 6, x_142);
lean_ctor_set_uint8(x_145, 7, x_143);
x_146 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_102);
lean_ctor_set(x_146, 2, x_103);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_7);
lean_inc(x_6);
x_147 = l_Lean_Elab_Term_elabTermEnsuringType(x_81, x_100, x_144, x_6, x_7, x_146, x_9, x_10, x_11, x_84);
if (lean_obj_tag(x_147) == 0)
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; uint8_t x_152; 
x_148 = lean_ctor_get(x_147, 0);
lean_inc(x_148);
x_149 = lean_ctor_get(x_147, 1);
lean_inc(x_149);
lean_dec(x_147);
x_150 = lean_ctor_get(x_10, 0);
lean_inc(x_150);
x_151 = l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__10;
x_152 = l_Lean_checkTraceOption(x_150, x_151);
lean_dec(x_150);
if (x_152 == 0)
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; 
lean_dec(x_98);
x_153 = lean_nat_add(x_3, x_80);
lean_dec(x_3);
x_154 = lean_expr_instantiate1(x_99, x_148);
lean_dec(x_99);
x_155 = lean_array_push(x_5, x_148);
x_3 = x_153;
x_4 = x_154;
x_5 = x_155;
x_12 = x_149;
goto _start;
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; 
lean_inc(x_3);
x_157 = l_Nat_repr(x_3);
x_158 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_158, 0, x_157);
x_159 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_159, 0, x_158);
x_160 = l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__13;
x_161 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_161, 0, x_160);
lean_ctor_set(x_161, 1, x_159);
x_162 = l___private_Lean_Meta_ExprDefEq_12__addAssignmentInfo___closed__4;
x_163 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_163, 0, x_161);
lean_ctor_set(x_163, 1, x_162);
lean_inc(x_148);
x_164 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_164, 0, x_148);
x_165 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_165, 0, x_163);
lean_ctor_set(x_165, 1, x_164);
x_166 = l___private_Lean_Meta_ExprDefEq_8__checkTypesAndAssign___closed__7;
x_167 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_167, 0, x_165);
lean_ctor_set(x_167, 1, x_166);
x_168 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_168, 0, x_98);
x_169 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_169, 0, x_167);
lean_ctor_set(x_169, 1, x_168);
x_170 = l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_151, x_169, x_6, x_7, x_8, x_9, x_10, x_11, x_149);
x_171 = lean_ctor_get(x_170, 1);
lean_inc(x_171);
lean_dec(x_170);
x_172 = lean_nat_add(x_3, x_80);
lean_dec(x_3);
x_173 = lean_expr_instantiate1(x_99, x_148);
lean_dec(x_99);
x_174 = lean_array_push(x_5, x_148);
x_3 = x_172;
x_4 = x_173;
x_5 = x_174;
x_12 = x_171;
goto _start;
}
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; 
lean_dec(x_99);
lean_dec(x_98);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_176 = lean_ctor_get(x_147, 0);
lean_inc(x_176);
x_177 = lean_ctor_get(x_147, 1);
lean_inc(x_177);
if (lean_is_exclusive(x_147)) {
 lean_ctor_release(x_147, 0);
 lean_ctor_release(x_147, 1);
 x_178 = x_147;
} else {
 lean_dec_ref(x_147);
 x_178 = lean_box(0);
}
if (lean_is_scalar(x_178)) {
 x_179 = lean_alloc_ctor(1, 2, 0);
} else {
 x_179 = x_178;
}
lean_ctor_set(x_179, 0, x_176);
lean_ctor_set(x_179, 1, x_177);
return x_179;
}
}
}
else
{
lean_object* x_180; 
lean_dec(x_83);
lean_dec(x_81);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_180 = lean_box(0);
x_85 = x_180;
goto block_97;
}
block_97:
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; 
lean_dec(x_85);
x_86 = l_Array_toList___rarg(x_1);
x_87 = l_List_toString___at___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___spec__1(x_86);
x_88 = l_Array_HasRepr___rarg___closed__1;
x_89 = lean_string_append(x_88, x_87);
lean_dec(x_87);
x_90 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_90, 0, x_89);
x_91 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_91, 0, x_90);
x_92 = l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__6;
x_93 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_91);
x_94 = l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__9;
x_95 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
x_96 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_95, x_6, x_7, x_8, x_9, x_10, x_11, x_84);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_96;
}
}
else
{
uint8_t x_181; 
lean_dec(x_81);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_181 = !lean_is_exclusive(x_82);
if (x_181 == 0)
{
return x_82;
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; 
x_182 = lean_ctor_get(x_82, 0);
x_183 = lean_ctor_get(x_82, 1);
lean_inc(x_183);
lean_inc(x_182);
lean_dec(x_82);
x_184 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_184, 0, x_182);
lean_ctor_set(x_184, 1, x_183);
return x_184;
}
}
}
}
}
lean_object* l_List_toStringAux___main___at___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_List_toStringAux___main___at___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___spec__2(x_3, x_2);
return x_4;
}
}
lean_object* l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_1);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_1);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Match_4__elabDiscrsWitMatchType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Array_empty___closed__1;
x_13 = l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main(x_1, x_3, x_11, x_2, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Match_4__elabDiscrsWitMatchType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_Match_4__elabDiscrsWitMatchType(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Lean_Meta_getLocalDecl___at___private_Lean_Elab_Match_5__mkUserNameFor___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_4, 1);
lean_inc(x_9);
lean_inc(x_1);
x_10 = lean_local_ctx_find(x_9, x_1);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = l_Lean_Meta_throwUnknownFVar___rarg(x_1, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_4);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_1);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_8);
return x_13;
}
}
}
lean_object* l___private_Lean_Elab_Match_5__mkUserNameFor(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = l_Lean_Meta_getLocalDecl___at___private_Lean_Elab_Match_5__mkUserNameFor___spec__1(x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_2);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = l_Lean_LocalDecl_userName(x_12);
lean_dec(x_12);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = l_Lean_LocalDecl_userName(x_14);
lean_dec(x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_10);
if (x_18 == 0)
{
return x_10;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_10, 0);
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_10);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
else
{
lean_object* x_22; 
lean_dec(x_1);
x_22 = l_Lean_Elab_Term_mkFreshBinderName(x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_4);
return x_22;
}
}
}
lean_object* l_Lean_Meta_getLocalDecl___at___private_Lean_Elab_Match_5__mkUserNameFor___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_getLocalDecl___at___private_Lean_Elab_Match_5__mkUserNameFor___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l___private_Lean_Elab_Match_5__mkUserNameFor___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Match_5__mkUserNameFor(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_Meta_kabstract___at___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = l_Lean_Expr_toHeadIndex___main(x_2);
x_12 = lean_unsigned_to_nat(0u);
x_13 = l___private_Lean_HeadIndex_1__headNumArgsAux___main(x_2, x_12);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_st_mk_ref(x_14, x_10);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l___private_Lean_Meta_KAbstract_1__kabstractAux___main(x_3, x_2, x_11, x_13, x_1, x_12, x_16, x_6, x_7, x_8, x_9, x_17);
lean_dec(x_13);
lean_dec(x_11);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_st_ref_get(x_16, x_20);
lean_dec(x_16);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_21, 0);
lean_dec(x_23);
lean_ctor_set(x_21, 0, x_19);
return x_21;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_dec(x_21);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_19);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_dec(x_16);
x_26 = !lean_is_exclusive(x_18);
if (x_26 == 0)
{
return x_18;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_18, 0);
x_28 = lean_ctor_get(x_18, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_18);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
lean_object* l_Lean_Meta_mkEq___at___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Meta_AppBuilder_3__mkEqImp(x_1, x_2, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
lean_object* l_Lean_Meta_mkEqRefl___at___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Meta_AppBuilder_5__mkEqReflImp(x_1, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_4);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
x_7 = x_4;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_array_fget(x_4, x_3);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_array_fset(x_4, x_3, x_9);
x_11 = x_8;
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_13 = lean_ctor_get(x_11, 1);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_1, x_14);
lean_inc(x_2);
x_16 = l_Array_insertAt___rarg(x_13, x_15, x_2);
lean_dec(x_15);
lean_ctor_set(x_11, 1, x_16);
x_17 = lean_nat_add(x_3, x_14);
x_18 = x_11;
x_19 = lean_array_fset(x_10, x_3, x_18);
lean_dec(x_3);
x_3 = x_17;
x_4 = x_19;
goto _start;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_21 = lean_ctor_get(x_11, 0);
x_22 = lean_ctor_get(x_11, 1);
x_23 = lean_ctor_get(x_11, 2);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_11);
x_24 = lean_unsigned_to_nat(1u);
x_25 = lean_nat_add(x_1, x_24);
lean_inc(x_2);
x_26 = l_Array_insertAt___rarg(x_22, x_25, x_2);
lean_dec(x_25);
x_27 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set(x_27, 1, x_26);
lean_ctor_set(x_27, 2, x_23);
x_28 = lean_nat_add(x_3, x_24);
x_29 = x_27;
x_30 = lean_array_fset(x_10, x_3, x_29);
lean_dec(x_3);
x_3 = x_28;
x_4 = x_30;
goto _start;
}
}
}
}
lean_object* l___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_expr_instantiate1(x_1, x_2);
x_18 = l_Lean_mkAppStx___closed__9;
x_19 = lean_array_push(x_18, x_2);
x_20 = lean_array_push(x_19, x_9);
lean_inc(x_12);
x_21 = l_Lean_Meta_mkForallFVars___at_Lean_Elab_Term_elabForall___spec__2(x_20, x_17, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_3);
x_24 = l___private_Lean_Meta_AppBuilder_5__mkEqReflImp(x_3, x_12, x_13, x_14, x_15, x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_array_push(x_4, x_25);
x_28 = lean_array_push(x_27, x_3);
x_29 = x_5;
x_30 = lean_unsigned_to_nat(0u);
x_31 = l_Array_umapMAux___main___at___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main___spec__4(x_6, x_7, x_30, x_29);
x_32 = x_31;
x_33 = l___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main(x_8, x_6, x_28, x_22, x_32, x_10, x_11, x_12, x_13, x_14, x_15, x_26);
return x_33;
}
else
{
uint8_t x_34; 
lean_dec(x_22);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_34 = !lean_is_exclusive(x_24);
if (x_34 == 0)
{
return x_24;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_24, 0);
x_36 = lean_ctor_get(x_24, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_24);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
uint8_t x_38; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_38 = !lean_is_exclusive(x_21);
if (x_38 == 0)
{
return x_21;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_21, 0);
x_40 = lean_ctor_get(x_21, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_21);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
lean_object* l___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_8);
lean_inc(x_1);
x_16 = l___private_Lean_Meta_AppBuilder_3__mkEqImp(x_1, x_8, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_Syntax_getId(x_2);
x_20 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main___lambda__1___boxed), 16, 8);
lean_closure_set(x_20, 0, x_3);
lean_closure_set(x_20, 1, x_8);
lean_closure_set(x_20, 2, x_1);
lean_closure_set(x_20, 3, x_4);
lean_closure_set(x_20, 4, x_5);
lean_closure_set(x_20, 5, x_6);
lean_closure_set(x_20, 6, x_2);
lean_closure_set(x_20, 7, x_7);
x_21 = 0;
x_22 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_16__elabImplicitLambda___main___spec__1___rarg(x_19, x_21, x_17, x_20, x_9, x_10, x_11, x_12, x_13, x_14, x_18);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_16);
if (x_23 == 0)
{
return x_16;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_16, 0);
x_25 = lean_ctor_get(x_16, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_16);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
lean_object* l___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_eq(x_2, x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_2, x_15);
lean_dec(x_2);
x_17 = l_Lean_Syntax_inhabited;
x_18 = lean_array_get(x_17, x_1, x_16);
x_19 = l_Lean_Syntax_getArg(x_18, x_15);
x_20 = lean_box(0);
x_21 = 1;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_22 = l_Lean_Elab_Term_elabTerm(x_19, x_20, x_21, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l_Lean_Meta_instantiateMVars___at_Lean_Elab_Term_MVarErrorContext_logError___spec__1(x_23, x_6, x_7, x_8, x_9, x_10, x_11, x_24);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_26);
x_28 = l_Lean_Meta_inferType___at_Lean_Elab_Term_tryLiftAndCoe___spec__2(x_26, x_6, x_7, x_8, x_9, x_10, x_11, x_27);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l_Lean_Meta_instantiateMVars___at_Lean_Elab_Term_MVarErrorContext_logError___spec__1(x_29, x_6, x_7, x_8, x_9, x_10, x_11, x_30);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_box(0);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_26);
x_35 = l_Lean_Meta_kabstract___at___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main___spec__1(x_4, x_26, x_34, x_6, x_7, x_8, x_9, x_10, x_11, x_33);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
lean_inc(x_8);
lean_inc(x_6);
lean_inc(x_26);
x_38 = l___private_Lean_Elab_Match_5__mkUserNameFor(x_26, x_6, x_7, x_8, x_9, x_10, x_11, x_37);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = l_Lean_Syntax_getArg(x_18, x_13);
lean_dec(x_18);
x_42 = l_Lean_Syntax_isNone(x_41);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; uint8_t x_45; lean_object* x_46; 
x_43 = l_Lean_Syntax_getArg(x_41, x_13);
lean_dec(x_41);
x_44 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main___lambda__2), 15, 7);
lean_closure_set(x_44, 0, x_26);
lean_closure_set(x_44, 1, x_43);
lean_closure_set(x_44, 2, x_36);
lean_closure_set(x_44, 3, x_3);
lean_closure_set(x_44, 4, x_5);
lean_closure_set(x_44, 5, x_16);
lean_closure_set(x_44, 6, x_1);
x_45 = 0;
x_46 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_16__elabImplicitLambda___main___spec__1___rarg(x_39, x_45, x_32, x_44, x_6, x_7, x_8, x_9, x_10, x_11, x_40);
return x_46;
}
else
{
lean_object* x_47; uint8_t x_48; lean_object* x_49; 
lean_dec(x_41);
x_47 = lean_array_push(x_3, x_26);
x_48 = 0;
x_49 = l_Lean_mkForall(x_39, x_48, x_32, x_36);
x_2 = x_16;
x_3 = x_47;
x_4 = x_49;
x_12 = x_40;
goto _start;
}
}
else
{
uint8_t x_51; 
lean_dec(x_36);
lean_dec(x_32);
lean_dec(x_26);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_38);
if (x_51 == 0)
{
return x_38;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_38, 0);
x_53 = lean_ctor_get(x_38, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_38);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
else
{
uint8_t x_55; 
lean_dec(x_32);
lean_dec(x_26);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_55 = !lean_is_exclusive(x_35);
if (x_55 == 0)
{
return x_35;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_35, 0);
x_57 = lean_ctor_get(x_35, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_35);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_56);
lean_ctor_set(x_58, 1, x_57);
return x_58;
}
}
}
else
{
uint8_t x_59; 
lean_dec(x_26);
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_59 = !lean_is_exclusive(x_28);
if (x_59 == 0)
{
return x_28;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_28, 0);
x_61 = lean_ctor_get(x_28, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_28);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
else
{
uint8_t x_63; 
lean_dec(x_18);
lean_dec(x_16);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_63 = !lean_is_exclusive(x_22);
if (x_63 == 0)
{
return x_22;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_22, 0);
x_65 = lean_ctor_get(x_22, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_22);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_67 = l_Array_reverseAux___main___rarg(x_3, x_13);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_4);
lean_ctor_set(x_68, 1, x_5);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_12);
return x_70;
}
}
}
lean_object* l_Lean_Meta_kabstract___at___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_kabstract___at___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Lean_Meta_mkEq___at___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_mkEq___at___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Meta_mkEqRefl___at___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_mkEqRefl___at___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_umapMAux___main___at___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main___spec__4(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16) {
_start:
{
lean_object* x_17; 
x_17 = l___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16);
lean_dec(x_1);
return x_17;
}
}
lean_object* l___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Match_7__elabMatchTypeAndDiscrs(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_1);
x_13 = l_Lean_Syntax_isNone(x_2);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_12);
x_14 = lean_unsigned_to_nat(0u);
x_15 = l_Lean_Syntax_getArg(x_2, x_14);
x_16 = lean_unsigned_to_nat(1u);
x_17 = l_Lean_Syntax_getArg(x_15, x_16);
lean_dec(x_15);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_18 = l_Lean_Elab_Term_elabType(x_17, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_19);
x_21 = l___private_Lean_Elab_Match_4__elabDiscrsWitMatchType(x_1, x_19, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_20);
lean_dec(x_1);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_19);
lean_ctor_set(x_24, 1, x_3);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
lean_ctor_set(x_21, 0, x_25);
return x_21;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_26 = lean_ctor_get(x_21, 0);
x_27 = lean_ctor_get(x_21, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_21);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_19);
lean_ctor_set(x_28, 1, x_3);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_26);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_27);
return x_30;
}
}
else
{
uint8_t x_31; 
lean_dec(x_19);
lean_dec(x_3);
x_31 = !lean_is_exclusive(x_21);
if (x_31 == 0)
{
return x_21;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_21, 0);
x_33 = lean_ctor_get(x_21, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_21);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
uint8_t x_35; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_18);
if (x_35 == 0)
{
return x_18;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_18, 0);
x_37 = lean_ctor_get(x_18, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_18);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
lean_object* x_39; lean_object* x_40; 
x_39 = l_Array_empty___closed__1;
x_40 = l___private_Lean_Elab_Match_6__elabMatchTypeAndDiscrsAux___main(x_1, x_12, x_39, x_4, x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_40;
}
}
}
lean_object* l___private_Lean_Elab_Match_7__elabMatchTypeAndDiscrs___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Match_7__elabMatchTypeAndDiscrs(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_2);
return x_12;
}
}
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_expandMacrosInPatterns___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_nat_dec_lt(x_1, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_1);
x_7 = x_2;
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_4);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_array_fget(x_2, x_1);
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_array_fset(x_2, x_1, x_10);
x_12 = x_9;
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
x_16 = lean_ctor_get(x_12, 2);
x_17 = x_15;
x_18 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at_Lean_expandMacros___main___spec__1), 4, 2);
lean_closure_set(x_18, 0, x_10);
lean_closure_set(x_18, 1, x_17);
x_19 = x_18;
lean_inc(x_3);
x_20 = lean_apply_2(x_19, x_3, x_4);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_ctor_set(x_12, 1, x_21);
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_nat_add(x_1, x_23);
x_25 = x_12;
x_26 = lean_array_fset(x_11, x_1, x_25);
lean_dec(x_1);
x_1 = x_24;
x_2 = x_26;
x_4 = x_22;
goto _start;
}
else
{
uint8_t x_28; 
lean_free_object(x_12);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_3);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_20);
if (x_28 == 0)
{
return x_20;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_20, 0);
x_30 = lean_ctor_get(x_20, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_20);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_32 = lean_ctor_get(x_12, 0);
x_33 = lean_ctor_get(x_12, 1);
x_34 = lean_ctor_get(x_12, 2);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_12);
x_35 = x_33;
x_36 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at_Lean_expandMacros___main___spec__1), 4, 2);
lean_closure_set(x_36, 0, x_10);
lean_closure_set(x_36, 1, x_35);
x_37 = x_36;
lean_inc(x_3);
x_38 = lean_apply_2(x_37, x_3, x_4);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_41, 0, x_32);
lean_ctor_set(x_41, 1, x_39);
lean_ctor_set(x_41, 2, x_34);
x_42 = lean_unsigned_to_nat(1u);
x_43 = lean_nat_add(x_1, x_42);
x_44 = x_41;
x_45 = lean_array_fset(x_11, x_1, x_44);
lean_dec(x_1);
x_1 = x_43;
x_2 = x_45;
x_4 = x_40;
goto _start;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_34);
lean_dec(x_32);
lean_dec(x_11);
lean_dec(x_3);
lean_dec(x_1);
x_47 = lean_ctor_get(x_38, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_38, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 x_49 = x_38;
} else {
 lean_dec_ref(x_38);
 x_49 = lean_box(0);
}
if (lean_is_scalar(x_49)) {
 x_50 = lean_alloc_ctor(1, 2, 0);
} else {
 x_50 = x_49;
}
lean_ctor_set(x_50, 0, x_47);
lean_ctor_set(x_50, 1, x_48);
return x_50;
}
}
}
}
}
lean_object* l_Lean_Elab_Term_expandMacrosInPatterns(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = x_1;
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at_Lean_Elab_Term_expandMacrosInPatterns___spec__1), 4, 2);
lean_closure_set(x_6, 0, x_5);
lean_closure_set(x_6, 1, x_4);
x_7 = x_6;
x_8 = lean_apply_2(x_7, x_2, x_3);
return x_8;
}
}
lean_object* l___private_Lean_Elab_Match_8__getMatchAltsAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_1);
x_6 = lean_nat_dec_lt(x_2, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
else
{
lean_object* x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_7 = lean_array_fget(x_1, x_2);
x_8 = l_Lean_Syntax_isNone(x_3);
lean_inc(x_7);
x_9 = l_Lean_Syntax_getKind(x_7);
x_10 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__18;
x_11 = lean_name_eq(x_9, x_10);
lean_dec(x_9);
if (x_8 == 0)
{
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_3);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_2, x_12);
lean_dec(x_2);
x_2 = x_13;
x_3 = x_7;
goto _start;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_2, x_15);
lean_dec(x_2);
lean_inc(x_3);
x_17 = l_Lean_Elab_Term_mkMatchAltView(x_3, x_7);
lean_dec(x_7);
x_18 = lean_array_push(x_4, x_17);
x_2 = x_16;
x_4 = x_18;
goto _start;
}
}
else
{
lean_dec(x_3);
if (x_11 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_2, x_20);
lean_dec(x_2);
x_2 = x_21;
x_3 = x_7;
goto _start;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_nat_add(x_2, x_23);
lean_dec(x_2);
lean_inc(x_7);
x_25 = l_Lean_Elab_Term_mkMatchAltView(x_7, x_7);
x_26 = lean_array_push(x_4, x_25);
x_2 = x_24;
x_3 = x_7;
x_4 = x_26;
goto _start;
}
}
}
}
}
lean_object* l___private_Lean_Elab_Match_8__getMatchAltsAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Elab_Match_8__getMatchAltsAux___main(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Match_8__getMatchAltsAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Elab_Match_8__getMatchAltsAux___main(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Match_8__getMatchAltsAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Elab_Match_8__getMatchAltsAux(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Match_9__getMatchAlts(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_2 = lean_unsigned_to_nat(4u);
x_3 = l_Lean_Syntax_getArg(x_1, x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Lean_Syntax_getArg(x_3, x_4);
x_6 = lean_unsigned_to_nat(1u);
x_7 = l_Lean_Syntax_getArg(x_3, x_6);
lean_dec(x_3);
x_8 = l_Lean_Syntax_getArgs(x_7);
lean_dec(x_7);
x_9 = l_Array_empty___closed__1;
x_10 = l___private_Lean_Elab_Match_8__getMatchAltsAux___main(x_8, x_4, x_5, x_9);
lean_dec(x_8);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Match_9__getMatchAlts___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Elab_Match_9__getMatchAlts(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_mkInaccessible(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l___private_Lean_LocalContext_4__mkInaccessibleUserNameAux___closed__2;
x_3 = l_Lean_mkAnnotation(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_inaccessible_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l___private_Lean_LocalContext_4__mkInaccessibleUserNameAux___closed__2;
x_3 = l_Lean_annotation_x3f(x_2, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_inaccessible_x3f___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Elab_Term_inaccessible_x3f(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_PatternVar_hasToString___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("?m");
return x_1;
}
}
lean_object* l_Lean_Elab_Term_PatternVar_hasToString(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
lean_dec(x_1);
x_3 = l_System_FilePath_dirName___closed__1;
x_4 = l_Lean_Name_toStringWithSep___main(x_3, x_2);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = l_System_FilePath_dirName___closed__1;
x_7 = l_Lean_Name_toStringWithSep___main(x_6, x_5);
x_8 = l_Lean_Elab_Term_PatternVar_hasToString___closed__1;
x_9 = lean_string_append(x_8, x_7);
lean_dec(x_7);
return x_9;
}
}
}
lean_object* _init_l___private_Lean_Elab_Match_10__registerAuxiliaryNodeKind___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("MVarWithIdKind");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_10__registerAuxiliaryNodeKind___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Match_10__registerAuxiliaryNodeKind___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Match_10__registerAuxiliaryNodeKind(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Match_10__registerAuxiliaryNodeKind___closed__2;
x_3 = l_Lean_Parser_registerBuiltinNodeKind(x_2, x_1);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Match_11__mkMVarSyntax___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Lean_mkFreshId___at___private_Lean_Elab_Binders_7__elabBinderViews___main___spec__1___rarg(x_1, x_2);
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = l_Array_empty___closed__1;
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
x_8 = l_Lean_mkOptionalNode___closed__2;
x_9 = lean_array_push(x_8, x_7);
x_10 = l___private_Lean_Elab_Match_10__registerAuxiliaryNodeKind___closed__2;
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
lean_ctor_set(x_3, 0, x_11);
return x_3;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_3);
x_14 = l_Array_empty___closed__1;
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_12);
lean_ctor_set(x_15, 1, x_14);
x_16 = l_Lean_mkOptionalNode___closed__2;
x_17 = lean_array_push(x_16, x_15);
x_18 = l___private_Lean_Elab_Match_10__registerAuxiliaryNodeKind___closed__2;
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_13);
return x_20;
}
}
}
lean_object* l___private_Lean_Elab_Match_11__mkMVarSyntax(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_11__mkMVarSyntax___rarg___boxed), 2, 0);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Match_11__mkMVarSyntax___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l___private_Lean_Elab_Match_11__mkMVarSyntax___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Match_11__mkMVarSyntax___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Elab_Match_11__mkMVarSyntax(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Match_12__getMVarSyntaxMVarId(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Syntax_getArg(x_1, x_2);
x_4 = l_Lean_Syntax_getKind(x_3);
return x_4;
}
}
lean_object* l___private_Lean_Elab_Match_12__getMVarSyntaxMVarId___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l___private_Lean_Elab_Match_12__getMVarSyntaxMVarId(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabMVarWithIdKind(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = l___private_Lean_Elab_Match_12__getMVarSyntaxMVarId(x_1);
x_11 = l_Lean_mkMVar(x_10);
x_12 = l_Lean_Elab_Term_mkInaccessible(x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
}
lean_object* l_Lean_Elab_Term_elabMVarWithIdKind___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabMVarWithIdKind(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabMVarWithIdKind___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabMVarWithIdKind___boxed), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabMVarWithIdKind(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___private_Lean_Elab_Match_10__registerAuxiliaryNodeKind___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabMVarWithIdKind___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Term_elabInaccessible(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = 1;
x_13 = l_Lean_Elab_Term_elabTerm(x_11, x_2, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = l_Lean_Elab_Term_mkInaccessible(x_15);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
x_19 = l_Lean_Elab_Term_mkInaccessible(x_17);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_13);
if (x_21 == 0)
{
return x_13;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_13, 0);
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_13);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabInaccessible___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_elabInaccessible(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabInaccessible___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("inaccessible");
return x_1;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabInaccessible___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l___regBuiltin_Lean_Elab_Term_elabInaccessible___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabInaccessible___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabInaccessible___boxed), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabInaccessible(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___regBuiltin_Lean_Elab_Term_elabInaccessible___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabInaccessible___closed__3;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Match_13__throwCtorExpected___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_7, 3);
x_11 = l_Lean_addMessageContextFull___at_Lean_Meta_Lean_AddMessageContext___spec__1(x_1, x_5, x_6, x_7, x_8, x_9);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
lean_ctor_set_tag(x_11, 1);
lean_ctor_set(x_11, 0, x_14);
return x_11;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_11, 0);
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_11);
lean_inc(x_10);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_10);
lean_ctor_set(x_17, 1, x_15);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Match_13__throwCtorExpected___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at___private_Lean_Elab_Match_13__throwCtorExpected___spec__1___rarg___boxed), 9, 0);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_13__throwCtorExpected___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid pattern, constructor or constant marked with '[matchPattern]' expected");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_13__throwCtorExpected___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_13__throwCtorExpected___rarg___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_13__throwCtorExpected___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_13__throwCtorExpected___rarg___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Match_13__throwCtorExpected___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = l___private_Lean_Elab_Match_13__throwCtorExpected___rarg___closed__3;
x_10 = l_Lean_throwError___at___private_Lean_Elab_Match_13__throwCtorExpected___spec__1___rarg(x_9, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Match_13__throwCtorExpected(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_13__throwCtorExpected___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Match_13__throwCtorExpected___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwError___at___private_Lean_Elab_Match_13__throwCtorExpected___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Match_13__throwCtorExpected___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Match_13__throwCtorExpected___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l_Array_iterateMAux___main___at___private_Lean_Elab_Match_14__getNumExplicitCtorParams___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_2);
x_13 = lean_nat_dec_lt(x_3, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_7);
lean_dec(x_3);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_4);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_array_fget(x_2, x_3);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_add(x_3, x_16);
lean_dec(x_3);
x_18 = l_Lean_Expr_fvarId_x21(x_15);
lean_dec(x_15);
lean_inc(x_7);
x_19 = l_Lean_Meta_getLocalDecl___at___private_Lean_Elab_Match_5__mkUserNameFor___spec__1(x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; uint8_t x_23; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_LocalDecl_binderInfo(x_20);
lean_dec(x_20);
x_23 = l_Lean_BinderInfo_isExplicit(x_22);
if (x_23 == 0)
{
x_3 = x_17;
x_11 = x_21;
goto _start;
}
else
{
lean_object* x_25; 
x_25 = lean_nat_add(x_4, x_16);
lean_dec(x_4);
x_3 = x_17;
x_4 = x_25;
x_11 = x_21;
goto _start;
}
}
else
{
uint8_t x_27; 
lean_dec(x_17);
lean_dec(x_7);
lean_dec(x_4);
x_27 = !lean_is_exclusive(x_19);
if (x_27 == 0)
{
return x_19;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_19, 0);
x_29 = lean_ctor_get(x_19, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_19);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
}
lean_object* l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Elab_Match_14__getNumExplicitCtorParams___spec__2___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lean_apply_9(x_1, x_4, x_5, x_2, x_3, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
lean_object* l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Elab_Match_14__getNumExplicitCtorParams___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Elab_Match_14__getNumExplicitCtorParams___spec__2___rarg___lambda__1), 10, 3);
lean_closure_set(x_11, 0, x_3);
lean_closure_set(x_11, 1, x_4);
lean_closure_set(x_11, 2, x_5);
x_12 = l___private_Lean_Meta_Basic_21__forallBoundedTelescopeImp___rarg(x_1, x_2, x_11, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
return x_12;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_12);
if (x_17 == 0)
{
return x_12;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_12, 0);
x_19 = lean_ctor_get(x_12, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_12);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
lean_object* l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Elab_Match_14__getNumExplicitCtorParams___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Elab_Match_14__getNumExplicitCtorParams___spec__2___rarg), 10, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Match_14__getNumExplicitCtorParams___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_Array_iterateMAux___main___at___private_Lean_Elab_Match_14__getNumExplicitCtorParams___spec__1(x_1, x_1, x_10, x_10, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* _init_l___private_Lean_Elab_Match_14__getNumExplicitCtorParams___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_14__getNumExplicitCtorParams___lambda__1___boxed), 9, 0);
return x_1;
}
}
lean_object* l___private_Lean_Elab_Match_14__getNumExplicitCtorParams(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_9, 2);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_ctor_get(x_1, 3);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = l___private_Lean_Elab_Match_14__getNumExplicitCtorParams___closed__1;
x_14 = l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Elab_Match_14__getNumExplicitCtorParams___spec__2___rarg(x_10, x_12, x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_14;
}
}
lean_object* l_Array_iterateMAux___main___at___private_Lean_Elab_Match_14__getNumExplicitCtorParams___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_iterateMAux___main___at___private_Lean_Elab_Match_14__getNumExplicitCtorParams___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Match_14__getNumExplicitCtorParams___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Match_14__getNumExplicitCtorParams___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* _init_l___private_Lean_Elab_Match_15__throwAmbiguous___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ambiguous pattern, use fully qualified name, possible interpretations ");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_15__throwAmbiguous___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_15__throwAmbiguous___rarg___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_15__throwAmbiguous___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_15__throwAmbiguous___rarg___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Match_15__throwAmbiguous___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = l_List_map___main___at_Lean_MessageData_hasCoeOfListExpr___spec__1(x_1);
x_11 = l_Lean_MessageData_ofList(x_10);
lean_dec(x_10);
x_12 = l___private_Lean_Elab_Match_15__throwAmbiguous___rarg___closed__3;
x_13 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
x_14 = l_Lean_throwError___at___private_Lean_Elab_Match_13__throwCtorExpected___spec__1___rarg(x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_14;
}
}
lean_object* l___private_Lean_Elab_Match_15__throwAmbiguous(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_15__throwAmbiguous___rarg___boxed), 9, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Match_15__throwAmbiguous___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Match_15__throwAmbiguous___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_List_filterAux___main___at_Lean_Elab_Term_CollectPatternVars_resolveId_x3f___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
x_8 = l_List_isEmpty___rarg(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_free_object(x_1);
lean_dec(x_5);
x_1 = x_6;
goto _start;
}
else
{
lean_ctor_set(x_1, 1, x_2);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_1);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
x_14 = l_List_isEmpty___rarg(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_dec(x_11);
x_1 = x_12;
goto _start;
}
else
{
lean_object* x_16; 
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_2);
x_1 = x_12;
x_2 = x_16;
goto _start;
}
}
}
}
}
lean_object* l_List_map___main___at_Lean_Elab_Term_CollectPatternVars_resolveId_x3f___spec__2(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = l_List_map___main___at_Lean_Elab_Term_CollectPatternVars_resolveId_x3f___spec__2(x_5);
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_dec(x_4);
lean_ctor_set(x_1, 1, x_6);
lean_ctor_set(x_1, 0, x_7);
return x_1;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_1, 0);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_1);
x_10 = l_List_map___main___at_Lean_Elab_Term_CollectPatternVars_resolveId_x3f___spec__2(x_9);
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_CollectPatternVars_resolveId_x3f___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_box(0);
x_2 = l_List_filterAux___main___at_Lean_Elab_Term_CollectPatternVars_resolveId_x3f___spec__1(x_1, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_CollectPatternVars_resolveId_x3f___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_CollectPatternVars_resolveId_x3f___closed__1;
x_2 = l_List_map___main___at_Lean_Elab_Term_CollectPatternVars_resolveId_x3f___spec__2(x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_CollectPatternVars_resolveId_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_1) == 3)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_1, 2);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 3);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_box(0);
lean_inc(x_5);
lean_inc(x_3);
x_13 = l_Lean_Elab_Term_resolveName(x_10, x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
x_17 = l_List_filterAux___main___at_Lean_Elab_Term_CollectPatternVars_resolveId_x3f___spec__1(x_15, x_12);
x_18 = l_List_map___main___at_Lean_Elab_Term_CollectPatternVars_resolveId_x3f___spec__2(x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
lean_dec(x_5);
lean_dec(x_3);
x_19 = lean_box(0);
lean_ctor_set(x_13, 0, x_19);
return x_13;
}
else
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_5);
lean_dec(x_3);
x_21 = lean_ctor_get(x_18, 0);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_13, 0, x_22);
return x_13;
}
else
{
lean_object* x_23; 
lean_dec(x_20);
lean_free_object(x_13);
x_23 = l___private_Lean_Elab_Match_15__throwAmbiguous___rarg(x_18, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_16);
lean_dec(x_5);
lean_dec(x_3);
return x_23;
}
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_13, 0);
x_25 = lean_ctor_get(x_13, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_13);
x_26 = l_List_filterAux___main___at_Lean_Elab_Term_CollectPatternVars_resolveId_x3f___spec__1(x_24, x_12);
x_27 = l_List_map___main___at_Lean_Elab_Term_CollectPatternVars_resolveId_x3f___spec__2(x_26);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_5);
lean_dec(x_3);
x_28 = lean_box(0);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_25);
return x_29;
}
else
{
lean_object* x_30; 
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_5);
lean_dec(x_3);
x_31 = lean_ctor_get(x_27, 0);
lean_inc(x_31);
lean_dec(x_27);
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_25);
return x_33;
}
else
{
lean_object* x_34; 
lean_dec(x_30);
x_34 = l___private_Lean_Elab_Match_15__throwAmbiguous___rarg(x_27, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_25);
lean_dec(x_5);
lean_dec(x_3);
return x_34;
}
}
}
}
else
{
uint8_t x_35; 
x_35 = !lean_is_exclusive(x_13);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_13, 1);
x_37 = lean_ctor_get(x_13, 0);
lean_dec(x_37);
x_38 = l_Lean_Elab_Term_CollectPatternVars_resolveId_x3f___closed__2;
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; 
lean_dec(x_5);
lean_dec(x_3);
x_39 = lean_box(0);
lean_ctor_set_tag(x_13, 0);
lean_ctor_set(x_13, 0, x_39);
return x_13;
}
else
{
lean_object* x_40; 
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; 
lean_dec(x_5);
lean_dec(x_3);
x_41 = lean_ctor_get(x_38, 0);
lean_inc(x_41);
x_42 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set_tag(x_13, 0);
lean_ctor_set(x_13, 0, x_42);
return x_13;
}
else
{
lean_object* x_43; 
lean_dec(x_40);
lean_free_object(x_13);
x_43 = l___private_Lean_Elab_Match_15__throwAmbiguous___rarg(x_38, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_36);
lean_dec(x_5);
lean_dec(x_3);
return x_43;
}
}
}
else
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_13, 1);
lean_inc(x_44);
lean_dec(x_13);
x_45 = l_Lean_Elab_Term_CollectPatternVars_resolveId_x3f___closed__2;
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; 
lean_dec(x_5);
lean_dec(x_3);
x_46 = lean_box(0);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_44);
return x_47;
}
else
{
lean_object* x_48; 
x_48 = lean_ctor_get(x_45, 1);
lean_inc(x_48);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
lean_dec(x_5);
lean_dec(x_3);
x_49 = lean_ctor_get(x_45, 0);
lean_inc(x_49);
x_50 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_50, 0, x_49);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_44);
return x_51;
}
else
{
lean_object* x_52; 
lean_dec(x_48);
x_52 = l___private_Lean_Elab_Match_15__throwAmbiguous___rarg(x_45, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_44);
lean_dec(x_5);
lean_dec(x_3);
return x_52;
}
}
}
}
}
else
{
lean_object* x_53; lean_object* x_54; 
lean_dec(x_1);
x_53 = l_Lean_Elab_elabAttr___rarg___closed__3;
x_54 = l_Lean_throwError___at___private_Lean_Elab_Match_13__throwCtorExpected___spec__1___rarg(x_53, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_5);
lean_dec(x_3);
return x_54;
}
}
}
lean_object* l_Lean_Elab_Term_CollectPatternVars_resolveId_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_CollectPatternVars_resolveId_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
return x_10;
}
}
lean_object* _init_l___private_Lean_Elab_Match_16__throwInvalidPattern___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid pattern");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_16__throwInvalidPattern___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_16__throwInvalidPattern___rarg___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_16__throwInvalidPattern___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_16__throwInvalidPattern___rarg___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Match_16__throwInvalidPattern___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = l___private_Lean_Elab_Match_16__throwInvalidPattern___rarg___closed__3;
x_10 = l_Lean_throwError___at___private_Lean_Elab_Match_13__throwCtorExpected___spec__1___rarg(x_9, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Match_16__throwInvalidPattern(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_16__throwInvalidPattern___rarg___boxed), 8, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Match_16__throwInvalidPattern___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Match_16__throwInvalidPattern___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* _init_l_Lean_Elab_Term_CollectPatternVars_CtorApp_Context_inhabited___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_box(0);
x_4 = 0;
x_5 = l_Array_empty___closed__1;
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(x_7, 0, x_3);
lean_ctor_set(x_7, 1, x_1);
lean_ctor_set(x_7, 2, x_5);
lean_ctor_set(x_7, 3, x_6);
lean_ctor_set(x_7, 4, x_5);
lean_ctor_set(x_7, 5, x_2);
lean_ctor_set(x_7, 6, x_5);
lean_ctor_set_uint8(x_7, sizeof(void*)*7, x_4);
lean_ctor_set_uint8(x_7, sizeof(void*)*7 + 1, x_4);
return x_7;
}
}
lean_object* _init_l_Lean_Elab_Term_CollectPatternVars_CtorApp_Context_inhabited() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Term_CollectPatternVars_CtorApp_Context_inhabited___closed__1;
return x_1;
}
}
uint8_t l___private_Lean_Elab_Match_17__isDone(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = lean_ctor_get(x_1, 2);
x_3 = lean_array_get_size(x_2);
x_4 = lean_ctor_get(x_1, 3);
x_5 = lean_nat_dec_le(x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Match_17__isDone___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Match_17__isDone(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_18__finalize___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("too many arguments");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_18__finalize___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_18__finalize___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_18__finalize___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_18__finalize___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Match_18__finalize(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_1, 4);
lean_inc(x_10);
x_11 = l_Array_isEmpty___rarg(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_1);
x_12 = l___private_Lean_Elab_Match_18__finalize___closed__3;
x_13 = l_Lean_throwError___at___private_Lean_Elab_Match_13__throwCtorExpected___spec__1___rarg(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_13;
}
else
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_1, 5);
lean_inc(x_14);
x_15 = l_List_isEmpty___rarg(x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_1);
x_16 = l___private_Lean_Elab_Match_18__finalize___closed__3;
x_17 = l_Lean_throwError___at___private_Lean_Elab_Match_13__throwCtorExpected___spec__1___rarg(x_16, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_19);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
x_23 = lean_ctor_get(x_1, 0);
lean_inc(x_23);
x_24 = l___private_Lean_Elab_Binders_16__expandMatchAltsIntoMatchAux___main___closed__5;
x_25 = lean_array_push(x_24, x_23);
x_26 = l___private_Lean_Elab_Term_10__isExplicit___closed__2;
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
x_28 = lean_ctor_get(x_1, 6);
lean_inc(x_28);
lean_dec(x_1);
x_29 = l_Lean_mkAppStx(x_27, x_28);
lean_ctor_set(x_20, 0, x_29);
return x_20;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_30 = lean_ctor_get(x_20, 1);
lean_inc(x_30);
lean_dec(x_20);
x_31 = lean_ctor_get(x_1, 0);
lean_inc(x_31);
x_32 = l___private_Lean_Elab_Binders_16__expandMatchAltsIntoMatchAux___main___closed__5;
x_33 = lean_array_push(x_32, x_31);
x_34 = l___private_Lean_Elab_Term_10__isExplicit___closed__2;
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
x_36 = lean_ctor_get(x_1, 6);
lean_inc(x_36);
lean_dec(x_1);
x_37 = l_Lean_mkAppStx(x_35, x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_30);
return x_38;
}
}
}
}
}
lean_object* l___private_Lean_Elab_Match_18__finalize___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Match_18__finalize(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
uint8_t l___private_Lean_Elab_Match_19__isNextArgAccessible(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 1);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_1, 3);
x_4 = lean_ctor_get(x_1, 2);
x_5 = lean_array_get_size(x_4);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; uint8_t x_10; 
x_8 = lean_array_fget(x_4, x_3);
x_9 = l_Lean_LocalDecl_binderInfo(x_8);
lean_dec(x_8);
x_10 = l_Lean_BinderInfo_isExplicit(x_9);
return x_10;
}
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_1, 3);
x_12 = lean_ctor_get(x_2, 0);
x_13 = lean_ctor_get(x_12, 3);
x_14 = lean_nat_dec_le(x_13, x_11);
return x_14;
}
}
}
lean_object* l___private_Lean_Elab_Match_19__isNextArgAccessible___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Match_19__isNextArgAccessible(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Match_20__getNextParam(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 2);
x_4 = lean_ctor_get(x_1, 3);
x_5 = l_Lean_LocalDecl_Inhabited;
x_6 = lean_array_get(x_5, x_3, x_4);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_add(x_4, x_7);
lean_dec(x_4);
lean_ctor_set(x_1, 3, x_8);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_1);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
x_12 = lean_ctor_get_uint8(x_1, sizeof(void*)*7);
x_13 = lean_ctor_get_uint8(x_1, sizeof(void*)*7 + 1);
x_14 = lean_ctor_get(x_1, 2);
x_15 = lean_ctor_get(x_1, 3);
x_16 = lean_ctor_get(x_1, 4);
x_17 = lean_ctor_get(x_1, 5);
x_18 = lean_ctor_get(x_1, 6);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_19 = l_Lean_LocalDecl_Inhabited;
x_20 = lean_array_get(x_19, x_14, x_15);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_15, x_21);
lean_dec(x_15);
x_23 = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(x_23, 0, x_10);
lean_ctor_set(x_23, 1, x_11);
lean_ctor_set(x_23, 2, x_14);
lean_ctor_set(x_23, 3, x_22);
lean_ctor_set(x_23, 4, x_16);
lean_ctor_set(x_23, 5, x_17);
lean_ctor_set(x_23, 6, x_18);
lean_ctor_set_uint8(x_23, sizeof(void*)*7, x_12);
lean_ctor_set_uint8(x_23, sizeof(void*)*7 + 1, x_13);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_20);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
lean_object* _init_l___private_Lean_Elab_Match_21__pushNewArg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Tactic_Basic_2__expandTacticMacroFns___main___closed__5;
x_2 = l_Lean_Elab_Term_CollectPatternVars_CtorApp_Context_inhabited;
x_3 = l_monadInhabited___rarg(x_1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Match_21__pushNewArg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
if (x_2 == 0)
{
lean_object* x_13; uint8_t x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_13 = lean_ctor_get(x_4, 0);
lean_inc(x_13);
lean_dec(x_4);
x_14 = !lean_is_exclusive(x_3);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_3, 6);
x_16 = lean_array_push(x_15, x_13);
lean_ctor_set(x_3, 6, x_16);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_3);
lean_ctor_set(x_17, 1, x_12);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_18 = lean_ctor_get(x_3, 0);
x_19 = lean_ctor_get(x_3, 1);
x_20 = lean_ctor_get_uint8(x_3, sizeof(void*)*7);
x_21 = lean_ctor_get_uint8(x_3, sizeof(void*)*7 + 1);
x_22 = lean_ctor_get(x_3, 2);
x_23 = lean_ctor_get(x_3, 3);
x_24 = lean_ctor_get(x_3, 4);
x_25 = lean_ctor_get(x_3, 5);
x_26 = lean_ctor_get(x_3, 6);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_3);
x_27 = lean_array_push(x_26, x_13);
x_28 = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(x_28, 0, x_18);
lean_ctor_set(x_28, 1, x_19);
lean_ctor_set(x_28, 2, x_22);
lean_ctor_set(x_28, 3, x_23);
lean_ctor_set(x_28, 4, x_24);
lean_ctor_set(x_28, 5, x_25);
lean_ctor_set(x_28, 6, x_27);
lean_ctor_set_uint8(x_28, sizeof(void*)*7, x_20);
lean_ctor_set_uint8(x_28, sizeof(void*)*7 + 1, x_21);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_12);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_4, 0);
lean_inc(x_30);
lean_dec(x_4);
x_31 = lean_apply_9(x_1, x_30, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_31) == 0)
{
uint8_t x_32; 
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_3);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_31, 0);
x_35 = lean_ctor_get(x_3, 6);
x_36 = lean_array_push(x_35, x_34);
lean_ctor_set(x_3, 6, x_36);
lean_ctor_set(x_31, 0, x_3);
return x_31;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; uint8_t x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_37 = lean_ctor_get(x_31, 0);
x_38 = lean_ctor_get(x_3, 0);
x_39 = lean_ctor_get(x_3, 1);
x_40 = lean_ctor_get_uint8(x_3, sizeof(void*)*7);
x_41 = lean_ctor_get_uint8(x_3, sizeof(void*)*7 + 1);
x_42 = lean_ctor_get(x_3, 2);
x_43 = lean_ctor_get(x_3, 3);
x_44 = lean_ctor_get(x_3, 4);
x_45 = lean_ctor_get(x_3, 5);
x_46 = lean_ctor_get(x_3, 6);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_3);
x_47 = lean_array_push(x_46, x_37);
x_48 = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(x_48, 0, x_38);
lean_ctor_set(x_48, 1, x_39);
lean_ctor_set(x_48, 2, x_42);
lean_ctor_set(x_48, 3, x_43);
lean_ctor_set(x_48, 4, x_44);
lean_ctor_set(x_48, 5, x_45);
lean_ctor_set(x_48, 6, x_47);
lean_ctor_set_uint8(x_48, sizeof(void*)*7, x_40);
lean_ctor_set_uint8(x_48, sizeof(void*)*7 + 1, x_41);
lean_ctor_set(x_31, 0, x_48);
return x_31;
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; uint8_t x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_49 = lean_ctor_get(x_31, 0);
x_50 = lean_ctor_get(x_31, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_31);
x_51 = lean_ctor_get(x_3, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_3, 1);
lean_inc(x_52);
x_53 = lean_ctor_get_uint8(x_3, sizeof(void*)*7);
x_54 = lean_ctor_get_uint8(x_3, sizeof(void*)*7 + 1);
x_55 = lean_ctor_get(x_3, 2);
lean_inc(x_55);
x_56 = lean_ctor_get(x_3, 3);
lean_inc(x_56);
x_57 = lean_ctor_get(x_3, 4);
lean_inc(x_57);
x_58 = lean_ctor_get(x_3, 5);
lean_inc(x_58);
x_59 = lean_ctor_get(x_3, 6);
lean_inc(x_59);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 lean_ctor_release(x_3, 4);
 lean_ctor_release(x_3, 5);
 lean_ctor_release(x_3, 6);
 x_60 = x_3;
} else {
 lean_dec_ref(x_3);
 x_60 = lean_box(0);
}
x_61 = lean_array_push(x_59, x_49);
if (lean_is_scalar(x_60)) {
 x_62 = lean_alloc_ctor(0, 7, 2);
} else {
 x_62 = x_60;
}
lean_ctor_set(x_62, 0, x_51);
lean_ctor_set(x_62, 1, x_52);
lean_ctor_set(x_62, 2, x_55);
lean_ctor_set(x_62, 3, x_56);
lean_ctor_set(x_62, 4, x_57);
lean_ctor_set(x_62, 5, x_58);
lean_ctor_set(x_62, 6, x_61);
lean_ctor_set_uint8(x_62, sizeof(void*)*7, x_53);
lean_ctor_set_uint8(x_62, sizeof(void*)*7 + 1, x_54);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_50);
return x_63;
}
}
else
{
uint8_t x_64; 
lean_dec(x_3);
x_64 = !lean_is_exclusive(x_31);
if (x_64 == 0)
{
return x_31;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_31, 0);
x_66 = lean_ctor_get(x_31, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_31);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_68 = l___private_Lean_Elab_Match_21__pushNewArg___closed__1;
x_69 = l_unreachable_x21___rarg(x_68);
x_70 = lean_apply_8(x_69, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_70;
}
}
}
lean_object* l___private_Lean_Elab_Match_21__pushNewArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; lean_object* x_14; 
x_13 = lean_unbox(x_2);
lean_dec(x_2);
x_14 = l___private_Lean_Elab_Match_21__pushNewArg(x_1, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_14;
}
}
lean_object* _init_l___private_Lean_Elab_Match_22__processExplicitArg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("explicit parameter is missing, unused named arguments ");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_22__processExplicitArg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_22__processExplicitArg___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_22__processExplicitArg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_22__processExplicitArg___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_22__processExplicitArg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__12;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Match_22__processExplicitArg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_3, 5);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = lean_ctor_get_uint8(x_3, sizeof(void*)*7 + 1);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_1);
x_14 = lean_ctor_get(x_3, 4);
lean_inc(x_14);
lean_dec(x_3);
x_15 = x_14;
x_16 = lean_unsigned_to_nat(0u);
x_17 = l_Array_umapMAux___main___at___private_Lean_Elab_App_10__elabAppArgsAux___main___spec__4(x_16, x_15);
x_18 = x_17;
x_19 = l_Array_toList___rarg(x_18);
lean_dec(x_18);
x_20 = l_List_toString___at_Lean_OpenDecl_HasToString___spec__2(x_19);
x_21 = l_Array_HasRepr___rarg___closed__1;
x_22 = lean_string_append(x_21, x_20);
lean_dec(x_20);
x_23 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = l___private_Lean_Elab_Match_22__processExplicitArg___closed__3;
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
x_27 = l_Lean_throwError___at___private_Lean_Elab_Match_13__throwCtorExpected___spec__1___rarg(x_26, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_28 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = l_Lean_Elab_Term_getMainModule___rarg(x_10, x_29);
x_31 = lean_ctor_get(x_30, 1);
lean_inc(x_31);
lean_dec(x_30);
x_32 = l___private_Lean_Elab_Match_22__processExplicitArg___closed__4;
x_33 = l___private_Lean_Elab_Match_21__pushNewArg(x_1, x_2, x_3, x_32, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_31);
return x_33;
}
}
else
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_3);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_35 = lean_ctor_get(x_3, 5);
lean_dec(x_35);
x_36 = lean_ctor_get(x_12, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_12, 1);
lean_inc(x_37);
lean_dec(x_12);
lean_ctor_set(x_3, 5, x_37);
x_38 = l___private_Lean_Elab_Match_21__pushNewArg(x_1, x_2, x_3, x_36, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; uint8_t x_41; uint8_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_39 = lean_ctor_get(x_3, 0);
x_40 = lean_ctor_get(x_3, 1);
x_41 = lean_ctor_get_uint8(x_3, sizeof(void*)*7);
x_42 = lean_ctor_get_uint8(x_3, sizeof(void*)*7 + 1);
x_43 = lean_ctor_get(x_3, 2);
x_44 = lean_ctor_get(x_3, 3);
x_45 = lean_ctor_get(x_3, 4);
x_46 = lean_ctor_get(x_3, 6);
lean_inc(x_46);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_3);
x_47 = lean_ctor_get(x_12, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_12, 1);
lean_inc(x_48);
lean_dec(x_12);
x_49 = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(x_49, 0, x_39);
lean_ctor_set(x_49, 1, x_40);
lean_ctor_set(x_49, 2, x_43);
lean_ctor_set(x_49, 3, x_44);
lean_ctor_set(x_49, 4, x_45);
lean_ctor_set(x_49, 5, x_48);
lean_ctor_set(x_49, 6, x_46);
lean_ctor_set_uint8(x_49, sizeof(void*)*7, x_41);
lean_ctor_set_uint8(x_49, sizeof(void*)*7 + 1, x_42);
x_50 = l___private_Lean_Elab_Match_21__pushNewArg(x_1, x_2, x_49, x_47, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_50;
}
}
}
}
lean_object* l___private_Lean_Elab_Match_22__processExplicitArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = l___private_Lean_Elab_Match_22__processExplicitArg(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Match_23__processImplicitArg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = lean_ctor_get_uint8(x_3, sizeof(void*)*7);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_Lean_Elab_Term_getMainModule___rarg(x_10, x_14);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l___private_Lean_Elab_Match_22__processExplicitArg___closed__4;
x_18 = l___private_Lean_Elab_Match_21__pushNewArg(x_1, x_2, x_3, x_17, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_16);
return x_18;
}
else
{
lean_object* x_19; 
x_19 = l___private_Lean_Elab_Match_22__processExplicitArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_19;
}
}
}
lean_object* l___private_Lean_Elab_Match_23__processImplicitArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_2);
lean_dec(x_2);
x_13 = l___private_Lean_Elab_Match_23__processImplicitArg(x_1, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
lean_object* l_Array_findIdxAux___main___at___private_Lean_Elab_Match_24__processCtorAppAux___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_3);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = l_Lean_LocalDecl_userName(x_1);
x_10 = lean_name_eq(x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_3, x_11);
lean_dec(x_3);
x_3 = x_12;
goto _start;
}
else
{
lean_object* x_14; 
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_3);
return x_14;
}
}
}
}
lean_object* l___private_Lean_Elab_Match_24__processCtorAppAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = l___private_Lean_Elab_Match_17__isDone(x_2);
if (x_11 == 0)
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_12 = l___private_Lean_Elab_Match_19__isNextArgAccessible(x_2);
x_13 = l___private_Lean_Elab_Match_20__getNextParam(x_2);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_14, 1);
lean_inc(x_17);
x_18 = lean_ctor_get_uint8(x_14, sizeof(void*)*7);
x_19 = lean_ctor_get_uint8(x_14, sizeof(void*)*7 + 1);
x_20 = lean_ctor_get(x_14, 2);
lean_inc(x_20);
x_21 = lean_ctor_get(x_14, 3);
lean_inc(x_21);
x_22 = lean_ctor_get(x_14, 4);
lean_inc(x_22);
x_23 = lean_ctor_get(x_14, 5);
lean_inc(x_23);
x_24 = lean_ctor_get(x_14, 6);
lean_inc(x_24);
x_25 = lean_unsigned_to_nat(0u);
x_26 = l_Array_findIdxAux___main___at___private_Lean_Elab_Match_24__processCtorAppAux___main___spec__1(x_15, x_22, x_25);
if (lean_obj_tag(x_26) == 0)
{
uint8_t x_27; lean_object* x_28; 
lean_dec(x_24);
lean_dec(x_23);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_16);
x_27 = l_Lean_LocalDecl_binderInfo(x_15);
lean_dec(x_15);
x_28 = lean_box(x_27);
switch (lean_obj_tag(x_28)) {
case 1:
{
lean_object* x_29; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_29 = l___private_Lean_Elab_Match_23__processImplicitArg(x_1, x_12, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_2 = x_30;
x_10 = x_31;
goto _start;
}
else
{
uint8_t x_33; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_29);
if (x_33 == 0)
{
return x_29;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_29, 0);
x_35 = lean_ctor_get(x_29, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_29);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
case 3:
{
lean_object* x_37; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_37 = l___private_Lean_Elab_Match_23__processImplicitArg(x_1, x_12, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_2 = x_38;
x_10 = x_39;
goto _start;
}
else
{
uint8_t x_41; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_37);
if (x_41 == 0)
{
return x_37;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_37, 0);
x_43 = lean_ctor_get(x_37, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_37);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
default: 
{
lean_object* x_45; 
lean_dec(x_28);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_45 = l___private_Lean_Elab_Match_22__processExplicitArg(x_1, x_12, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
lean_dec(x_45);
x_2 = x_46;
x_10 = x_47;
goto _start;
}
else
{
uint8_t x_49; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_49 = !lean_is_exclusive(x_45);
if (x_49 == 0)
{
return x_45;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_45, 0);
x_51 = lean_ctor_get(x_45, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_45);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
}
}
else
{
uint8_t x_53; 
lean_dec(x_15);
x_53 = !lean_is_exclusive(x_14);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_54 = lean_ctor_get(x_14, 6);
lean_dec(x_54);
x_55 = lean_ctor_get(x_14, 5);
lean_dec(x_55);
x_56 = lean_ctor_get(x_14, 4);
lean_dec(x_56);
x_57 = lean_ctor_get(x_14, 3);
lean_dec(x_57);
x_58 = lean_ctor_get(x_14, 2);
lean_dec(x_58);
x_59 = lean_ctor_get(x_14, 1);
lean_dec(x_59);
x_60 = lean_ctor_get(x_14, 0);
lean_dec(x_60);
x_61 = lean_ctor_get(x_26, 0);
lean_inc(x_61);
lean_dec(x_26);
x_62 = l_Lean_Elab_Term_NamedArg_inhabited;
x_63 = lean_array_get(x_62, x_22, x_61);
x_64 = l_Array_eraseIdx___rarg(x_22, x_61);
lean_dec(x_61);
lean_ctor_set(x_14, 4, x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_66 = l___private_Lean_Elab_Match_21__pushNewArg(x_1, x_12, x_14, x_65, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_2 = x_67;
x_10 = x_68;
goto _start;
}
else
{
uint8_t x_70; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_70 = !lean_is_exclusive(x_66);
if (x_70 == 0)
{
return x_66;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_66, 0);
x_72 = lean_ctor_get(x_66, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_66);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
lean_dec(x_14);
x_74 = lean_ctor_get(x_26, 0);
lean_inc(x_74);
lean_dec(x_26);
x_75 = l_Lean_Elab_Term_NamedArg_inhabited;
x_76 = lean_array_get(x_75, x_22, x_74);
x_77 = l_Array_eraseIdx___rarg(x_22, x_74);
lean_dec(x_74);
x_78 = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(x_78, 0, x_16);
lean_ctor_set(x_78, 1, x_17);
lean_ctor_set(x_78, 2, x_20);
lean_ctor_set(x_78, 3, x_21);
lean_ctor_set(x_78, 4, x_77);
lean_ctor_set(x_78, 5, x_23);
lean_ctor_set(x_78, 6, x_24);
lean_ctor_set_uint8(x_78, sizeof(void*)*7, x_18);
lean_ctor_set_uint8(x_78, sizeof(void*)*7 + 1, x_19);
x_79 = lean_ctor_get(x_76, 1);
lean_inc(x_79);
lean_dec(x_76);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_80 = l___private_Lean_Elab_Match_21__pushNewArg(x_1, x_12, x_78, x_79, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; lean_object* x_82; 
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
lean_dec(x_80);
x_2 = x_81;
x_10 = x_82;
goto _start;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_84 = lean_ctor_get(x_80, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_80, 1);
lean_inc(x_85);
if (lean_is_exclusive(x_80)) {
 lean_ctor_release(x_80, 0);
 lean_ctor_release(x_80, 1);
 x_86 = x_80;
} else {
 lean_dec_ref(x_80);
 x_86 = lean_box(0);
}
if (lean_is_scalar(x_86)) {
 x_87 = lean_alloc_ctor(1, 2, 0);
} else {
 x_87 = x_86;
}
lean_ctor_set(x_87, 0, x_84);
lean_ctor_set(x_87, 1, x_85);
return x_87;
}
}
}
}
else
{
lean_object* x_88; 
lean_dec(x_1);
x_88 = l___private_Lean_Elab_Match_18__finalize(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_88;
}
}
}
lean_object* l_Array_findIdxAux___main___at___private_Lean_Elab_Match_24__processCtorAppAux___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_findIdxAux___main___at___private_Lean_Elab_Match_24__processCtorAppAux___main___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Lean_Elab_Match_24__processCtorAppAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l___private_Lean_Elab_Match_24__processCtorAppAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_11;
}
}
lean_object* l_Lean_getConstInfo___at_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_st_ref_get(x_8, x_9);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_1);
x_15 = lean_environment_find(x_14, x_1);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_free_object(x_10);
x_16 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_16, 0, x_1);
x_17 = l_Lean_getConstInfo___rarg___lambda__1___closed__3;
x_18 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = l_Lean_getConstInfo___rarg___lambda__1___closed__5;
x_20 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_Lean_throwError___at___private_Lean_Elab_Match_13__throwCtorExpected___spec__1___rarg(x_20, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_13);
return x_21;
}
else
{
lean_object* x_22; 
lean_dec(x_1);
x_22 = lean_ctor_get(x_15, 0);
lean_inc(x_22);
lean_dec(x_15);
lean_ctor_set(x_10, 0, x_22);
return x_10;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_10, 0);
x_24 = lean_ctor_get(x_10, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_10);
x_25 = lean_ctor_get(x_23, 0);
lean_inc(x_25);
lean_dec(x_23);
lean_inc(x_1);
x_26 = lean_environment_find(x_25, x_1);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_27 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_27, 0, x_1);
x_28 = l_Lean_getConstInfo___rarg___lambda__1___closed__3;
x_29 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
x_30 = l_Lean_getConstInfo___rarg___lambda__1___closed__5;
x_31 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
x_32 = l_Lean_throwError___at___private_Lean_Elab_Match_13__throwCtorExpected___spec__1___rarg(x_31, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_24);
return x_32;
}
else
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_1);
x_33 = lean_ctor_get(x_26, 0);
lean_inc(x_33);
lean_dec(x_26);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_24);
return x_34;
}
}
}
}
lean_object* l_Lean_Meta_getFVarLocalDecl___at_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_Expr_fvarId_x21(x_1);
x_11 = l_Lean_Meta_getLocalDecl___at_Lean_Meta_getFVarLocalDecl___spec__1(x_10, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_array_get_size(x_2);
x_12 = lean_nat_dec_lt(x_1, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_6);
lean_dec(x_1);
x_13 = x_2;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_10);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_array_fget(x_2, x_1);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_fset(x_2, x_1, x_16);
x_18 = x_15;
lean_inc(x_6);
x_19 = l_Lean_Meta_getFVarLocalDecl___at_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___spec__2(x_18, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_1, x_22);
x_24 = x_20;
x_25 = lean_array_fset(x_17, x_1, x_24);
lean_dec(x_1);
x_1 = x_23;
x_2 = x_25;
x_10 = x_21;
goto _start;
}
else
{
uint8_t x_27; 
lean_dec(x_17);
lean_dec(x_6);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_19);
if (x_27 == 0)
{
return x_19;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_19, 0);
x_29 = lean_ctor_get(x_19, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_19);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
}
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___spec__4___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = lean_apply_10(x_1, x_5, x_6, x_2, x_3, x_4, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___spec__4___rarg___lambda__1), 11, 4);
lean_closure_set(x_11, 0, x_2);
lean_closure_set(x_11, 1, x_3);
lean_closure_set(x_11, 2, x_4);
lean_closure_set(x_11, 3, x_5);
x_12 = l___private_Lean_Meta_Basic_20__forallTelescopeReducingImp___rarg(x_1, x_11, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
return x_12;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_12);
if (x_17 == 0)
{
return x_12;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_12, 0);
x_19 = lean_ctor_get(x_12, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_12);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
lean_object* l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___spec__4___rarg), 10, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___lambda__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, uint8_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, lean_object* x_18) {
_start:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = x_9;
x_20 = lean_unsigned_to_nat(0u);
x_21 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___spec__3___boxed), 10, 2);
lean_closure_set(x_21, 0, x_20);
lean_closure_set(x_21, 1, x_19);
x_22 = x_21;
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_23 = lean_apply_8(x_22, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
if (lean_obj_tag(x_8) == 6)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_39 = lean_ctor_get(x_8, 0);
lean_inc(x_39);
x_40 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_40, 0, x_39);
x_41 = l_Array_empty___closed__1;
x_42 = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(x_42, 0, x_2);
lean_ctor_set(x_42, 1, x_40);
lean_ctor_set(x_42, 2, x_24);
lean_ctor_set(x_42, 3, x_20);
lean_ctor_set(x_42, 4, x_5);
lean_ctor_set(x_42, 5, x_6);
lean_ctor_set(x_42, 6, x_41);
lean_ctor_set_uint8(x_42, sizeof(void*)*7, x_3);
lean_ctor_set_uint8(x_42, sizeof(void*)*7 + 1, x_4);
x_43 = l___private_Lean_Elab_Match_24__processCtorAppAux___main(x_7, x_42, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_25);
return x_43;
}
else
{
lean_object* x_44; 
x_44 = lean_box(0);
x_26 = x_44;
goto block_38;
}
block_38:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
lean_dec(x_26);
x_27 = lean_st_ref_get(x_17, x_25);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_ctor_get(x_28, 0);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l_Lean_matchPatternAttr;
x_32 = l_Lean_TagAttribute_hasTag(x_31, x_30, x_1);
lean_dec(x_30);
if (x_32 == 0)
{
lean_object* x_33; 
lean_dec(x_24);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_33 = l___private_Lean_Elab_Match_13__throwCtorExpected___rarg(x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_29);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_box(0);
x_35 = l_Array_empty___closed__1;
x_36 = lean_alloc_ctor(0, 7, 2);
lean_ctor_set(x_36, 0, x_2);
lean_ctor_set(x_36, 1, x_34);
lean_ctor_set(x_36, 2, x_24);
lean_ctor_set(x_36, 3, x_20);
lean_ctor_set(x_36, 4, x_5);
lean_ctor_set(x_36, 5, x_6);
lean_ctor_set(x_36, 6, x_35);
lean_ctor_set_uint8(x_36, sizeof(void*)*7, x_3);
lean_ctor_set_uint8(x_36, sizeof(void*)*7 + 1, x_4);
x_37 = l___private_Lean_Elab_Match_24__processCtorAppAux___main(x_7, x_36, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_29);
return x_37;
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_45 = !lean_is_exclusive(x_23);
if (x_45 == 0)
{
return x_23;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_23, 0);
x_47 = lean_ctor_get(x_23, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_23);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
lean_object* l_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_44; lean_object* x_65; uint8_t x_66; 
x_14 = l_Array_toList___rarg(x_4);
x_65 = l_Lean_identKind___closed__2;
lean_inc(x_2);
x_66 = l_Lean_Syntax_isOfKind(x_2, x_65);
if (x_66 == 0)
{
lean_object* x_67; uint8_t x_68; 
x_67 = l___private_Lean_Elab_Term_10__isExplicit___closed__2;
lean_inc(x_2);
x_68 = l_Lean_Syntax_isOfKind(x_2, x_67);
if (x_68 == 0)
{
uint8_t x_69; 
x_69 = 0;
x_44 = x_69;
goto block_64;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; uint8_t x_73; 
x_70 = l_Lean_Syntax_getArgs(x_2);
x_71 = lean_array_get_size(x_70);
lean_dec(x_70);
x_72 = lean_unsigned_to_nat(2u);
x_73 = lean_nat_dec_eq(x_71, x_72);
lean_dec(x_71);
x_44 = x_73;
goto block_64;
}
}
else
{
uint8_t x_74; lean_object* x_75; lean_object* x_76; 
x_74 = 0;
x_75 = lean_box(x_74);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_2);
lean_ctor_set(x_76, 1, x_75);
x_15 = x_76;
x_16 = x_13;
goto block_43;
}
block_43:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_15, 1);
lean_inc(x_18);
lean_dec(x_15);
lean_inc(x_9);
lean_inc(x_7);
lean_inc(x_17);
x_19 = l_Lean_Elab_Term_CollectPatternVars_resolveId_x3f(x_17, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_16);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_3);
lean_dec(x_1);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l___private_Lean_Elab_Match_13__throwCtorExpected___rarg(x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_21);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_22;
}
else
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_20, 0);
lean_inc(x_23);
lean_dec(x_20);
if (lean_obj_tag(x_23) == 4)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_19, 1);
lean_inc(x_24);
lean_dec(x_19);
x_25 = lean_ctor_get(x_23, 0);
lean_inc(x_25);
lean_dec(x_23);
lean_inc(x_25);
x_26 = l_Lean_getConstInfo___at_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___spec__1(x_25, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_24);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_ConstantInfo_type(x_27);
x_30 = lean_box(x_5);
x_31 = lean_alloc_closure((void*)(l_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___lambda__1___boxed), 18, 8);
lean_closure_set(x_31, 0, x_25);
lean_closure_set(x_31, 1, x_17);
lean_closure_set(x_31, 2, x_18);
lean_closure_set(x_31, 3, x_30);
lean_closure_set(x_31, 4, x_3);
lean_closure_set(x_31, 5, x_14);
lean_closure_set(x_31, 6, x_1);
lean_closure_set(x_31, 7, x_27);
x_32 = l_Lean_Meta_forallTelescopeReducing___at_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___spec__4___rarg(x_29, x_31, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_28);
return x_32;
}
else
{
uint8_t x_33; 
lean_dec(x_25);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_26);
if (x_33 == 0)
{
return x_26;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_26, 0);
x_35 = lean_ctor_get(x_26, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_26);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_23);
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_3);
lean_dec(x_1);
x_37 = lean_ctor_get(x_19, 1);
lean_inc(x_37);
lean_dec(x_19);
x_38 = l___private_Lean_Elab_Match_13__throwCtorExpected___rarg(x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_37);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_38;
}
}
}
else
{
uint8_t x_39; 
lean_dec(x_18);
lean_dec(x_17);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_19);
if (x_39 == 0)
{
return x_19;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_19, 0);
x_41 = lean_ctor_get(x_19, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_19);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
block_64:
{
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; uint8_t x_47; 
lean_dec(x_14);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_45 = l_Lean_Elab_elabAttr___rarg___closed__3;
x_46 = l_Lean_throwError___at___private_Lean_Elab_Match_13__throwCtorExpected___spec__1___rarg(x_45, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_47 = !lean_is_exclusive(x_46);
if (x_47 == 0)
{
return x_46;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_46, 0);
x_49 = lean_ctor_get(x_46, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_46);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_51 = lean_unsigned_to_nat(1u);
x_52 = l_Lean_Syntax_getArg(x_2, x_51);
lean_dec(x_2);
x_53 = l_Lean_identKind___closed__2;
lean_inc(x_52);
x_54 = l_Lean_Syntax_isOfKind(x_52, x_53);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; uint8_t x_57; 
lean_dec(x_52);
lean_dec(x_14);
lean_dec(x_3);
lean_dec(x_1);
x_55 = l_Lean_Elab_elabAttr___rarg___closed__3;
x_56 = l_Lean_throwError___at___private_Lean_Elab_Match_13__throwCtorExpected___spec__1___rarg(x_55, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_57 = !lean_is_exclusive(x_56);
if (x_57 == 0)
{
return x_56;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_56, 0);
x_59 = lean_ctor_get(x_56, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_56);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
else
{
uint8_t x_61; lean_object* x_62; lean_object* x_63; 
x_61 = 1;
x_62 = lean_box(x_61);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_52);
lean_ctor_set(x_63, 1, x_62);
x_15 = x_63;
x_16 = x_13;
goto block_43;
}
}
}
}
}
lean_object* l_Lean_getConstInfo___at_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_getConstInfo___at_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Lean_Meta_getFVarLocalDecl___at_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_getFVarLocalDecl___at_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___lambda__1___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
_start:
{
uint8_t x_19; uint8_t x_20; lean_object* x_21; 
x_19 = lean_unbox(x_3);
lean_dec(x_3);
x_20 = lean_unbox(x_4);
lean_dec(x_4);
x_21 = l_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___lambda__1(x_1, x_2, x_19, x_20, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15, x_16, x_17, x_18);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_1);
return x_21;
}
}
lean_object* l_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; lean_object* x_15; 
x_14 = lean_unbox(x_5);
lean_dec(x_5);
x_15 = l_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp(x_1, x_2, x_3, x_4, x_14, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_4);
return x_15;
}
}
lean_object* l_Lean_Elab_Term_CollectPatternVars_processCtorApp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = 1;
lean_inc(x_8);
lean_inc(x_4);
x_12 = l_Lean_Elab_Term_expandApp(x_2, x_11, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_dec(x_12);
x_17 = lean_ctor_get(x_13, 0);
lean_inc(x_17);
lean_dec(x_13);
x_18 = lean_ctor_get(x_14, 0);
lean_inc(x_18);
lean_dec(x_14);
x_19 = lean_ctor_get(x_15, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_dec(x_15);
x_21 = lean_unbox(x_20);
lean_dec(x_20);
x_22 = l_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp(x_1, x_17, x_18, x_19, x_21, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
lean_dec(x_19);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_12);
if (x_23 == 0)
{
return x_12;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_12, 0);
x_25 = lean_ctor_get(x_12, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_12);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
lean_object* l_Lean_Elab_Term_CollectPatternVars_processCtorApp___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Term_CollectPatternVars_processCtorApp(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_Lean_Elab_Term_CollectPatternVars_processCtor(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_11 = l_Array_empty___closed__1;
x_12 = 0;
x_13 = l_Lean_Elab_Term_CollectPatternVars_CtorApp_processCtorApp(x_1, x_2, x_11, x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Match_25__processVar___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_8);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_ctor_get(x_8, 3);
x_13 = l_Lean_replaceRef(x_1, x_12);
x_14 = l_Lean_replaceRef(x_13, x_12);
lean_dec(x_13);
x_15 = l_Lean_replaceRef(x_14, x_12);
lean_dec(x_12);
lean_dec(x_14);
lean_ctor_set(x_8, 3, x_15);
x_16 = l_Lean_throwError___at___private_Lean_Elab_Match_13__throwCtorExpected___spec__1___rarg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_8);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_17 = lean_ctor_get(x_8, 0);
x_18 = lean_ctor_get(x_8, 1);
x_19 = lean_ctor_get(x_8, 2);
x_20 = lean_ctor_get(x_8, 3);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_8);
x_21 = l_Lean_replaceRef(x_1, x_20);
x_22 = l_Lean_replaceRef(x_21, x_20);
lean_dec(x_21);
x_23 = l_Lean_replaceRef(x_22, x_20);
lean_dec(x_20);
lean_dec(x_22);
x_24 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_24, 0, x_17);
lean_ctor_set(x_24, 1, x_18);
lean_ctor_set(x_24, 2, x_19);
lean_ctor_set(x_24, 3, x_23);
x_25 = l_Lean_throwError___at___private_Lean_Elab_Match_13__throwCtorExpected___spec__1___rarg(x_2, x_3, x_4, x_5, x_6, x_7, x_24, x_9, x_10);
lean_dec(x_24);
return x_25;
}
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Match_25__processVar___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwErrorAt___at___private_Lean_Elab_Match_25__processVar___spec__1___rarg___boxed), 10, 0);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_25__processVar___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid pattern, variable '");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_25__processVar___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_25__processVar___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_25__processVar___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_25__processVar___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_25__processVar___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' occurred more than once");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_25__processVar___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_25__processVar___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_25__processVar___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_25__processVar___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_25__processVar___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid pattern variable, must be atomic");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_25__processVar___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_25__processVar___closed__7;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_25__processVar___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_25__processVar___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Match_25__processVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_53; 
x_53 = l_Lean_Syntax_isIdent(x_1);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_54 = l_Lean_Elab_elabAttr___rarg___closed__3;
x_55 = l_Lean_throwErrorAt___at___private_Lean_Elab_Match_25__processVar___spec__1___rarg(x_1, x_54, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
x_56 = !lean_is_exclusive(x_55);
if (x_56 == 0)
{
return x_55;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_55, 0);
x_58 = lean_ctor_get(x_55, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_55);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
else
{
x_10 = x_9;
goto block_52;
}
block_52:
{
lean_object* x_11; lean_object* x_12; lean_object* x_44; uint8_t x_45; 
x_11 = l_Lean_Syntax_getId(x_1);
x_44 = l_Lean_Name_eraseMacroScopes(x_11);
x_45 = l_Lean_Name_isAtomic(x_44);
lean_dec(x_44);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; uint8_t x_48; 
lean_dec(x_11);
lean_dec(x_1);
x_46 = l___private_Lean_Elab_Match_25__processVar___closed__9;
x_47 = l_Lean_throwError___at___private_Lean_Elab_Match_13__throwCtorExpected___spec__1___rarg(x_46, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_10);
lean_dec(x_7);
x_48 = !lean_is_exclusive(x_47);
if (x_48 == 0)
{
return x_47;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_47, 0);
x_50 = lean_ctor_get(x_47, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_47);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
else
{
x_12 = x_10;
goto block_43;
}
block_43:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_13 = lean_st_ref_get(x_2, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_NameSet_contains(x_16, x_11);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
lean_dec(x_7);
x_18 = lean_st_ref_take(x_2, x_15);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
x_22 = lean_box(0);
lean_inc(x_11);
x_23 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_21, x_11, x_22);
x_24 = lean_ctor_get(x_19, 1);
lean_inc(x_24);
lean_dec(x_19);
x_25 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_25, 0, x_11);
x_26 = lean_array_push(x_24, x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_23);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_st_ref_set(x_2, x_27, x_20);
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; 
x_30 = lean_ctor_get(x_28, 0);
lean_dec(x_30);
lean_ctor_set(x_28, 0, x_1);
return x_28;
}
else
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
lean_dec(x_28);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_1);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
lean_dec(x_1);
x_33 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_33, 0, x_11);
x_34 = l___private_Lean_Elab_Match_25__processVar___closed__3;
x_35 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
x_36 = l___private_Lean_Elab_Match_25__processVar___closed__6;
x_37 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
x_38 = l_Lean_throwError___at___private_Lean_Elab_Match_13__throwCtorExpected___spec__1___rarg(x_37, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_15);
lean_dec(x_7);
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
return x_38;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_38, 0);
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_38);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
}
}
lean_object* l_Lean_throwErrorAt___at___private_Lean_Elab_Match_25__processVar___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_throwErrorAt___at___private_Lean_Elab_Match_25__processVar___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_Match_25__processVar___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Match_25__processVar(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Match_26__processId(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_st_ref_get(x_9, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_6);
lean_inc(x_4);
lean_inc(x_2);
x_15 = l_Lean_Elab_Term_CollectPatternVars_resolveId_x3f(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_14);
lean_dec(x_1);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l___private_Lean_Elab_Match_25__processVar(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_17);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_18;
}
else
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_16, 0);
lean_inc(x_19);
lean_dec(x_16);
if (lean_obj_tag(x_19) == 4)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_28; 
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_dec(x_15);
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
lean_dec(x_19);
lean_inc(x_21);
lean_inc(x_14);
x_28 = lean_environment_find(x_14, x_21);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; 
lean_dec(x_21);
lean_dec(x_14);
lean_dec(x_2);
lean_dec(x_1);
x_29 = l___private_Lean_Elab_Match_13__throwCtorExpected___rarg(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_20);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_29;
}
else
{
lean_object* x_30; 
x_30 = lean_ctor_get(x_28, 0);
lean_inc(x_30);
lean_dec(x_28);
if (lean_obj_tag(x_30) == 6)
{
lean_object* x_31; 
lean_dec(x_30);
lean_dec(x_21);
lean_dec(x_14);
x_31 = l_Lean_Elab_Term_CollectPatternVars_processCtor(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_20);
return x_31;
}
else
{
lean_object* x_32; 
lean_dec(x_30);
x_32 = lean_box(0);
x_22 = x_32;
goto block_27;
}
}
block_27:
{
lean_object* x_23; uint8_t x_24; 
lean_dec(x_22);
x_23 = l_Lean_matchPatternAttr;
x_24 = l_Lean_TagAttribute_hasTag(x_23, x_14, x_21);
lean_dec(x_21);
lean_dec(x_14);
if (x_24 == 0)
{
lean_object* x_25; 
lean_dec(x_1);
x_25 = l___private_Lean_Elab_Match_25__processVar(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_20);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_25;
}
else
{
lean_object* x_26; 
x_26 = l_Lean_Elab_Term_CollectPatternVars_processCtor(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_20);
return x_26;
}
}
}
else
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_19);
lean_dec(x_14);
lean_dec(x_1);
x_33 = lean_ctor_get(x_15, 1);
lean_inc(x_33);
lean_dec(x_15);
x_34 = l___private_Lean_Elab_Match_25__processVar(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_33);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_34;
}
}
}
else
{
uint8_t x_35; 
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_15);
if (x_35 == 0)
{
return x_15;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_15, 0);
x_37 = lean_ctor_get(x_15, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_15);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
lean_object* _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Name.anonymous");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Name.str");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__4;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__4;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__5;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("str");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_nameToExpr___closed__1;
x_2 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__2;
x_2 = l___private_Init_LeanInit_14__quoteName___main___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__9;
x_2 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__10;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__11;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Name.num");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__13;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__13;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__14;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("num");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_nameToExpr___closed__1;
x_2 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__16;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__9;
x_2 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__16;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__18;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__19;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Match_27__nameToPattern___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_11);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = l___private_Init_LeanInit_14__quoteName___main___closed__1;
x_16 = lean_name_mk_string(x_1, x_15);
x_17 = l___private_Init_LeanInit_14__quoteName___main___closed__2;
x_18 = lean_name_mk_string(x_16, x_17);
x_19 = l_Lean_addMacroScope(x_14, x_18, x_10);
x_20 = l_Lean_mkAppStx___closed__1;
x_21 = lean_name_mk_string(x_1, x_20);
x_22 = lean_name_mk_string(x_21, x_15);
x_23 = lean_name_mk_string(x_22, x_17);
x_24 = lean_box(0);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
x_27 = l_Lean_SourceInfo_inhabited___closed__1;
x_28 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__3;
x_29 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
lean_ctor_set(x_29, 2, x_19);
lean_ctor_set(x_29, 3, x_26);
lean_ctor_set(x_12, 0, x_29);
return x_12;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_30 = lean_ctor_get(x_12, 0);
x_31 = lean_ctor_get(x_12, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_12);
x_32 = l___private_Init_LeanInit_14__quoteName___main___closed__1;
x_33 = lean_name_mk_string(x_1, x_32);
x_34 = l___private_Init_LeanInit_14__quoteName___main___closed__2;
x_35 = lean_name_mk_string(x_33, x_34);
x_36 = l_Lean_addMacroScope(x_30, x_35, x_10);
x_37 = l_Lean_mkAppStx___closed__1;
x_38 = lean_name_mk_string(x_1, x_37);
x_39 = lean_name_mk_string(x_38, x_32);
x_40 = lean_name_mk_string(x_39, x_34);
x_41 = lean_box(0);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
x_44 = l_Lean_SourceInfo_inhabited___closed__1;
x_45 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__3;
x_46 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
lean_ctor_set(x_46, 2, x_36);
lean_ctor_set(x_46, 3, x_43);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_31);
return x_47;
}
}
case 1:
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_1, 1);
lean_inc(x_49);
lean_dec(x_1);
x_50 = l___private_Lean_Elab_Match_27__nameToPattern___main(x_48, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_52);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_55);
x_57 = !lean_is_exclusive(x_56);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_58 = lean_ctor_get(x_56, 0);
x_59 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__8;
x_60 = l_Lean_addMacroScope(x_58, x_59, x_54);
x_61 = l_Lean_SourceInfo_inhabited___closed__1;
x_62 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__6;
x_63 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__12;
x_64 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_64, 0, x_61);
lean_ctor_set(x_64, 1, x_62);
lean_ctor_set(x_64, 2, x_60);
lean_ctor_set(x_64, 3, x_63);
x_65 = l_Array_empty___closed__1;
x_66 = lean_array_push(x_65, x_64);
x_67 = lean_array_push(x_65, x_51);
x_68 = l_Lean_mkStxStrLit(x_49, x_61);
x_69 = lean_array_push(x_67, x_68);
x_70 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__12;
x_71 = lean_array_push(x_69, x_70);
x_72 = l_Lean_nullKind___closed__2;
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_71);
x_74 = lean_array_push(x_66, x_73);
x_75 = l_Lean_mkAppStx___closed__8;
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_74);
lean_ctor_set(x_56, 0, x_76);
return x_56;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_77 = lean_ctor_get(x_56, 0);
x_78 = lean_ctor_get(x_56, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_56);
x_79 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__8;
x_80 = l_Lean_addMacroScope(x_77, x_79, x_54);
x_81 = l_Lean_SourceInfo_inhabited___closed__1;
x_82 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__6;
x_83 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__12;
x_84 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_84, 0, x_81);
lean_ctor_set(x_84, 1, x_82);
lean_ctor_set(x_84, 2, x_80);
lean_ctor_set(x_84, 3, x_83);
x_85 = l_Array_empty___closed__1;
x_86 = lean_array_push(x_85, x_84);
x_87 = lean_array_push(x_85, x_51);
x_88 = l_Lean_mkStxStrLit(x_49, x_81);
x_89 = lean_array_push(x_87, x_88);
x_90 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__12;
x_91 = lean_array_push(x_89, x_90);
x_92 = l_Lean_nullKind___closed__2;
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_91);
x_94 = lean_array_push(x_86, x_93);
x_95 = l_Lean_mkAppStx___closed__8;
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_94);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_78);
return x_97;
}
}
default: 
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; 
x_98 = lean_ctor_get(x_1, 0);
lean_inc(x_98);
x_99 = lean_ctor_get(x_1, 1);
lean_inc(x_99);
lean_dec(x_1);
x_100 = l___private_Lean_Elab_Match_27__nameToPattern___main(x_98, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_101 = lean_ctor_get(x_100, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_100, 1);
lean_inc(x_102);
lean_dec(x_100);
x_103 = l_Lean_Elab_Term_getCurrMacroScope(x_2, x_3, x_4, x_5, x_6, x_7, x_102);
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_103, 1);
lean_inc(x_105);
lean_dec(x_103);
x_106 = l_Lean_Elab_Term_getMainModule___rarg(x_7, x_105);
x_107 = !lean_is_exclusive(x_106);
if (x_107 == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_108 = lean_ctor_get(x_106, 0);
x_109 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__17;
x_110 = l_Lean_addMacroScope(x_108, x_109, x_104);
x_111 = l_Lean_SourceInfo_inhabited___closed__1;
x_112 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__15;
x_113 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__20;
x_114 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_114, 0, x_111);
lean_ctor_set(x_114, 1, x_112);
lean_ctor_set(x_114, 2, x_110);
lean_ctor_set(x_114, 3, x_113);
x_115 = l_Array_empty___closed__1;
x_116 = lean_array_push(x_115, x_114);
x_117 = lean_array_push(x_115, x_101);
x_118 = l_Nat_repr(x_99);
x_119 = l_Lean_numLitKind;
x_120 = l_Lean_mkStxLit(x_119, x_118, x_111);
x_121 = lean_array_push(x_117, x_120);
x_122 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__12;
x_123 = lean_array_push(x_121, x_122);
x_124 = l_Lean_nullKind___closed__2;
x_125 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_125, 0, x_124);
lean_ctor_set(x_125, 1, x_123);
x_126 = lean_array_push(x_116, x_125);
x_127 = l_Lean_mkAppStx___closed__8;
x_128 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_128, 0, x_127);
lean_ctor_set(x_128, 1, x_126);
lean_ctor_set(x_106, 0, x_128);
return x_106;
}
else
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
x_129 = lean_ctor_get(x_106, 0);
x_130 = lean_ctor_get(x_106, 1);
lean_inc(x_130);
lean_inc(x_129);
lean_dec(x_106);
x_131 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__17;
x_132 = l_Lean_addMacroScope(x_129, x_131, x_104);
x_133 = l_Lean_SourceInfo_inhabited___closed__1;
x_134 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__15;
x_135 = l___private_Lean_Elab_Match_27__nameToPattern___main___closed__20;
x_136 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_136, 0, x_133);
lean_ctor_set(x_136, 1, x_134);
lean_ctor_set(x_136, 2, x_132);
lean_ctor_set(x_136, 3, x_135);
x_137 = l_Array_empty___closed__1;
x_138 = lean_array_push(x_137, x_136);
x_139 = lean_array_push(x_137, x_101);
x_140 = l_Nat_repr(x_99);
x_141 = l_Lean_numLitKind;
x_142 = l_Lean_mkStxLit(x_141, x_140, x_133);
x_143 = lean_array_push(x_139, x_142);
x_144 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__12;
x_145 = lean_array_push(x_143, x_144);
x_146 = l_Lean_nullKind___closed__2;
x_147 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_147, 0, x_146);
lean_ctor_set(x_147, 1, x_145);
x_148 = lean_array_push(x_138, x_147);
x_149 = l_Lean_mkAppStx___closed__8;
x_150 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_150, 0, x_149);
lean_ctor_set(x_150, 1, x_148);
x_151 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_151, 0, x_150);
lean_ctor_set(x_151, 1, x_130);
return x_151;
}
}
}
}
}
lean_object* l___private_Lean_Elab_Match_27__nameToPattern___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Match_27__nameToPattern___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l___private_Lean_Elab_Match_27__nameToPattern(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Match_27__nameToPattern___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l___private_Lean_Elab_Match_27__nameToPattern___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Match_27__nameToPattern(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Lean_Elab_throwIllFormedSyntax___at___private_Lean_Elab_Match_28__quotedNameToPattern___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_Lean_Elab_throwIllFormedSyntax___rarg___closed__3;
x_9 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_8, x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
lean_object* l___private_Lean_Elab_Match_28__quotedNameToPattern(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
x_11 = l_Lean_Syntax_isNameLit_x3f(x_10);
lean_dec(x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
x_12 = l_Lean_Elab_throwIllFormedSyntax___at___private_Lean_Elab_Match_28__quotedNameToPattern___spec__1(x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l___private_Lean_Elab_Match_27__nameToPattern___main(x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_2);
return x_14;
}
}
}
lean_object* l_Lean_Elab_throwIllFormedSyntax___at___private_Lean_Elab_Match_28__quotedNameToPattern___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_throwIllFormedSyntax___at___private_Lean_Elab_Match_28__quotedNameToPattern___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l___private_Lean_Elab_Match_28__quotedNameToPattern___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Match_28__quotedNameToPattern(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Init_LeanInit_18__mapSepElemsMAux___main___at___private_Lean_Elab_Match_29__collect___main___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; uint8_t x_14; 
x_13 = lean_array_get_size(x_1);
x_14 = lean_nat_dec_lt(x_3, x_13);
lean_dec(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_4);
lean_ctor_set(x_15, 1, x_12);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_16 = lean_array_fget(x_1, x_3);
x_17 = lean_unsigned_to_nat(2u);
x_18 = lean_nat_mod(x_3, x_17);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_eq(x_18, x_19);
lean_dec(x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_3, x_21);
lean_dec(x_3);
x_23 = lean_array_push(x_4, x_16);
x_3 = x_22;
x_4 = x_23;
goto _start;
}
else
{
lean_object* x_25; 
lean_inc(x_2);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_25 = lean_apply_9(x_2, x_16, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_add(x_3, x_28);
lean_dec(x_3);
x_30 = lean_array_push(x_4, x_26);
x_3 = x_29;
x_4 = x_30;
x_12 = x_27;
goto _start;
}
else
{
uint8_t x_32; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_32 = !lean_is_exclusive(x_25);
if (x_32 == 0)
{
return x_25;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_25, 0);
x_34 = lean_ctor_get(x_25, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_25);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
}
}
lean_object* l_Array_mapSepElemsM___at___private_Lean_Elab_Match_29__collect___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Array_empty___closed__1;
x_13 = l___private_Init_LeanInit_18__mapSepElemsMAux___main___at___private_Lean_Elab_Match_29__collect___main___spec__2(x_1, x_2, x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Match_29__collect___main___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_unsigned_to_nat(3u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = l___private_Lean_Elab_Match_29__collect___main(x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = l_Lean_Syntax_setArg(x_1, x_10, x_14);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
x_18 = l_Lean_Syntax_setArg(x_1, x_10, x_16);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_12);
if (x_20 == 0)
{
return x_12;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_12, 0);
x_22 = lean_ctor_get(x_12, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_12);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
lean_object* _init_l___private_Lean_Elab_Match_29__collect___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("anonymousCtor");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_29__collect___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l___private_Lean_Elab_Match_29__collect___main___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_29__collect___main___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid pattern, notation is ambiguous");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_29__collect___main___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_29__collect___main___closed__3;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_29__collect___main___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_29__collect___main___closed__4;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_29__collect___main___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_App_23__elabAppFn___main___closed__11;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_29__collect___main___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l___private_Lean_Elab_App_23__elabAppFn___main___closed__11;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_Match_29__collect___main___closed__6;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
lean_object* _init_l___private_Lean_Elab_Match_29__collect___main___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_App_23__elabAppFn___main___closed__11;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_29__collect___main___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Match_29__collect___main___closed__8;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_29__collect___main___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Match_29__collect___main___closed__9;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_29__collect___main___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_29__collect___main), 9, 0);
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_29__collect___main___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid struct instance pattern, 'with' is not allowed in patterns");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_29__collect___main___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_29__collect___main___closed__12;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_29__collect___main___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_29__collect___main___closed__13;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_29__collect___main___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_29__collect___main___lambda__1), 9, 0);
return x_1;
}
}
lean_object* l___private_Lean_Elab_Match_29__collect___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 1:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; uint8_t x_14; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
x_12 = l_Lean_mkAppStx___closed__8;
x_13 = lean_name_eq(x_10, x_12);
x_14 = !lean_is_exclusive(x_7);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; 
x_15 = lean_ctor_get(x_7, 3);
x_16 = l_Lean_replaceRef(x_1, x_15);
x_17 = l_Lean_replaceRef(x_16, x_15);
lean_dec(x_16);
x_18 = l_Lean_replaceRef(x_17, x_15);
lean_dec(x_15);
lean_dec(x_17);
lean_ctor_set(x_7, 3, x_18);
x_19 = lean_st_ref_take(x_8, x_9);
if (x_13 == 0)
{
lean_object* x_1055; lean_object* x_1056; uint8_t x_1057; 
x_1055 = lean_ctor_get(x_19, 0);
lean_inc(x_1055);
x_1056 = lean_ctor_get(x_19, 1);
lean_inc(x_1056);
lean_dec(x_19);
x_1057 = 0;
x_20 = x_1057;
x_21 = x_1055;
x_22 = x_1056;
goto block_1054;
}
else
{
lean_object* x_1058; lean_object* x_1059; uint8_t x_1060; 
x_1058 = lean_ctor_get(x_19, 0);
lean_inc(x_1058);
x_1059 = lean_ctor_get(x_19, 1);
lean_inc(x_1059);
lean_dec(x_19);
x_1060 = 1;
x_20 = x_1060;
x_21 = x_1058;
x_22 = x_1059;
goto block_1054;
}
block_1054:
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_21);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_24 = lean_ctor_get(x_21, 1);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_24, x_25);
lean_ctor_set(x_21, 1, x_26);
x_27 = lean_st_ref_set(x_8, x_21, x_22);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_29 = lean_ctor_get(x_27, 1);
x_30 = lean_ctor_get(x_27, 0);
lean_dec(x_30);
x_31 = !lean_is_exclusive(x_3);
if (x_31 == 0)
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_3, 7);
lean_dec(x_32);
lean_ctor_set(x_3, 7, x_24);
if (x_20 == 0)
{
lean_object* x_33; uint8_t x_34; 
x_33 = l___private_Lean_Elab_Match_29__collect___main___closed__2;
x_34 = lean_name_eq(x_10, x_33);
if (x_34 == 0)
{
lean_object* x_35; uint8_t x_36; 
x_35 = l_Lean_Elab_Term_quoteAutoTactic___main___closed__2;
x_36 = lean_name_eq(x_10, x_35);
if (x_36 == 0)
{
lean_object* x_37; uint8_t x_38; 
x_37 = l_Lean_mkHole___closed__2;
x_38 = lean_name_eq(x_10, x_37);
if (x_38 == 0)
{
lean_object* x_39; uint8_t x_40; 
x_39 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__20;
x_40 = lean_name_eq(x_10, x_39);
if (x_40 == 0)
{
lean_object* x_41; uint8_t x_42; 
lean_dec(x_11);
x_41 = l___private_Lean_Elab_App_23__elabAppFn___main___closed__5;
x_42 = lean_name_eq(x_10, x_41);
if (x_42 == 0)
{
lean_object* x_43; uint8_t x_44; 
x_43 = l___private_Lean_Elab_App_23__elabAppFn___main___closed__12;
x_44 = lean_name_eq(x_10, x_43);
if (x_44 == 0)
{
lean_object* x_45; uint8_t x_46; 
x_45 = l___regBuiltin_Lean_Elab_Term_elabInaccessible___closed__2;
x_46 = lean_name_eq(x_10, x_45);
if (x_46 == 0)
{
lean_object* x_47; uint8_t x_48; 
x_47 = l_Lean_strLitKind;
x_48 = lean_name_eq(x_10, x_47);
if (x_48 == 0)
{
lean_object* x_49; uint8_t x_50; 
x_49 = l_Lean_numLitKind;
x_50 = lean_name_eq(x_10, x_49);
if (x_50 == 0)
{
lean_object* x_51; uint8_t x_52; 
x_51 = l_Lean_charLitKind;
x_52 = lean_name_eq(x_10, x_51);
if (x_52 == 0)
{
lean_object* x_53; uint8_t x_54; 
lean_free_object(x_27);
x_53 = l___regBuiltin_Lean_Elab_Term_elabQuotedName___closed__2;
x_54 = lean_name_eq(x_10, x_53);
if (x_54 == 0)
{
lean_object* x_55; uint8_t x_56; 
lean_dec(x_1);
x_55 = l_Lean_choiceKind;
x_56 = lean_name_eq(x_10, x_55);
lean_dec(x_10);
if (x_56 == 0)
{
lean_object* x_57; 
x_57 = l___private_Lean_Elab_Match_16__throwInvalidPattern___rarg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_57;
}
else
{
lean_object* x_58; lean_object* x_59; 
x_58 = l___private_Lean_Elab_Match_29__collect___main___closed__5;
x_59 = l_Lean_throwError___at___private_Lean_Elab_Match_13__throwCtorExpected___spec__1___rarg(x_58, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_59;
}
}
else
{
lean_object* x_60; 
lean_dec(x_10);
lean_dec(x_2);
x_60 = l___private_Lean_Elab_Match_28__quotedNameToPattern(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_60;
}
}
else
{
lean_dec(x_3);
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_ctor_set(x_27, 0, x_1);
return x_27;
}
}
else
{
lean_dec(x_3);
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_ctor_set(x_27, 0, x_1);
return x_27;
}
}
else
{
lean_dec(x_3);
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_ctor_set(x_27, 0, x_1);
return x_27;
}
}
else
{
lean_dec(x_3);
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_ctor_set(x_27, 0, x_1);
return x_27;
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_free_object(x_27);
lean_dec(x_10);
x_61 = lean_unsigned_to_nat(0u);
x_62 = l_Lean_Syntax_getArg(x_1, x_61);
lean_inc(x_7);
lean_inc(x_62);
x_63 = l___private_Lean_Elab_Match_25__processVar(x_62, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; 
x_64 = lean_ctor_get(x_63, 1);
lean_inc(x_64);
lean_dec(x_63);
x_65 = lean_unsigned_to_nat(2u);
x_66 = l_Lean_Syntax_getArg(x_1, x_65);
x_67 = !lean_is_exclusive(x_1);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_68 = lean_ctor_get(x_1, 1);
lean_dec(x_68);
x_69 = lean_ctor_get(x_1, 0);
lean_dec(x_69);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_70 = l___private_Lean_Elab_Match_29__collect___main(x_66, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_64);
if (lean_obj_tag(x_70) == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; 
x_71 = lean_ctor_get(x_70, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_70, 1);
lean_inc(x_72);
lean_dec(x_70);
x_73 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_72);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
lean_dec(x_73);
x_76 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_75);
lean_dec(x_8);
x_77 = !lean_is_exclusive(x_76);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_78 = lean_ctor_get(x_76, 0);
x_79 = l___private_Lean_Elab_Match_29__collect___main___closed__8;
x_80 = l_Lean_addMacroScope(x_78, x_79, x_74);
x_81 = l_Lean_SourceInfo_inhabited___closed__1;
x_82 = l___private_Lean_Elab_Match_29__collect___main___closed__7;
x_83 = l___private_Lean_Elab_Match_29__collect___main___closed__10;
x_84 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_84, 0, x_81);
lean_ctor_set(x_84, 1, x_82);
lean_ctor_set(x_84, 2, x_80);
lean_ctor_set(x_84, 3, x_83);
x_85 = l_Array_empty___closed__1;
x_86 = lean_array_push(x_85, x_84);
x_87 = lean_array_push(x_85, x_62);
x_88 = lean_array_push(x_87, x_71);
x_89 = l_Lean_nullKind___closed__2;
lean_ctor_set(x_1, 1, x_88);
lean_ctor_set(x_1, 0, x_89);
x_90 = lean_array_push(x_86, x_1);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_12);
lean_ctor_set(x_91, 1, x_90);
lean_ctor_set(x_76, 0, x_91);
return x_76;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_92 = lean_ctor_get(x_76, 0);
x_93 = lean_ctor_get(x_76, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_76);
x_94 = l___private_Lean_Elab_Match_29__collect___main___closed__8;
x_95 = l_Lean_addMacroScope(x_92, x_94, x_74);
x_96 = l_Lean_SourceInfo_inhabited___closed__1;
x_97 = l___private_Lean_Elab_Match_29__collect___main___closed__7;
x_98 = l___private_Lean_Elab_Match_29__collect___main___closed__10;
x_99 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_99, 0, x_96);
lean_ctor_set(x_99, 1, x_97);
lean_ctor_set(x_99, 2, x_95);
lean_ctor_set(x_99, 3, x_98);
x_100 = l_Array_empty___closed__1;
x_101 = lean_array_push(x_100, x_99);
x_102 = lean_array_push(x_100, x_62);
x_103 = lean_array_push(x_102, x_71);
x_104 = l_Lean_nullKind___closed__2;
lean_ctor_set(x_1, 1, x_103);
lean_ctor_set(x_1, 0, x_104);
x_105 = lean_array_push(x_101, x_1);
x_106 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_106, 0, x_12);
lean_ctor_set(x_106, 1, x_105);
x_107 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_107, 0, x_106);
lean_ctor_set(x_107, 1, x_93);
return x_107;
}
}
else
{
uint8_t x_108; 
lean_free_object(x_1);
lean_dec(x_62);
lean_dec(x_3);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_108 = !lean_is_exclusive(x_70);
if (x_108 == 0)
{
return x_70;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; 
x_109 = lean_ctor_get(x_70, 0);
x_110 = lean_ctor_get(x_70, 1);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_70);
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_109);
lean_ctor_set(x_111, 1, x_110);
return x_111;
}
}
}
else
{
lean_object* x_112; 
lean_dec(x_1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_112 = l___private_Lean_Elab_Match_29__collect___main(x_66, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_64);
if (lean_obj_tag(x_112) == 0)
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_113 = lean_ctor_get(x_112, 0);
lean_inc(x_113);
x_114 = lean_ctor_get(x_112, 1);
lean_inc(x_114);
lean_dec(x_112);
x_115 = l_Lean_Elab_Term_getCurrMacroScope(x_3, x_4, x_5, x_6, x_7, x_8, x_114);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_116 = lean_ctor_get(x_115, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_115, 1);
lean_inc(x_117);
lean_dec(x_115);
x_118 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_117);
lean_dec(x_8);
x_119 = lean_ctor_get(x_118, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_118, 1);
lean_inc(x_120);
if (lean_is_exclusive(x_118)) {
 lean_ctor_release(x_118, 0);
 lean_ctor_release(x_118, 1);
 x_121 = x_118;
} else {
 lean_dec_ref(x_118);
 x_121 = lean_box(0);
}
x_122 = l___private_Lean_Elab_Match_29__collect___main___closed__8;
x_123 = l_Lean_addMacroScope(x_119, x_122, x_116);
x_124 = l_Lean_SourceInfo_inhabited___closed__1;
x_125 = l___private_Lean_Elab_Match_29__collect___main___closed__7;
x_126 = l___private_Lean_Elab_Match_29__collect___main___closed__10;
x_127 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_127, 0, x_124);
lean_ctor_set(x_127, 1, x_125);
lean_ctor_set(x_127, 2, x_123);
lean_ctor_set(x_127, 3, x_126);
x_128 = l_Array_empty___closed__1;
x_129 = lean_array_push(x_128, x_127);
x_130 = lean_array_push(x_128, x_62);
x_131 = lean_array_push(x_130, x_113);
x_132 = l_Lean_nullKind___closed__2;
x_133 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_133, 0, x_132);
lean_ctor_set(x_133, 1, x_131);
x_134 = lean_array_push(x_129, x_133);
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_12);
lean_ctor_set(x_135, 1, x_134);
if (lean_is_scalar(x_121)) {
 x_136 = lean_alloc_ctor(0, 2, 0);
} else {
 x_136 = x_121;
}
lean_ctor_set(x_136, 0, x_135);
lean_ctor_set(x_136, 1, x_120);
return x_136;
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
lean_dec(x_62);
lean_dec(x_3);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_137 = lean_ctor_get(x_112, 0);
lean_inc(x_137);
x_138 = lean_ctor_get(x_112, 1);
lean_inc(x_138);
if (lean_is_exclusive(x_112)) {
 lean_ctor_release(x_112, 0);
 lean_ctor_release(x_112, 1);
 x_139 = x_112;
} else {
 lean_dec_ref(x_112);
 x_139 = lean_box(0);
}
if (lean_is_scalar(x_139)) {
 x_140 = lean_alloc_ctor(1, 2, 0);
} else {
 x_140 = x_139;
}
lean_ctor_set(x_140, 0, x_137);
lean_ctor_set(x_140, 1, x_138);
return x_140;
}
}
}
else
{
uint8_t x_141; 
lean_dec(x_62);
lean_dec(x_3);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_141 = !lean_is_exclusive(x_63);
if (x_141 == 0)
{
return x_63;
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_142 = lean_ctor_get(x_63, 0);
x_143 = lean_ctor_get(x_63, 1);
lean_inc(x_143);
lean_inc(x_142);
lean_dec(x_63);
x_144 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_144, 0, x_142);
lean_ctor_set(x_144, 1, x_143);
return x_144;
}
}
}
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
lean_free_object(x_27);
lean_dec(x_10);
x_145 = lean_unsigned_to_nat(0u);
x_146 = l_Lean_Syntax_getArg(x_1, x_145);
lean_dec(x_1);
x_147 = l___private_Lean_Elab_Match_29__collect___main___closed__11;
x_148 = l_Lean_Elab_Term_CollectPatternVars_processCtor(x_147, x_146, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
return x_148;
}
}
else
{
lean_object* x_149; lean_object* x_150; uint8_t x_151; 
x_149 = l_Lean_Syntax_inhabited;
x_150 = lean_array_get(x_149, x_11, x_25);
x_151 = l_Lean_Syntax_isNone(x_150);
if (x_151 == 0)
{
uint8_t x_152; 
lean_free_object(x_27);
x_152 = !lean_is_exclusive(x_1);
if (x_152 == 0)
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; uint8_t x_158; 
x_153 = lean_ctor_get(x_1, 1);
lean_dec(x_153);
x_154 = lean_ctor_get(x_1, 0);
lean_dec(x_154);
x_155 = lean_unsigned_to_nat(0u);
x_156 = l_Lean_Syntax_getArg(x_150, x_155);
x_157 = l_Lean_Syntax_getArg(x_150, x_25);
x_158 = l_Lean_Syntax_isNone(x_157);
if (x_158 == 0)
{
lean_object* x_159; lean_object* x_160; uint8_t x_161; 
x_159 = l_Lean_Syntax_getArg(x_157, x_155);
x_160 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__24;
lean_inc(x_159);
x_161 = l_Lean_Syntax_isOfKind(x_159, x_160);
if (x_161 == 0)
{
lean_object* x_162; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_162 = l___private_Lean_Elab_Match_29__collect___main(x_156, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_162) == 0)
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_163 = lean_ctor_get(x_162, 0);
lean_inc(x_163);
x_164 = lean_ctor_get(x_162, 1);
lean_inc(x_164);
lean_dec(x_162);
x_165 = l_Lean_Syntax_setArg(x_150, x_155, x_163);
x_166 = l_Lean_Syntax_getArg(x_159, x_25);
x_167 = l_Lean_Syntax_getArgs(x_166);
lean_dec(x_166);
x_168 = l___private_Lean_Elab_Match_29__collect___main___closed__11;
x_169 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_29__collect___main___spec__1(x_167, x_168, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_164);
lean_dec(x_167);
if (lean_obj_tag(x_169) == 0)
{
uint8_t x_170; 
x_170 = !lean_is_exclusive(x_169);
if (x_170 == 0)
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; 
x_171 = lean_ctor_get(x_169, 0);
x_172 = l_Lean_nullKind;
lean_ctor_set(x_1, 1, x_171);
lean_ctor_set(x_1, 0, x_172);
x_173 = l_Lean_Syntax_setArg(x_159, x_25, x_1);
x_174 = l_Lean_Syntax_setArg(x_157, x_155, x_173);
x_175 = l_Lean_Syntax_setArg(x_165, x_25, x_174);
x_176 = lean_array_set(x_11, x_25, x_175);
x_177 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_177, 0, x_10);
lean_ctor_set(x_177, 1, x_176);
lean_ctor_set(x_169, 0, x_177);
return x_169;
}
else
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; 
x_178 = lean_ctor_get(x_169, 0);
x_179 = lean_ctor_get(x_169, 1);
lean_inc(x_179);
lean_inc(x_178);
lean_dec(x_169);
x_180 = l_Lean_nullKind;
lean_ctor_set(x_1, 1, x_178);
lean_ctor_set(x_1, 0, x_180);
x_181 = l_Lean_Syntax_setArg(x_159, x_25, x_1);
x_182 = l_Lean_Syntax_setArg(x_157, x_155, x_181);
x_183 = l_Lean_Syntax_setArg(x_165, x_25, x_182);
x_184 = lean_array_set(x_11, x_25, x_183);
x_185 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_185, 0, x_10);
lean_ctor_set(x_185, 1, x_184);
x_186 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_186, 0, x_185);
lean_ctor_set(x_186, 1, x_179);
return x_186;
}
}
else
{
uint8_t x_187; 
lean_dec(x_165);
lean_dec(x_159);
lean_dec(x_157);
lean_free_object(x_1);
lean_dec(x_11);
lean_dec(x_10);
x_187 = !lean_is_exclusive(x_169);
if (x_187 == 0)
{
return x_169;
}
else
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; 
x_188 = lean_ctor_get(x_169, 0);
x_189 = lean_ctor_get(x_169, 1);
lean_inc(x_189);
lean_inc(x_188);
lean_dec(x_169);
x_190 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_190, 0, x_188);
lean_ctor_set(x_190, 1, x_189);
return x_190;
}
}
}
else
{
uint8_t x_191; 
lean_dec(x_159);
lean_dec(x_157);
lean_free_object(x_1);
lean_dec(x_150);
lean_dec(x_3);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_191 = !lean_is_exclusive(x_162);
if (x_191 == 0)
{
return x_162;
}
else
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; 
x_192 = lean_ctor_get(x_162, 0);
x_193 = lean_ctor_get(x_162, 1);
lean_inc(x_193);
lean_inc(x_192);
lean_dec(x_162);
x_194 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_194, 0, x_192);
lean_ctor_set(x_194, 1, x_193);
return x_194;
}
}
}
else
{
lean_object* x_195; 
lean_dec(x_159);
lean_dec(x_157);
x_195 = l___private_Lean_Elab_Match_29__collect___main(x_156, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_195) == 0)
{
uint8_t x_196; 
x_196 = !lean_is_exclusive(x_195);
if (x_196 == 0)
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; 
x_197 = lean_ctor_get(x_195, 0);
x_198 = l_Lean_Syntax_setArg(x_150, x_155, x_197);
x_199 = lean_array_set(x_11, x_25, x_198);
lean_ctor_set(x_1, 1, x_199);
lean_ctor_set(x_195, 0, x_1);
return x_195;
}
else
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; 
x_200 = lean_ctor_get(x_195, 0);
x_201 = lean_ctor_get(x_195, 1);
lean_inc(x_201);
lean_inc(x_200);
lean_dec(x_195);
x_202 = l_Lean_Syntax_setArg(x_150, x_155, x_200);
x_203 = lean_array_set(x_11, x_25, x_202);
lean_ctor_set(x_1, 1, x_203);
x_204 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_204, 0, x_1);
lean_ctor_set(x_204, 1, x_201);
return x_204;
}
}
else
{
uint8_t x_205; 
lean_free_object(x_1);
lean_dec(x_150);
lean_dec(x_11);
lean_dec(x_10);
x_205 = !lean_is_exclusive(x_195);
if (x_205 == 0)
{
return x_195;
}
else
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; 
x_206 = lean_ctor_get(x_195, 0);
x_207 = lean_ctor_get(x_195, 1);
lean_inc(x_207);
lean_inc(x_206);
lean_dec(x_195);
x_208 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_208, 0, x_206);
lean_ctor_set(x_208, 1, x_207);
return x_208;
}
}
}
}
else
{
lean_object* x_209; 
lean_dec(x_157);
x_209 = l___private_Lean_Elab_Match_29__collect___main(x_156, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_209) == 0)
{
uint8_t x_210; 
x_210 = !lean_is_exclusive(x_209);
if (x_210 == 0)
{
lean_object* x_211; lean_object* x_212; lean_object* x_213; 
x_211 = lean_ctor_get(x_209, 0);
x_212 = l_Lean_Syntax_setArg(x_150, x_155, x_211);
x_213 = lean_array_set(x_11, x_25, x_212);
lean_ctor_set(x_1, 1, x_213);
lean_ctor_set(x_209, 0, x_1);
return x_209;
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; 
x_214 = lean_ctor_get(x_209, 0);
x_215 = lean_ctor_get(x_209, 1);
lean_inc(x_215);
lean_inc(x_214);
lean_dec(x_209);
x_216 = l_Lean_Syntax_setArg(x_150, x_155, x_214);
x_217 = lean_array_set(x_11, x_25, x_216);
lean_ctor_set(x_1, 1, x_217);
x_218 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_218, 0, x_1);
lean_ctor_set(x_218, 1, x_215);
return x_218;
}
}
else
{
uint8_t x_219; 
lean_free_object(x_1);
lean_dec(x_150);
lean_dec(x_11);
lean_dec(x_10);
x_219 = !lean_is_exclusive(x_209);
if (x_219 == 0)
{
return x_209;
}
else
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; 
x_220 = lean_ctor_get(x_209, 0);
x_221 = lean_ctor_get(x_209, 1);
lean_inc(x_221);
lean_inc(x_220);
lean_dec(x_209);
x_222 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_222, 0, x_220);
lean_ctor_set(x_222, 1, x_221);
return x_222;
}
}
}
}
else
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; uint8_t x_226; 
lean_dec(x_1);
x_223 = lean_unsigned_to_nat(0u);
x_224 = l_Lean_Syntax_getArg(x_150, x_223);
x_225 = l_Lean_Syntax_getArg(x_150, x_25);
x_226 = l_Lean_Syntax_isNone(x_225);
if (x_226 == 0)
{
lean_object* x_227; lean_object* x_228; uint8_t x_229; 
x_227 = l_Lean_Syntax_getArg(x_225, x_223);
x_228 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__24;
lean_inc(x_227);
x_229 = l_Lean_Syntax_isOfKind(x_227, x_228);
if (x_229 == 0)
{
lean_object* x_230; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_230 = l___private_Lean_Elab_Match_29__collect___main(x_224, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_230) == 0)
{
lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; 
x_231 = lean_ctor_get(x_230, 0);
lean_inc(x_231);
x_232 = lean_ctor_get(x_230, 1);
lean_inc(x_232);
lean_dec(x_230);
x_233 = l_Lean_Syntax_setArg(x_150, x_223, x_231);
x_234 = l_Lean_Syntax_getArg(x_227, x_25);
x_235 = l_Lean_Syntax_getArgs(x_234);
lean_dec(x_234);
x_236 = l___private_Lean_Elab_Match_29__collect___main___closed__11;
x_237 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_29__collect___main___spec__1(x_235, x_236, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_232);
lean_dec(x_235);
if (lean_obj_tag(x_237) == 0)
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; 
x_238 = lean_ctor_get(x_237, 0);
lean_inc(x_238);
x_239 = lean_ctor_get(x_237, 1);
lean_inc(x_239);
if (lean_is_exclusive(x_237)) {
 lean_ctor_release(x_237, 0);
 lean_ctor_release(x_237, 1);
 x_240 = x_237;
} else {
 lean_dec_ref(x_237);
 x_240 = lean_box(0);
}
x_241 = l_Lean_nullKind;
x_242 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_242, 0, x_241);
lean_ctor_set(x_242, 1, x_238);
x_243 = l_Lean_Syntax_setArg(x_227, x_25, x_242);
x_244 = l_Lean_Syntax_setArg(x_225, x_223, x_243);
x_245 = l_Lean_Syntax_setArg(x_233, x_25, x_244);
x_246 = lean_array_set(x_11, x_25, x_245);
x_247 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_247, 0, x_10);
lean_ctor_set(x_247, 1, x_246);
if (lean_is_scalar(x_240)) {
 x_248 = lean_alloc_ctor(0, 2, 0);
} else {
 x_248 = x_240;
}
lean_ctor_set(x_248, 0, x_247);
lean_ctor_set(x_248, 1, x_239);
return x_248;
}
else
{
lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; 
lean_dec(x_233);
lean_dec(x_227);
lean_dec(x_225);
lean_dec(x_11);
lean_dec(x_10);
x_249 = lean_ctor_get(x_237, 0);
lean_inc(x_249);
x_250 = lean_ctor_get(x_237, 1);
lean_inc(x_250);
if (lean_is_exclusive(x_237)) {
 lean_ctor_release(x_237, 0);
 lean_ctor_release(x_237, 1);
 x_251 = x_237;
} else {
 lean_dec_ref(x_237);
 x_251 = lean_box(0);
}
if (lean_is_scalar(x_251)) {
 x_252 = lean_alloc_ctor(1, 2, 0);
} else {
 x_252 = x_251;
}
lean_ctor_set(x_252, 0, x_249);
lean_ctor_set(x_252, 1, x_250);
return x_252;
}
}
else
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; 
lean_dec(x_227);
lean_dec(x_225);
lean_dec(x_150);
lean_dec(x_3);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_253 = lean_ctor_get(x_230, 0);
lean_inc(x_253);
x_254 = lean_ctor_get(x_230, 1);
lean_inc(x_254);
if (lean_is_exclusive(x_230)) {
 lean_ctor_release(x_230, 0);
 lean_ctor_release(x_230, 1);
 x_255 = x_230;
} else {
 lean_dec_ref(x_230);
 x_255 = lean_box(0);
}
if (lean_is_scalar(x_255)) {
 x_256 = lean_alloc_ctor(1, 2, 0);
} else {
 x_256 = x_255;
}
lean_ctor_set(x_256, 0, x_253);
lean_ctor_set(x_256, 1, x_254);
return x_256;
}
}
else
{
lean_object* x_257; 
lean_dec(x_227);
lean_dec(x_225);
x_257 = l___private_Lean_Elab_Match_29__collect___main(x_224, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_257) == 0)
{
lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; 
x_258 = lean_ctor_get(x_257, 0);
lean_inc(x_258);
x_259 = lean_ctor_get(x_257, 1);
lean_inc(x_259);
if (lean_is_exclusive(x_257)) {
 lean_ctor_release(x_257, 0);
 lean_ctor_release(x_257, 1);
 x_260 = x_257;
} else {
 lean_dec_ref(x_257);
 x_260 = lean_box(0);
}
x_261 = l_Lean_Syntax_setArg(x_150, x_223, x_258);
x_262 = lean_array_set(x_11, x_25, x_261);
x_263 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_263, 0, x_10);
lean_ctor_set(x_263, 1, x_262);
if (lean_is_scalar(x_260)) {
 x_264 = lean_alloc_ctor(0, 2, 0);
} else {
 x_264 = x_260;
}
lean_ctor_set(x_264, 0, x_263);
lean_ctor_set(x_264, 1, x_259);
return x_264;
}
else
{
lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; 
lean_dec(x_150);
lean_dec(x_11);
lean_dec(x_10);
x_265 = lean_ctor_get(x_257, 0);
lean_inc(x_265);
x_266 = lean_ctor_get(x_257, 1);
lean_inc(x_266);
if (lean_is_exclusive(x_257)) {
 lean_ctor_release(x_257, 0);
 lean_ctor_release(x_257, 1);
 x_267 = x_257;
} else {
 lean_dec_ref(x_257);
 x_267 = lean_box(0);
}
if (lean_is_scalar(x_267)) {
 x_268 = lean_alloc_ctor(1, 2, 0);
} else {
 x_268 = x_267;
}
lean_ctor_set(x_268, 0, x_265);
lean_ctor_set(x_268, 1, x_266);
return x_268;
}
}
}
else
{
lean_object* x_269; 
lean_dec(x_225);
x_269 = l___private_Lean_Elab_Match_29__collect___main(x_224, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_269) == 0)
{
lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; 
x_270 = lean_ctor_get(x_269, 0);
lean_inc(x_270);
x_271 = lean_ctor_get(x_269, 1);
lean_inc(x_271);
if (lean_is_exclusive(x_269)) {
 lean_ctor_release(x_269, 0);
 lean_ctor_release(x_269, 1);
 x_272 = x_269;
} else {
 lean_dec_ref(x_269);
 x_272 = lean_box(0);
}
x_273 = l_Lean_Syntax_setArg(x_150, x_223, x_270);
x_274 = lean_array_set(x_11, x_25, x_273);
x_275 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_275, 0, x_10);
lean_ctor_set(x_275, 1, x_274);
if (lean_is_scalar(x_272)) {
 x_276 = lean_alloc_ctor(0, 2, 0);
} else {
 x_276 = x_272;
}
lean_ctor_set(x_276, 0, x_275);
lean_ctor_set(x_276, 1, x_271);
return x_276;
}
else
{
lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; 
lean_dec(x_150);
lean_dec(x_11);
lean_dec(x_10);
x_277 = lean_ctor_get(x_269, 0);
lean_inc(x_277);
x_278 = lean_ctor_get(x_269, 1);
lean_inc(x_278);
if (lean_is_exclusive(x_269)) {
 lean_ctor_release(x_269, 0);
 lean_ctor_release(x_269, 1);
 x_279 = x_269;
} else {
 lean_dec_ref(x_269);
 x_279 = lean_box(0);
}
if (lean_is_scalar(x_279)) {
 x_280 = lean_alloc_ctor(1, 2, 0);
} else {
 x_280 = x_279;
}
lean_ctor_set(x_280, 0, x_277);
lean_ctor_set(x_280, 1, x_278);
return x_280;
}
}
}
}
else
{
lean_dec(x_150);
lean_dec(x_3);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_ctor_set(x_27, 0, x_1);
return x_27;
}
}
}
else
{
lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; uint8_t x_287; 
lean_dec(x_3);
lean_free_object(x_27);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_281 = l___private_Lean_Elab_Match_11__mkMVarSyntax___rarg(x_8, x_29);
lean_dec(x_8);
x_282 = lean_ctor_get(x_281, 0);
lean_inc(x_282);
x_283 = lean_ctor_get(x_281, 1);
lean_inc(x_283);
lean_dec(x_281);
x_284 = lean_st_ref_take(x_2, x_283);
x_285 = lean_ctor_get(x_284, 0);
lean_inc(x_285);
x_286 = lean_ctor_get(x_284, 1);
lean_inc(x_286);
lean_dec(x_284);
x_287 = !lean_is_exclusive(x_285);
if (x_287 == 0)
{
lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; uint8_t x_293; 
x_288 = lean_ctor_get(x_285, 1);
x_289 = l___private_Lean_Elab_Match_12__getMVarSyntaxMVarId(x_282);
x_290 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_290, 0, x_289);
x_291 = lean_array_push(x_288, x_290);
lean_ctor_set(x_285, 1, x_291);
x_292 = lean_st_ref_set(x_2, x_285, x_286);
lean_dec(x_2);
x_293 = !lean_is_exclusive(x_292);
if (x_293 == 0)
{
lean_object* x_294; 
x_294 = lean_ctor_get(x_292, 0);
lean_dec(x_294);
lean_ctor_set(x_292, 0, x_282);
return x_292;
}
else
{
lean_object* x_295; lean_object* x_296; 
x_295 = lean_ctor_get(x_292, 1);
lean_inc(x_295);
lean_dec(x_292);
x_296 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_296, 0, x_282);
lean_ctor_set(x_296, 1, x_295);
return x_296;
}
}
else
{
lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; 
x_297 = lean_ctor_get(x_285, 0);
x_298 = lean_ctor_get(x_285, 1);
lean_inc(x_298);
lean_inc(x_297);
lean_dec(x_285);
x_299 = l___private_Lean_Elab_Match_12__getMVarSyntaxMVarId(x_282);
x_300 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_300, 0, x_299);
x_301 = lean_array_push(x_298, x_300);
x_302 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_302, 0, x_297);
lean_ctor_set(x_302, 1, x_301);
x_303 = lean_st_ref_set(x_2, x_302, x_286);
lean_dec(x_2);
x_304 = lean_ctor_get(x_303, 1);
lean_inc(x_304);
if (lean_is_exclusive(x_303)) {
 lean_ctor_release(x_303, 0);
 lean_ctor_release(x_303, 1);
 x_305 = x_303;
} else {
 lean_dec_ref(x_303);
 x_305 = lean_box(0);
}
if (lean_is_scalar(x_305)) {
 x_306 = lean_alloc_ctor(0, 2, 0);
} else {
 x_306 = x_305;
}
lean_ctor_set(x_306, 0, x_282);
lean_ctor_set(x_306, 1, x_304);
return x_306;
}
}
}
else
{
uint8_t x_307; 
lean_free_object(x_27);
x_307 = !lean_is_exclusive(x_1);
if (x_307 == 0)
{
lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; uint8_t x_312; 
x_308 = lean_ctor_get(x_1, 1);
lean_dec(x_308);
x_309 = lean_ctor_get(x_1, 0);
lean_dec(x_309);
x_310 = l_Lean_Syntax_inhabited;
x_311 = lean_array_get(x_310, x_11, x_25);
x_312 = l_Lean_Syntax_isNone(x_311);
if (x_312 == 0)
{
lean_object* x_313; lean_object* x_314; uint8_t x_315; 
lean_free_object(x_1);
lean_dec(x_11);
lean_dec(x_10);
x_313 = l___private_Lean_Elab_Match_29__collect___main___closed__14;
x_314 = l_Lean_throwErrorAt___at___private_Lean_Elab_Match_25__processVar___spec__1___rarg(x_311, x_313, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_311);
x_315 = !lean_is_exclusive(x_314);
if (x_315 == 0)
{
return x_314;
}
else
{
lean_object* x_316; lean_object* x_317; lean_object* x_318; 
x_316 = lean_ctor_get(x_314, 0);
x_317 = lean_ctor_get(x_314, 1);
lean_inc(x_317);
lean_inc(x_316);
lean_dec(x_314);
x_318 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_318, 0, x_316);
lean_ctor_set(x_318, 1, x_317);
return x_318;
}
}
else
{
lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; 
lean_dec(x_311);
x_319 = lean_unsigned_to_nat(2u);
x_320 = lean_array_get(x_310, x_11, x_319);
x_321 = l_Lean_Syntax_getArgs(x_320);
lean_dec(x_320);
x_322 = l___private_Lean_Elab_Match_29__collect___main___closed__15;
x_323 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_29__collect___main___spec__1(x_321, x_322, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_321);
if (lean_obj_tag(x_323) == 0)
{
uint8_t x_324; 
x_324 = !lean_is_exclusive(x_323);
if (x_324 == 0)
{
lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; 
x_325 = lean_ctor_get(x_323, 0);
x_326 = l_Lean_nullKind;
lean_ctor_set(x_1, 1, x_325);
lean_ctor_set(x_1, 0, x_326);
x_327 = lean_array_set(x_11, x_319, x_1);
x_328 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_328, 0, x_10);
lean_ctor_set(x_328, 1, x_327);
lean_ctor_set(x_323, 0, x_328);
return x_323;
}
else
{
lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; 
x_329 = lean_ctor_get(x_323, 0);
x_330 = lean_ctor_get(x_323, 1);
lean_inc(x_330);
lean_inc(x_329);
lean_dec(x_323);
x_331 = l_Lean_nullKind;
lean_ctor_set(x_1, 1, x_329);
lean_ctor_set(x_1, 0, x_331);
x_332 = lean_array_set(x_11, x_319, x_1);
x_333 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_333, 0, x_10);
lean_ctor_set(x_333, 1, x_332);
x_334 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_334, 0, x_333);
lean_ctor_set(x_334, 1, x_330);
return x_334;
}
}
else
{
uint8_t x_335; 
lean_free_object(x_1);
lean_dec(x_11);
lean_dec(x_10);
x_335 = !lean_is_exclusive(x_323);
if (x_335 == 0)
{
return x_323;
}
else
{
lean_object* x_336; lean_object* x_337; lean_object* x_338; 
x_336 = lean_ctor_get(x_323, 0);
x_337 = lean_ctor_get(x_323, 1);
lean_inc(x_337);
lean_inc(x_336);
lean_dec(x_323);
x_338 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_338, 0, x_336);
lean_ctor_set(x_338, 1, x_337);
return x_338;
}
}
}
}
else
{
lean_object* x_339; lean_object* x_340; uint8_t x_341; 
lean_dec(x_1);
x_339 = l_Lean_Syntax_inhabited;
x_340 = lean_array_get(x_339, x_11, x_25);
x_341 = l_Lean_Syntax_isNone(x_340);
if (x_341 == 0)
{
lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; 
lean_dec(x_11);
lean_dec(x_10);
x_342 = l___private_Lean_Elab_Match_29__collect___main___closed__14;
x_343 = l_Lean_throwErrorAt___at___private_Lean_Elab_Match_25__processVar___spec__1___rarg(x_340, x_342, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_340);
x_344 = lean_ctor_get(x_343, 0);
lean_inc(x_344);
x_345 = lean_ctor_get(x_343, 1);
lean_inc(x_345);
if (lean_is_exclusive(x_343)) {
 lean_ctor_release(x_343, 0);
 lean_ctor_release(x_343, 1);
 x_346 = x_343;
} else {
 lean_dec_ref(x_343);
 x_346 = lean_box(0);
}
if (lean_is_scalar(x_346)) {
 x_347 = lean_alloc_ctor(1, 2, 0);
} else {
 x_347 = x_346;
}
lean_ctor_set(x_347, 0, x_344);
lean_ctor_set(x_347, 1, x_345);
return x_347;
}
else
{
lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; 
lean_dec(x_340);
x_348 = lean_unsigned_to_nat(2u);
x_349 = lean_array_get(x_339, x_11, x_348);
x_350 = l_Lean_Syntax_getArgs(x_349);
lean_dec(x_349);
x_351 = l___private_Lean_Elab_Match_29__collect___main___closed__15;
x_352 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_29__collect___main___spec__1(x_350, x_351, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_350);
if (lean_obj_tag(x_352) == 0)
{
lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; 
x_353 = lean_ctor_get(x_352, 0);
lean_inc(x_353);
x_354 = lean_ctor_get(x_352, 1);
lean_inc(x_354);
if (lean_is_exclusive(x_352)) {
 lean_ctor_release(x_352, 0);
 lean_ctor_release(x_352, 1);
 x_355 = x_352;
} else {
 lean_dec_ref(x_352);
 x_355 = lean_box(0);
}
x_356 = l_Lean_nullKind;
x_357 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_357, 0, x_356);
lean_ctor_set(x_357, 1, x_353);
x_358 = lean_array_set(x_11, x_348, x_357);
x_359 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_359, 0, x_10);
lean_ctor_set(x_359, 1, x_358);
if (lean_is_scalar(x_355)) {
 x_360 = lean_alloc_ctor(0, 2, 0);
} else {
 x_360 = x_355;
}
lean_ctor_set(x_360, 0, x_359);
lean_ctor_set(x_360, 1, x_354);
return x_360;
}
else
{
lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; 
lean_dec(x_11);
lean_dec(x_10);
x_361 = lean_ctor_get(x_352, 0);
lean_inc(x_361);
x_362 = lean_ctor_get(x_352, 1);
lean_inc(x_362);
if (lean_is_exclusive(x_352)) {
 lean_ctor_release(x_352, 0);
 lean_ctor_release(x_352, 1);
 x_363 = x_352;
} else {
 lean_dec_ref(x_352);
 x_363 = lean_box(0);
}
if (lean_is_scalar(x_363)) {
 x_364 = lean_alloc_ctor(1, 2, 0);
} else {
 x_364 = x_363;
}
lean_ctor_set(x_364, 0, x_361);
lean_ctor_set(x_364, 1, x_362);
return x_364;
}
}
}
}
}
else
{
uint8_t x_365; 
lean_free_object(x_27);
x_365 = !lean_is_exclusive(x_1);
if (x_365 == 0)
{
lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; 
x_366 = lean_ctor_get(x_1, 1);
lean_dec(x_366);
x_367 = lean_ctor_get(x_1, 0);
lean_dec(x_367);
x_368 = l_Lean_Syntax_inhabited;
x_369 = lean_array_get(x_368, x_11, x_25);
x_370 = l_Lean_Syntax_getArgs(x_369);
lean_dec(x_369);
x_371 = l___private_Lean_Elab_Match_29__collect___main___closed__11;
x_372 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_29__collect___main___spec__1(x_370, x_371, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_370);
if (lean_obj_tag(x_372) == 0)
{
uint8_t x_373; 
x_373 = !lean_is_exclusive(x_372);
if (x_373 == 0)
{
lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; 
x_374 = lean_ctor_get(x_372, 0);
x_375 = l_Lean_nullKind;
lean_ctor_set(x_1, 1, x_374);
lean_ctor_set(x_1, 0, x_375);
x_376 = lean_array_set(x_11, x_25, x_1);
x_377 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_377, 0, x_10);
lean_ctor_set(x_377, 1, x_376);
lean_ctor_set(x_372, 0, x_377);
return x_372;
}
else
{
lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; 
x_378 = lean_ctor_get(x_372, 0);
x_379 = lean_ctor_get(x_372, 1);
lean_inc(x_379);
lean_inc(x_378);
lean_dec(x_372);
x_380 = l_Lean_nullKind;
lean_ctor_set(x_1, 1, x_378);
lean_ctor_set(x_1, 0, x_380);
x_381 = lean_array_set(x_11, x_25, x_1);
x_382 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_382, 0, x_10);
lean_ctor_set(x_382, 1, x_381);
x_383 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_383, 0, x_382);
lean_ctor_set(x_383, 1, x_379);
return x_383;
}
}
else
{
uint8_t x_384; 
lean_free_object(x_1);
lean_dec(x_11);
lean_dec(x_10);
x_384 = !lean_is_exclusive(x_372);
if (x_384 == 0)
{
return x_372;
}
else
{
lean_object* x_385; lean_object* x_386; lean_object* x_387; 
x_385 = lean_ctor_get(x_372, 0);
x_386 = lean_ctor_get(x_372, 1);
lean_inc(x_386);
lean_inc(x_385);
lean_dec(x_372);
x_387 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_387, 0, x_385);
lean_ctor_set(x_387, 1, x_386);
return x_387;
}
}
}
else
{
lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; 
lean_dec(x_1);
x_388 = l_Lean_Syntax_inhabited;
x_389 = lean_array_get(x_388, x_11, x_25);
x_390 = l_Lean_Syntax_getArgs(x_389);
lean_dec(x_389);
x_391 = l___private_Lean_Elab_Match_29__collect___main___closed__11;
x_392 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_29__collect___main___spec__1(x_390, x_391, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_390);
if (lean_obj_tag(x_392) == 0)
{
lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; 
x_393 = lean_ctor_get(x_392, 0);
lean_inc(x_393);
x_394 = lean_ctor_get(x_392, 1);
lean_inc(x_394);
if (lean_is_exclusive(x_392)) {
 lean_ctor_release(x_392, 0);
 lean_ctor_release(x_392, 1);
 x_395 = x_392;
} else {
 lean_dec_ref(x_392);
 x_395 = lean_box(0);
}
x_396 = l_Lean_nullKind;
x_397 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_397, 0, x_396);
lean_ctor_set(x_397, 1, x_393);
x_398 = lean_array_set(x_11, x_25, x_397);
x_399 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_399, 0, x_10);
lean_ctor_set(x_399, 1, x_398);
if (lean_is_scalar(x_395)) {
 x_400 = lean_alloc_ctor(0, 2, 0);
} else {
 x_400 = x_395;
}
lean_ctor_set(x_400, 0, x_399);
lean_ctor_set(x_400, 1, x_394);
return x_400;
}
else
{
lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; 
lean_dec(x_11);
lean_dec(x_10);
x_401 = lean_ctor_get(x_392, 0);
lean_inc(x_401);
x_402 = lean_ctor_get(x_392, 1);
lean_inc(x_402);
if (lean_is_exclusive(x_392)) {
 lean_ctor_release(x_392, 0);
 lean_ctor_release(x_392, 1);
 x_403 = x_392;
} else {
 lean_dec_ref(x_392);
 x_403 = lean_box(0);
}
if (lean_is_scalar(x_403)) {
 x_404 = lean_alloc_ctor(1, 2, 0);
} else {
 x_404 = x_403;
}
lean_ctor_set(x_404, 0, x_401);
lean_ctor_set(x_404, 1, x_402);
return x_404;
}
}
}
}
else
{
lean_object* x_405; lean_object* x_406; 
lean_free_object(x_27);
lean_dec(x_11);
lean_dec(x_10);
x_405 = l___private_Lean_Elab_Match_29__collect___main___closed__11;
x_406 = l_Lean_Elab_Term_CollectPatternVars_processCtorApp(x_405, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_1);
return x_406;
}
}
else
{
lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; uint8_t x_414; uint8_t x_415; lean_object* x_416; 
x_407 = lean_ctor_get(x_3, 0);
x_408 = lean_ctor_get(x_3, 1);
x_409 = lean_ctor_get(x_3, 2);
x_410 = lean_ctor_get(x_3, 3);
x_411 = lean_ctor_get(x_3, 4);
x_412 = lean_ctor_get(x_3, 5);
x_413 = lean_ctor_get(x_3, 6);
x_414 = lean_ctor_get_uint8(x_3, sizeof(void*)*8);
x_415 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 1);
lean_inc(x_413);
lean_inc(x_412);
lean_inc(x_411);
lean_inc(x_410);
lean_inc(x_409);
lean_inc(x_408);
lean_inc(x_407);
lean_dec(x_3);
x_416 = lean_alloc_ctor(0, 8, 2);
lean_ctor_set(x_416, 0, x_407);
lean_ctor_set(x_416, 1, x_408);
lean_ctor_set(x_416, 2, x_409);
lean_ctor_set(x_416, 3, x_410);
lean_ctor_set(x_416, 4, x_411);
lean_ctor_set(x_416, 5, x_412);
lean_ctor_set(x_416, 6, x_413);
lean_ctor_set(x_416, 7, x_24);
lean_ctor_set_uint8(x_416, sizeof(void*)*8, x_414);
lean_ctor_set_uint8(x_416, sizeof(void*)*8 + 1, x_415);
if (x_20 == 0)
{
lean_object* x_417; uint8_t x_418; 
x_417 = l___private_Lean_Elab_Match_29__collect___main___closed__2;
x_418 = lean_name_eq(x_10, x_417);
if (x_418 == 0)
{
lean_object* x_419; uint8_t x_420; 
x_419 = l_Lean_Elab_Term_quoteAutoTactic___main___closed__2;
x_420 = lean_name_eq(x_10, x_419);
if (x_420 == 0)
{
lean_object* x_421; uint8_t x_422; 
x_421 = l_Lean_mkHole___closed__2;
x_422 = lean_name_eq(x_10, x_421);
if (x_422 == 0)
{
lean_object* x_423; uint8_t x_424; 
x_423 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__20;
x_424 = lean_name_eq(x_10, x_423);
if (x_424 == 0)
{
lean_object* x_425; uint8_t x_426; 
lean_dec(x_11);
x_425 = l___private_Lean_Elab_App_23__elabAppFn___main___closed__5;
x_426 = lean_name_eq(x_10, x_425);
if (x_426 == 0)
{
lean_object* x_427; uint8_t x_428; 
x_427 = l___private_Lean_Elab_App_23__elabAppFn___main___closed__12;
x_428 = lean_name_eq(x_10, x_427);
if (x_428 == 0)
{
lean_object* x_429; uint8_t x_430; 
x_429 = l___regBuiltin_Lean_Elab_Term_elabInaccessible___closed__2;
x_430 = lean_name_eq(x_10, x_429);
if (x_430 == 0)
{
lean_object* x_431; uint8_t x_432; 
x_431 = l_Lean_strLitKind;
x_432 = lean_name_eq(x_10, x_431);
if (x_432 == 0)
{
lean_object* x_433; uint8_t x_434; 
x_433 = l_Lean_numLitKind;
x_434 = lean_name_eq(x_10, x_433);
if (x_434 == 0)
{
lean_object* x_435; uint8_t x_436; 
x_435 = l_Lean_charLitKind;
x_436 = lean_name_eq(x_10, x_435);
if (x_436 == 0)
{
lean_object* x_437; uint8_t x_438; 
lean_free_object(x_27);
x_437 = l___regBuiltin_Lean_Elab_Term_elabQuotedName___closed__2;
x_438 = lean_name_eq(x_10, x_437);
if (x_438 == 0)
{
lean_object* x_439; uint8_t x_440; 
lean_dec(x_1);
x_439 = l_Lean_choiceKind;
x_440 = lean_name_eq(x_10, x_439);
lean_dec(x_10);
if (x_440 == 0)
{
lean_object* x_441; 
x_441 = l___private_Lean_Elab_Match_16__throwInvalidPattern___rarg(x_2, x_416, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_416);
lean_dec(x_2);
return x_441;
}
else
{
lean_object* x_442; lean_object* x_443; 
x_442 = l___private_Lean_Elab_Match_29__collect___main___closed__5;
x_443 = l_Lean_throwError___at___private_Lean_Elab_Match_13__throwCtorExpected___spec__1___rarg(x_442, x_2, x_416, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_416);
lean_dec(x_2);
return x_443;
}
}
else
{
lean_object* x_444; 
lean_dec(x_10);
lean_dec(x_2);
x_444 = l___private_Lean_Elab_Match_28__quotedNameToPattern(x_1, x_416, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_444;
}
}
else
{
lean_dec(x_416);
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_ctor_set(x_27, 0, x_1);
return x_27;
}
}
else
{
lean_dec(x_416);
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_ctor_set(x_27, 0, x_1);
return x_27;
}
}
else
{
lean_dec(x_416);
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_ctor_set(x_27, 0, x_1);
return x_27;
}
}
else
{
lean_dec(x_416);
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_ctor_set(x_27, 0, x_1);
return x_27;
}
}
else
{
lean_object* x_445; lean_object* x_446; lean_object* x_447; 
lean_free_object(x_27);
lean_dec(x_10);
x_445 = lean_unsigned_to_nat(0u);
x_446 = l_Lean_Syntax_getArg(x_1, x_445);
lean_inc(x_7);
lean_inc(x_446);
x_447 = l___private_Lean_Elab_Match_25__processVar(x_446, x_2, x_416, x_4, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_447) == 0)
{
lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; 
x_448 = lean_ctor_get(x_447, 1);
lean_inc(x_448);
lean_dec(x_447);
x_449 = lean_unsigned_to_nat(2u);
x_450 = l_Lean_Syntax_getArg(x_1, x_449);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_451 = x_1;
} else {
 lean_dec_ref(x_1);
 x_451 = lean_box(0);
}
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_416);
x_452 = l___private_Lean_Elab_Match_29__collect___main(x_450, x_2, x_416, x_4, x_5, x_6, x_7, x_8, x_448);
if (lean_obj_tag(x_452) == 0)
{
lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; 
x_453 = lean_ctor_get(x_452, 0);
lean_inc(x_453);
x_454 = lean_ctor_get(x_452, 1);
lean_inc(x_454);
lean_dec(x_452);
x_455 = l_Lean_Elab_Term_getCurrMacroScope(x_416, x_4, x_5, x_6, x_7, x_8, x_454);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_416);
x_456 = lean_ctor_get(x_455, 0);
lean_inc(x_456);
x_457 = lean_ctor_get(x_455, 1);
lean_inc(x_457);
lean_dec(x_455);
x_458 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_457);
lean_dec(x_8);
x_459 = lean_ctor_get(x_458, 0);
lean_inc(x_459);
x_460 = lean_ctor_get(x_458, 1);
lean_inc(x_460);
if (lean_is_exclusive(x_458)) {
 lean_ctor_release(x_458, 0);
 lean_ctor_release(x_458, 1);
 x_461 = x_458;
} else {
 lean_dec_ref(x_458);
 x_461 = lean_box(0);
}
x_462 = l___private_Lean_Elab_Match_29__collect___main___closed__8;
x_463 = l_Lean_addMacroScope(x_459, x_462, x_456);
x_464 = l_Lean_SourceInfo_inhabited___closed__1;
x_465 = l___private_Lean_Elab_Match_29__collect___main___closed__7;
x_466 = l___private_Lean_Elab_Match_29__collect___main___closed__10;
x_467 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_467, 0, x_464);
lean_ctor_set(x_467, 1, x_465);
lean_ctor_set(x_467, 2, x_463);
lean_ctor_set(x_467, 3, x_466);
x_468 = l_Array_empty___closed__1;
x_469 = lean_array_push(x_468, x_467);
x_470 = lean_array_push(x_468, x_446);
x_471 = lean_array_push(x_470, x_453);
x_472 = l_Lean_nullKind___closed__2;
if (lean_is_scalar(x_451)) {
 x_473 = lean_alloc_ctor(1, 2, 0);
} else {
 x_473 = x_451;
}
lean_ctor_set(x_473, 0, x_472);
lean_ctor_set(x_473, 1, x_471);
x_474 = lean_array_push(x_469, x_473);
x_475 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_475, 0, x_12);
lean_ctor_set(x_475, 1, x_474);
if (lean_is_scalar(x_461)) {
 x_476 = lean_alloc_ctor(0, 2, 0);
} else {
 x_476 = x_461;
}
lean_ctor_set(x_476, 0, x_475);
lean_ctor_set(x_476, 1, x_460);
return x_476;
}
else
{
lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; 
lean_dec(x_451);
lean_dec(x_446);
lean_dec(x_416);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_477 = lean_ctor_get(x_452, 0);
lean_inc(x_477);
x_478 = lean_ctor_get(x_452, 1);
lean_inc(x_478);
if (lean_is_exclusive(x_452)) {
 lean_ctor_release(x_452, 0);
 lean_ctor_release(x_452, 1);
 x_479 = x_452;
} else {
 lean_dec_ref(x_452);
 x_479 = lean_box(0);
}
if (lean_is_scalar(x_479)) {
 x_480 = lean_alloc_ctor(1, 2, 0);
} else {
 x_480 = x_479;
}
lean_ctor_set(x_480, 0, x_477);
lean_ctor_set(x_480, 1, x_478);
return x_480;
}
}
else
{
lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; 
lean_dec(x_446);
lean_dec(x_416);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_481 = lean_ctor_get(x_447, 0);
lean_inc(x_481);
x_482 = lean_ctor_get(x_447, 1);
lean_inc(x_482);
if (lean_is_exclusive(x_447)) {
 lean_ctor_release(x_447, 0);
 lean_ctor_release(x_447, 1);
 x_483 = x_447;
} else {
 lean_dec_ref(x_447);
 x_483 = lean_box(0);
}
if (lean_is_scalar(x_483)) {
 x_484 = lean_alloc_ctor(1, 2, 0);
} else {
 x_484 = x_483;
}
lean_ctor_set(x_484, 0, x_481);
lean_ctor_set(x_484, 1, x_482);
return x_484;
}
}
}
else
{
lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; 
lean_free_object(x_27);
lean_dec(x_10);
x_485 = lean_unsigned_to_nat(0u);
x_486 = l_Lean_Syntax_getArg(x_1, x_485);
lean_dec(x_1);
x_487 = l___private_Lean_Elab_Match_29__collect___main___closed__11;
x_488 = l_Lean_Elab_Term_CollectPatternVars_processCtor(x_487, x_486, x_2, x_416, x_4, x_5, x_6, x_7, x_8, x_29);
return x_488;
}
}
else
{
lean_object* x_489; lean_object* x_490; uint8_t x_491; 
x_489 = l_Lean_Syntax_inhabited;
x_490 = lean_array_get(x_489, x_11, x_25);
x_491 = l_Lean_Syntax_isNone(x_490);
if (x_491 == 0)
{
lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; uint8_t x_496; 
lean_free_object(x_27);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_492 = x_1;
} else {
 lean_dec_ref(x_1);
 x_492 = lean_box(0);
}
x_493 = lean_unsigned_to_nat(0u);
x_494 = l_Lean_Syntax_getArg(x_490, x_493);
x_495 = l_Lean_Syntax_getArg(x_490, x_25);
x_496 = l_Lean_Syntax_isNone(x_495);
if (x_496 == 0)
{
lean_object* x_497; lean_object* x_498; uint8_t x_499; 
x_497 = l_Lean_Syntax_getArg(x_495, x_493);
x_498 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__24;
lean_inc(x_497);
x_499 = l_Lean_Syntax_isOfKind(x_497, x_498);
if (x_499 == 0)
{
lean_object* x_500; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_416);
lean_inc(x_2);
x_500 = l___private_Lean_Elab_Match_29__collect___main(x_494, x_2, x_416, x_4, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_500) == 0)
{
lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_507; 
x_501 = lean_ctor_get(x_500, 0);
lean_inc(x_501);
x_502 = lean_ctor_get(x_500, 1);
lean_inc(x_502);
lean_dec(x_500);
x_503 = l_Lean_Syntax_setArg(x_490, x_493, x_501);
x_504 = l_Lean_Syntax_getArg(x_497, x_25);
x_505 = l_Lean_Syntax_getArgs(x_504);
lean_dec(x_504);
x_506 = l___private_Lean_Elab_Match_29__collect___main___closed__11;
x_507 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_29__collect___main___spec__1(x_505, x_506, x_2, x_416, x_4, x_5, x_6, x_7, x_8, x_502);
lean_dec(x_505);
if (lean_obj_tag(x_507) == 0)
{
lean_object* x_508; lean_object* x_509; lean_object* x_510; lean_object* x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; 
x_508 = lean_ctor_get(x_507, 0);
lean_inc(x_508);
x_509 = lean_ctor_get(x_507, 1);
lean_inc(x_509);
if (lean_is_exclusive(x_507)) {
 lean_ctor_release(x_507, 0);
 lean_ctor_release(x_507, 1);
 x_510 = x_507;
} else {
 lean_dec_ref(x_507);
 x_510 = lean_box(0);
}
x_511 = l_Lean_nullKind;
if (lean_is_scalar(x_492)) {
 x_512 = lean_alloc_ctor(1, 2, 0);
} else {
 x_512 = x_492;
}
lean_ctor_set(x_512, 0, x_511);
lean_ctor_set(x_512, 1, x_508);
x_513 = l_Lean_Syntax_setArg(x_497, x_25, x_512);
x_514 = l_Lean_Syntax_setArg(x_495, x_493, x_513);
x_515 = l_Lean_Syntax_setArg(x_503, x_25, x_514);
x_516 = lean_array_set(x_11, x_25, x_515);
x_517 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_517, 0, x_10);
lean_ctor_set(x_517, 1, x_516);
if (lean_is_scalar(x_510)) {
 x_518 = lean_alloc_ctor(0, 2, 0);
} else {
 x_518 = x_510;
}
lean_ctor_set(x_518, 0, x_517);
lean_ctor_set(x_518, 1, x_509);
return x_518;
}
else
{
lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; 
lean_dec(x_503);
lean_dec(x_497);
lean_dec(x_495);
lean_dec(x_492);
lean_dec(x_11);
lean_dec(x_10);
x_519 = lean_ctor_get(x_507, 0);
lean_inc(x_519);
x_520 = lean_ctor_get(x_507, 1);
lean_inc(x_520);
if (lean_is_exclusive(x_507)) {
 lean_ctor_release(x_507, 0);
 lean_ctor_release(x_507, 1);
 x_521 = x_507;
} else {
 lean_dec_ref(x_507);
 x_521 = lean_box(0);
}
if (lean_is_scalar(x_521)) {
 x_522 = lean_alloc_ctor(1, 2, 0);
} else {
 x_522 = x_521;
}
lean_ctor_set(x_522, 0, x_519);
lean_ctor_set(x_522, 1, x_520);
return x_522;
}
}
else
{
lean_object* x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; 
lean_dec(x_497);
lean_dec(x_495);
lean_dec(x_492);
lean_dec(x_490);
lean_dec(x_416);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_523 = lean_ctor_get(x_500, 0);
lean_inc(x_523);
x_524 = lean_ctor_get(x_500, 1);
lean_inc(x_524);
if (lean_is_exclusive(x_500)) {
 lean_ctor_release(x_500, 0);
 lean_ctor_release(x_500, 1);
 x_525 = x_500;
} else {
 lean_dec_ref(x_500);
 x_525 = lean_box(0);
}
if (lean_is_scalar(x_525)) {
 x_526 = lean_alloc_ctor(1, 2, 0);
} else {
 x_526 = x_525;
}
lean_ctor_set(x_526, 0, x_523);
lean_ctor_set(x_526, 1, x_524);
return x_526;
}
}
else
{
lean_object* x_527; 
lean_dec(x_497);
lean_dec(x_495);
x_527 = l___private_Lean_Elab_Match_29__collect___main(x_494, x_2, x_416, x_4, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_527) == 0)
{
lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; lean_object* x_533; lean_object* x_534; 
x_528 = lean_ctor_get(x_527, 0);
lean_inc(x_528);
x_529 = lean_ctor_get(x_527, 1);
lean_inc(x_529);
if (lean_is_exclusive(x_527)) {
 lean_ctor_release(x_527, 0);
 lean_ctor_release(x_527, 1);
 x_530 = x_527;
} else {
 lean_dec_ref(x_527);
 x_530 = lean_box(0);
}
x_531 = l_Lean_Syntax_setArg(x_490, x_493, x_528);
x_532 = lean_array_set(x_11, x_25, x_531);
if (lean_is_scalar(x_492)) {
 x_533 = lean_alloc_ctor(1, 2, 0);
} else {
 x_533 = x_492;
}
lean_ctor_set(x_533, 0, x_10);
lean_ctor_set(x_533, 1, x_532);
if (lean_is_scalar(x_530)) {
 x_534 = lean_alloc_ctor(0, 2, 0);
} else {
 x_534 = x_530;
}
lean_ctor_set(x_534, 0, x_533);
lean_ctor_set(x_534, 1, x_529);
return x_534;
}
else
{
lean_object* x_535; lean_object* x_536; lean_object* x_537; lean_object* x_538; 
lean_dec(x_492);
lean_dec(x_490);
lean_dec(x_11);
lean_dec(x_10);
x_535 = lean_ctor_get(x_527, 0);
lean_inc(x_535);
x_536 = lean_ctor_get(x_527, 1);
lean_inc(x_536);
if (lean_is_exclusive(x_527)) {
 lean_ctor_release(x_527, 0);
 lean_ctor_release(x_527, 1);
 x_537 = x_527;
} else {
 lean_dec_ref(x_527);
 x_537 = lean_box(0);
}
if (lean_is_scalar(x_537)) {
 x_538 = lean_alloc_ctor(1, 2, 0);
} else {
 x_538 = x_537;
}
lean_ctor_set(x_538, 0, x_535);
lean_ctor_set(x_538, 1, x_536);
return x_538;
}
}
}
else
{
lean_object* x_539; 
lean_dec(x_495);
x_539 = l___private_Lean_Elab_Match_29__collect___main(x_494, x_2, x_416, x_4, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_539) == 0)
{
lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; lean_object* x_545; lean_object* x_546; 
x_540 = lean_ctor_get(x_539, 0);
lean_inc(x_540);
x_541 = lean_ctor_get(x_539, 1);
lean_inc(x_541);
if (lean_is_exclusive(x_539)) {
 lean_ctor_release(x_539, 0);
 lean_ctor_release(x_539, 1);
 x_542 = x_539;
} else {
 lean_dec_ref(x_539);
 x_542 = lean_box(0);
}
x_543 = l_Lean_Syntax_setArg(x_490, x_493, x_540);
x_544 = lean_array_set(x_11, x_25, x_543);
if (lean_is_scalar(x_492)) {
 x_545 = lean_alloc_ctor(1, 2, 0);
} else {
 x_545 = x_492;
}
lean_ctor_set(x_545, 0, x_10);
lean_ctor_set(x_545, 1, x_544);
if (lean_is_scalar(x_542)) {
 x_546 = lean_alloc_ctor(0, 2, 0);
} else {
 x_546 = x_542;
}
lean_ctor_set(x_546, 0, x_545);
lean_ctor_set(x_546, 1, x_541);
return x_546;
}
else
{
lean_object* x_547; lean_object* x_548; lean_object* x_549; lean_object* x_550; 
lean_dec(x_492);
lean_dec(x_490);
lean_dec(x_11);
lean_dec(x_10);
x_547 = lean_ctor_get(x_539, 0);
lean_inc(x_547);
x_548 = lean_ctor_get(x_539, 1);
lean_inc(x_548);
if (lean_is_exclusive(x_539)) {
 lean_ctor_release(x_539, 0);
 lean_ctor_release(x_539, 1);
 x_549 = x_539;
} else {
 lean_dec_ref(x_539);
 x_549 = lean_box(0);
}
if (lean_is_scalar(x_549)) {
 x_550 = lean_alloc_ctor(1, 2, 0);
} else {
 x_550 = x_549;
}
lean_ctor_set(x_550, 0, x_547);
lean_ctor_set(x_550, 1, x_548);
return x_550;
}
}
}
else
{
lean_dec(x_490);
lean_dec(x_416);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_ctor_set(x_27, 0, x_1);
return x_27;
}
}
}
else
{
lean_object* x_551; lean_object* x_552; lean_object* x_553; lean_object* x_554; lean_object* x_555; lean_object* x_556; lean_object* x_557; lean_object* x_558; lean_object* x_559; lean_object* x_560; lean_object* x_561; lean_object* x_562; lean_object* x_563; lean_object* x_564; lean_object* x_565; lean_object* x_566; lean_object* x_567; 
lean_dec(x_416);
lean_free_object(x_27);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_551 = l___private_Lean_Elab_Match_11__mkMVarSyntax___rarg(x_8, x_29);
lean_dec(x_8);
x_552 = lean_ctor_get(x_551, 0);
lean_inc(x_552);
x_553 = lean_ctor_get(x_551, 1);
lean_inc(x_553);
lean_dec(x_551);
x_554 = lean_st_ref_take(x_2, x_553);
x_555 = lean_ctor_get(x_554, 0);
lean_inc(x_555);
x_556 = lean_ctor_get(x_554, 1);
lean_inc(x_556);
lean_dec(x_554);
x_557 = lean_ctor_get(x_555, 0);
lean_inc(x_557);
x_558 = lean_ctor_get(x_555, 1);
lean_inc(x_558);
if (lean_is_exclusive(x_555)) {
 lean_ctor_release(x_555, 0);
 lean_ctor_release(x_555, 1);
 x_559 = x_555;
} else {
 lean_dec_ref(x_555);
 x_559 = lean_box(0);
}
x_560 = l___private_Lean_Elab_Match_12__getMVarSyntaxMVarId(x_552);
x_561 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_561, 0, x_560);
x_562 = lean_array_push(x_558, x_561);
if (lean_is_scalar(x_559)) {
 x_563 = lean_alloc_ctor(0, 2, 0);
} else {
 x_563 = x_559;
}
lean_ctor_set(x_563, 0, x_557);
lean_ctor_set(x_563, 1, x_562);
x_564 = lean_st_ref_set(x_2, x_563, x_556);
lean_dec(x_2);
x_565 = lean_ctor_get(x_564, 1);
lean_inc(x_565);
if (lean_is_exclusive(x_564)) {
 lean_ctor_release(x_564, 0);
 lean_ctor_release(x_564, 1);
 x_566 = x_564;
} else {
 lean_dec_ref(x_564);
 x_566 = lean_box(0);
}
if (lean_is_scalar(x_566)) {
 x_567 = lean_alloc_ctor(0, 2, 0);
} else {
 x_567 = x_566;
}
lean_ctor_set(x_567, 0, x_552);
lean_ctor_set(x_567, 1, x_565);
return x_567;
}
}
else
{
lean_object* x_568; lean_object* x_569; lean_object* x_570; uint8_t x_571; 
lean_free_object(x_27);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_568 = x_1;
} else {
 lean_dec_ref(x_1);
 x_568 = lean_box(0);
}
x_569 = l_Lean_Syntax_inhabited;
x_570 = lean_array_get(x_569, x_11, x_25);
x_571 = l_Lean_Syntax_isNone(x_570);
if (x_571 == 0)
{
lean_object* x_572; lean_object* x_573; lean_object* x_574; lean_object* x_575; lean_object* x_576; lean_object* x_577; 
lean_dec(x_568);
lean_dec(x_11);
lean_dec(x_10);
x_572 = l___private_Lean_Elab_Match_29__collect___main___closed__14;
x_573 = l_Lean_throwErrorAt___at___private_Lean_Elab_Match_25__processVar___spec__1___rarg(x_570, x_572, x_2, x_416, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_416);
lean_dec(x_2);
lean_dec(x_570);
x_574 = lean_ctor_get(x_573, 0);
lean_inc(x_574);
x_575 = lean_ctor_get(x_573, 1);
lean_inc(x_575);
if (lean_is_exclusive(x_573)) {
 lean_ctor_release(x_573, 0);
 lean_ctor_release(x_573, 1);
 x_576 = x_573;
} else {
 lean_dec_ref(x_573);
 x_576 = lean_box(0);
}
if (lean_is_scalar(x_576)) {
 x_577 = lean_alloc_ctor(1, 2, 0);
} else {
 x_577 = x_576;
}
lean_ctor_set(x_577, 0, x_574);
lean_ctor_set(x_577, 1, x_575);
return x_577;
}
else
{
lean_object* x_578; lean_object* x_579; lean_object* x_580; lean_object* x_581; lean_object* x_582; 
lean_dec(x_570);
x_578 = lean_unsigned_to_nat(2u);
x_579 = lean_array_get(x_569, x_11, x_578);
x_580 = l_Lean_Syntax_getArgs(x_579);
lean_dec(x_579);
x_581 = l___private_Lean_Elab_Match_29__collect___main___closed__15;
x_582 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_29__collect___main___spec__1(x_580, x_581, x_2, x_416, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_580);
if (lean_obj_tag(x_582) == 0)
{
lean_object* x_583; lean_object* x_584; lean_object* x_585; lean_object* x_586; lean_object* x_587; lean_object* x_588; lean_object* x_589; lean_object* x_590; 
x_583 = lean_ctor_get(x_582, 0);
lean_inc(x_583);
x_584 = lean_ctor_get(x_582, 1);
lean_inc(x_584);
if (lean_is_exclusive(x_582)) {
 lean_ctor_release(x_582, 0);
 lean_ctor_release(x_582, 1);
 x_585 = x_582;
} else {
 lean_dec_ref(x_582);
 x_585 = lean_box(0);
}
x_586 = l_Lean_nullKind;
if (lean_is_scalar(x_568)) {
 x_587 = lean_alloc_ctor(1, 2, 0);
} else {
 x_587 = x_568;
}
lean_ctor_set(x_587, 0, x_586);
lean_ctor_set(x_587, 1, x_583);
x_588 = lean_array_set(x_11, x_578, x_587);
x_589 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_589, 0, x_10);
lean_ctor_set(x_589, 1, x_588);
if (lean_is_scalar(x_585)) {
 x_590 = lean_alloc_ctor(0, 2, 0);
} else {
 x_590 = x_585;
}
lean_ctor_set(x_590, 0, x_589);
lean_ctor_set(x_590, 1, x_584);
return x_590;
}
else
{
lean_object* x_591; lean_object* x_592; lean_object* x_593; lean_object* x_594; 
lean_dec(x_568);
lean_dec(x_11);
lean_dec(x_10);
x_591 = lean_ctor_get(x_582, 0);
lean_inc(x_591);
x_592 = lean_ctor_get(x_582, 1);
lean_inc(x_592);
if (lean_is_exclusive(x_582)) {
 lean_ctor_release(x_582, 0);
 lean_ctor_release(x_582, 1);
 x_593 = x_582;
} else {
 lean_dec_ref(x_582);
 x_593 = lean_box(0);
}
if (lean_is_scalar(x_593)) {
 x_594 = lean_alloc_ctor(1, 2, 0);
} else {
 x_594 = x_593;
}
lean_ctor_set(x_594, 0, x_591);
lean_ctor_set(x_594, 1, x_592);
return x_594;
}
}
}
}
else
{
lean_object* x_595; lean_object* x_596; lean_object* x_597; lean_object* x_598; lean_object* x_599; lean_object* x_600; 
lean_free_object(x_27);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_595 = x_1;
} else {
 lean_dec_ref(x_1);
 x_595 = lean_box(0);
}
x_596 = l_Lean_Syntax_inhabited;
x_597 = lean_array_get(x_596, x_11, x_25);
x_598 = l_Lean_Syntax_getArgs(x_597);
lean_dec(x_597);
x_599 = l___private_Lean_Elab_Match_29__collect___main___closed__11;
x_600 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_29__collect___main___spec__1(x_598, x_599, x_2, x_416, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_598);
if (lean_obj_tag(x_600) == 0)
{
lean_object* x_601; lean_object* x_602; lean_object* x_603; lean_object* x_604; lean_object* x_605; lean_object* x_606; lean_object* x_607; lean_object* x_608; 
x_601 = lean_ctor_get(x_600, 0);
lean_inc(x_601);
x_602 = lean_ctor_get(x_600, 1);
lean_inc(x_602);
if (lean_is_exclusive(x_600)) {
 lean_ctor_release(x_600, 0);
 lean_ctor_release(x_600, 1);
 x_603 = x_600;
} else {
 lean_dec_ref(x_600);
 x_603 = lean_box(0);
}
x_604 = l_Lean_nullKind;
if (lean_is_scalar(x_595)) {
 x_605 = lean_alloc_ctor(1, 2, 0);
} else {
 x_605 = x_595;
}
lean_ctor_set(x_605, 0, x_604);
lean_ctor_set(x_605, 1, x_601);
x_606 = lean_array_set(x_11, x_25, x_605);
x_607 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_607, 0, x_10);
lean_ctor_set(x_607, 1, x_606);
if (lean_is_scalar(x_603)) {
 x_608 = lean_alloc_ctor(0, 2, 0);
} else {
 x_608 = x_603;
}
lean_ctor_set(x_608, 0, x_607);
lean_ctor_set(x_608, 1, x_602);
return x_608;
}
else
{
lean_object* x_609; lean_object* x_610; lean_object* x_611; lean_object* x_612; 
lean_dec(x_595);
lean_dec(x_11);
lean_dec(x_10);
x_609 = lean_ctor_get(x_600, 0);
lean_inc(x_609);
x_610 = lean_ctor_get(x_600, 1);
lean_inc(x_610);
if (lean_is_exclusive(x_600)) {
 lean_ctor_release(x_600, 0);
 lean_ctor_release(x_600, 1);
 x_611 = x_600;
} else {
 lean_dec_ref(x_600);
 x_611 = lean_box(0);
}
if (lean_is_scalar(x_611)) {
 x_612 = lean_alloc_ctor(1, 2, 0);
} else {
 x_612 = x_611;
}
lean_ctor_set(x_612, 0, x_609);
lean_ctor_set(x_612, 1, x_610);
return x_612;
}
}
}
else
{
lean_object* x_613; lean_object* x_614; 
lean_free_object(x_27);
lean_dec(x_11);
lean_dec(x_10);
x_613 = l___private_Lean_Elab_Match_29__collect___main___closed__11;
x_614 = l_Lean_Elab_Term_CollectPatternVars_processCtorApp(x_613, x_1, x_2, x_416, x_4, x_5, x_6, x_7, x_8, x_29);
lean_dec(x_1);
return x_614;
}
}
}
else
{
lean_object* x_615; lean_object* x_616; lean_object* x_617; lean_object* x_618; lean_object* x_619; lean_object* x_620; lean_object* x_621; lean_object* x_622; uint8_t x_623; uint8_t x_624; lean_object* x_625; lean_object* x_626; 
x_615 = lean_ctor_get(x_27, 1);
lean_inc(x_615);
lean_dec(x_27);
x_616 = lean_ctor_get(x_3, 0);
lean_inc(x_616);
x_617 = lean_ctor_get(x_3, 1);
lean_inc(x_617);
x_618 = lean_ctor_get(x_3, 2);
lean_inc(x_618);
x_619 = lean_ctor_get(x_3, 3);
lean_inc(x_619);
x_620 = lean_ctor_get(x_3, 4);
lean_inc(x_620);
x_621 = lean_ctor_get(x_3, 5);
lean_inc(x_621);
x_622 = lean_ctor_get(x_3, 6);
lean_inc(x_622);
x_623 = lean_ctor_get_uint8(x_3, sizeof(void*)*8);
x_624 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 1);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 lean_ctor_release(x_3, 4);
 lean_ctor_release(x_3, 5);
 lean_ctor_release(x_3, 6);
 lean_ctor_release(x_3, 7);
 x_625 = x_3;
} else {
 lean_dec_ref(x_3);
 x_625 = lean_box(0);
}
if (lean_is_scalar(x_625)) {
 x_626 = lean_alloc_ctor(0, 8, 2);
} else {
 x_626 = x_625;
}
lean_ctor_set(x_626, 0, x_616);
lean_ctor_set(x_626, 1, x_617);
lean_ctor_set(x_626, 2, x_618);
lean_ctor_set(x_626, 3, x_619);
lean_ctor_set(x_626, 4, x_620);
lean_ctor_set(x_626, 5, x_621);
lean_ctor_set(x_626, 6, x_622);
lean_ctor_set(x_626, 7, x_24);
lean_ctor_set_uint8(x_626, sizeof(void*)*8, x_623);
lean_ctor_set_uint8(x_626, sizeof(void*)*8 + 1, x_624);
if (x_20 == 0)
{
lean_object* x_627; uint8_t x_628; 
x_627 = l___private_Lean_Elab_Match_29__collect___main___closed__2;
x_628 = lean_name_eq(x_10, x_627);
if (x_628 == 0)
{
lean_object* x_629; uint8_t x_630; 
x_629 = l_Lean_Elab_Term_quoteAutoTactic___main___closed__2;
x_630 = lean_name_eq(x_10, x_629);
if (x_630 == 0)
{
lean_object* x_631; uint8_t x_632; 
x_631 = l_Lean_mkHole___closed__2;
x_632 = lean_name_eq(x_10, x_631);
if (x_632 == 0)
{
lean_object* x_633; uint8_t x_634; 
x_633 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__20;
x_634 = lean_name_eq(x_10, x_633);
if (x_634 == 0)
{
lean_object* x_635; uint8_t x_636; 
lean_dec(x_11);
x_635 = l___private_Lean_Elab_App_23__elabAppFn___main___closed__5;
x_636 = lean_name_eq(x_10, x_635);
if (x_636 == 0)
{
lean_object* x_637; uint8_t x_638; 
x_637 = l___private_Lean_Elab_App_23__elabAppFn___main___closed__12;
x_638 = lean_name_eq(x_10, x_637);
if (x_638 == 0)
{
lean_object* x_639; uint8_t x_640; 
x_639 = l___regBuiltin_Lean_Elab_Term_elabInaccessible___closed__2;
x_640 = lean_name_eq(x_10, x_639);
if (x_640 == 0)
{
lean_object* x_641; uint8_t x_642; 
x_641 = l_Lean_strLitKind;
x_642 = lean_name_eq(x_10, x_641);
if (x_642 == 0)
{
lean_object* x_643; uint8_t x_644; 
x_643 = l_Lean_numLitKind;
x_644 = lean_name_eq(x_10, x_643);
if (x_644 == 0)
{
lean_object* x_645; uint8_t x_646; 
x_645 = l_Lean_charLitKind;
x_646 = lean_name_eq(x_10, x_645);
if (x_646 == 0)
{
lean_object* x_647; uint8_t x_648; 
x_647 = l___regBuiltin_Lean_Elab_Term_elabQuotedName___closed__2;
x_648 = lean_name_eq(x_10, x_647);
if (x_648 == 0)
{
lean_object* x_649; uint8_t x_650; 
lean_dec(x_1);
x_649 = l_Lean_choiceKind;
x_650 = lean_name_eq(x_10, x_649);
lean_dec(x_10);
if (x_650 == 0)
{
lean_object* x_651; 
x_651 = l___private_Lean_Elab_Match_16__throwInvalidPattern___rarg(x_2, x_626, x_4, x_5, x_6, x_7, x_8, x_615);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_626);
lean_dec(x_2);
return x_651;
}
else
{
lean_object* x_652; lean_object* x_653; 
x_652 = l___private_Lean_Elab_Match_29__collect___main___closed__5;
x_653 = l_Lean_throwError___at___private_Lean_Elab_Match_13__throwCtorExpected___spec__1___rarg(x_652, x_2, x_626, x_4, x_5, x_6, x_7, x_8, x_615);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_626);
lean_dec(x_2);
return x_653;
}
}
else
{
lean_object* x_654; 
lean_dec(x_10);
lean_dec(x_2);
x_654 = l___private_Lean_Elab_Match_28__quotedNameToPattern(x_1, x_626, x_4, x_5, x_6, x_7, x_8, x_615);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_654;
}
}
else
{
lean_object* x_655; 
lean_dec(x_626);
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_655 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_655, 0, x_1);
lean_ctor_set(x_655, 1, x_615);
return x_655;
}
}
else
{
lean_object* x_656; 
lean_dec(x_626);
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_656 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_656, 0, x_1);
lean_ctor_set(x_656, 1, x_615);
return x_656;
}
}
else
{
lean_object* x_657; 
lean_dec(x_626);
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_657 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_657, 0, x_1);
lean_ctor_set(x_657, 1, x_615);
return x_657;
}
}
else
{
lean_object* x_658; 
lean_dec(x_626);
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_658 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_658, 0, x_1);
lean_ctor_set(x_658, 1, x_615);
return x_658;
}
}
else
{
lean_object* x_659; lean_object* x_660; lean_object* x_661; 
lean_dec(x_10);
x_659 = lean_unsigned_to_nat(0u);
x_660 = l_Lean_Syntax_getArg(x_1, x_659);
lean_inc(x_7);
lean_inc(x_660);
x_661 = l___private_Lean_Elab_Match_25__processVar(x_660, x_2, x_626, x_4, x_5, x_6, x_7, x_8, x_615);
if (lean_obj_tag(x_661) == 0)
{
lean_object* x_662; lean_object* x_663; lean_object* x_664; lean_object* x_665; lean_object* x_666; 
x_662 = lean_ctor_get(x_661, 1);
lean_inc(x_662);
lean_dec(x_661);
x_663 = lean_unsigned_to_nat(2u);
x_664 = l_Lean_Syntax_getArg(x_1, x_663);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_665 = x_1;
} else {
 lean_dec_ref(x_1);
 x_665 = lean_box(0);
}
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_626);
x_666 = l___private_Lean_Elab_Match_29__collect___main(x_664, x_2, x_626, x_4, x_5, x_6, x_7, x_8, x_662);
if (lean_obj_tag(x_666) == 0)
{
lean_object* x_667; lean_object* x_668; lean_object* x_669; lean_object* x_670; lean_object* x_671; lean_object* x_672; lean_object* x_673; lean_object* x_674; lean_object* x_675; lean_object* x_676; lean_object* x_677; lean_object* x_678; lean_object* x_679; lean_object* x_680; lean_object* x_681; lean_object* x_682; lean_object* x_683; lean_object* x_684; lean_object* x_685; lean_object* x_686; lean_object* x_687; lean_object* x_688; lean_object* x_689; lean_object* x_690; 
x_667 = lean_ctor_get(x_666, 0);
lean_inc(x_667);
x_668 = lean_ctor_get(x_666, 1);
lean_inc(x_668);
lean_dec(x_666);
x_669 = l_Lean_Elab_Term_getCurrMacroScope(x_626, x_4, x_5, x_6, x_7, x_8, x_668);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_626);
x_670 = lean_ctor_get(x_669, 0);
lean_inc(x_670);
x_671 = lean_ctor_get(x_669, 1);
lean_inc(x_671);
lean_dec(x_669);
x_672 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_671);
lean_dec(x_8);
x_673 = lean_ctor_get(x_672, 0);
lean_inc(x_673);
x_674 = lean_ctor_get(x_672, 1);
lean_inc(x_674);
if (lean_is_exclusive(x_672)) {
 lean_ctor_release(x_672, 0);
 lean_ctor_release(x_672, 1);
 x_675 = x_672;
} else {
 lean_dec_ref(x_672);
 x_675 = lean_box(0);
}
x_676 = l___private_Lean_Elab_Match_29__collect___main___closed__8;
x_677 = l_Lean_addMacroScope(x_673, x_676, x_670);
x_678 = l_Lean_SourceInfo_inhabited___closed__1;
x_679 = l___private_Lean_Elab_Match_29__collect___main___closed__7;
x_680 = l___private_Lean_Elab_Match_29__collect___main___closed__10;
x_681 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_681, 0, x_678);
lean_ctor_set(x_681, 1, x_679);
lean_ctor_set(x_681, 2, x_677);
lean_ctor_set(x_681, 3, x_680);
x_682 = l_Array_empty___closed__1;
x_683 = lean_array_push(x_682, x_681);
x_684 = lean_array_push(x_682, x_660);
x_685 = lean_array_push(x_684, x_667);
x_686 = l_Lean_nullKind___closed__2;
if (lean_is_scalar(x_665)) {
 x_687 = lean_alloc_ctor(1, 2, 0);
} else {
 x_687 = x_665;
}
lean_ctor_set(x_687, 0, x_686);
lean_ctor_set(x_687, 1, x_685);
x_688 = lean_array_push(x_683, x_687);
x_689 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_689, 0, x_12);
lean_ctor_set(x_689, 1, x_688);
if (lean_is_scalar(x_675)) {
 x_690 = lean_alloc_ctor(0, 2, 0);
} else {
 x_690 = x_675;
}
lean_ctor_set(x_690, 0, x_689);
lean_ctor_set(x_690, 1, x_674);
return x_690;
}
else
{
lean_object* x_691; lean_object* x_692; lean_object* x_693; lean_object* x_694; 
lean_dec(x_665);
lean_dec(x_660);
lean_dec(x_626);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_691 = lean_ctor_get(x_666, 0);
lean_inc(x_691);
x_692 = lean_ctor_get(x_666, 1);
lean_inc(x_692);
if (lean_is_exclusive(x_666)) {
 lean_ctor_release(x_666, 0);
 lean_ctor_release(x_666, 1);
 x_693 = x_666;
} else {
 lean_dec_ref(x_666);
 x_693 = lean_box(0);
}
if (lean_is_scalar(x_693)) {
 x_694 = lean_alloc_ctor(1, 2, 0);
} else {
 x_694 = x_693;
}
lean_ctor_set(x_694, 0, x_691);
lean_ctor_set(x_694, 1, x_692);
return x_694;
}
}
else
{
lean_object* x_695; lean_object* x_696; lean_object* x_697; lean_object* x_698; 
lean_dec(x_660);
lean_dec(x_626);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_695 = lean_ctor_get(x_661, 0);
lean_inc(x_695);
x_696 = lean_ctor_get(x_661, 1);
lean_inc(x_696);
if (lean_is_exclusive(x_661)) {
 lean_ctor_release(x_661, 0);
 lean_ctor_release(x_661, 1);
 x_697 = x_661;
} else {
 lean_dec_ref(x_661);
 x_697 = lean_box(0);
}
if (lean_is_scalar(x_697)) {
 x_698 = lean_alloc_ctor(1, 2, 0);
} else {
 x_698 = x_697;
}
lean_ctor_set(x_698, 0, x_695);
lean_ctor_set(x_698, 1, x_696);
return x_698;
}
}
}
else
{
lean_object* x_699; lean_object* x_700; lean_object* x_701; lean_object* x_702; 
lean_dec(x_10);
x_699 = lean_unsigned_to_nat(0u);
x_700 = l_Lean_Syntax_getArg(x_1, x_699);
lean_dec(x_1);
x_701 = l___private_Lean_Elab_Match_29__collect___main___closed__11;
x_702 = l_Lean_Elab_Term_CollectPatternVars_processCtor(x_701, x_700, x_2, x_626, x_4, x_5, x_6, x_7, x_8, x_615);
return x_702;
}
}
else
{
lean_object* x_703; lean_object* x_704; uint8_t x_705; 
x_703 = l_Lean_Syntax_inhabited;
x_704 = lean_array_get(x_703, x_11, x_25);
x_705 = l_Lean_Syntax_isNone(x_704);
if (x_705 == 0)
{
lean_object* x_706; lean_object* x_707; lean_object* x_708; lean_object* x_709; uint8_t x_710; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_706 = x_1;
} else {
 lean_dec_ref(x_1);
 x_706 = lean_box(0);
}
x_707 = lean_unsigned_to_nat(0u);
x_708 = l_Lean_Syntax_getArg(x_704, x_707);
x_709 = l_Lean_Syntax_getArg(x_704, x_25);
x_710 = l_Lean_Syntax_isNone(x_709);
if (x_710 == 0)
{
lean_object* x_711; lean_object* x_712; uint8_t x_713; 
x_711 = l_Lean_Syntax_getArg(x_709, x_707);
x_712 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__24;
lean_inc(x_711);
x_713 = l_Lean_Syntax_isOfKind(x_711, x_712);
if (x_713 == 0)
{
lean_object* x_714; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_626);
lean_inc(x_2);
x_714 = l___private_Lean_Elab_Match_29__collect___main(x_708, x_2, x_626, x_4, x_5, x_6, x_7, x_8, x_615);
if (lean_obj_tag(x_714) == 0)
{
lean_object* x_715; lean_object* x_716; lean_object* x_717; lean_object* x_718; lean_object* x_719; lean_object* x_720; lean_object* x_721; 
x_715 = lean_ctor_get(x_714, 0);
lean_inc(x_715);
x_716 = lean_ctor_get(x_714, 1);
lean_inc(x_716);
lean_dec(x_714);
x_717 = l_Lean_Syntax_setArg(x_704, x_707, x_715);
x_718 = l_Lean_Syntax_getArg(x_711, x_25);
x_719 = l_Lean_Syntax_getArgs(x_718);
lean_dec(x_718);
x_720 = l___private_Lean_Elab_Match_29__collect___main___closed__11;
x_721 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_29__collect___main___spec__1(x_719, x_720, x_2, x_626, x_4, x_5, x_6, x_7, x_8, x_716);
lean_dec(x_719);
if (lean_obj_tag(x_721) == 0)
{
lean_object* x_722; lean_object* x_723; lean_object* x_724; lean_object* x_725; lean_object* x_726; lean_object* x_727; lean_object* x_728; lean_object* x_729; lean_object* x_730; lean_object* x_731; lean_object* x_732; 
x_722 = lean_ctor_get(x_721, 0);
lean_inc(x_722);
x_723 = lean_ctor_get(x_721, 1);
lean_inc(x_723);
if (lean_is_exclusive(x_721)) {
 lean_ctor_release(x_721, 0);
 lean_ctor_release(x_721, 1);
 x_724 = x_721;
} else {
 lean_dec_ref(x_721);
 x_724 = lean_box(0);
}
x_725 = l_Lean_nullKind;
if (lean_is_scalar(x_706)) {
 x_726 = lean_alloc_ctor(1, 2, 0);
} else {
 x_726 = x_706;
}
lean_ctor_set(x_726, 0, x_725);
lean_ctor_set(x_726, 1, x_722);
x_727 = l_Lean_Syntax_setArg(x_711, x_25, x_726);
x_728 = l_Lean_Syntax_setArg(x_709, x_707, x_727);
x_729 = l_Lean_Syntax_setArg(x_717, x_25, x_728);
x_730 = lean_array_set(x_11, x_25, x_729);
x_731 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_731, 0, x_10);
lean_ctor_set(x_731, 1, x_730);
if (lean_is_scalar(x_724)) {
 x_732 = lean_alloc_ctor(0, 2, 0);
} else {
 x_732 = x_724;
}
lean_ctor_set(x_732, 0, x_731);
lean_ctor_set(x_732, 1, x_723);
return x_732;
}
else
{
lean_object* x_733; lean_object* x_734; lean_object* x_735; lean_object* x_736; 
lean_dec(x_717);
lean_dec(x_711);
lean_dec(x_709);
lean_dec(x_706);
lean_dec(x_11);
lean_dec(x_10);
x_733 = lean_ctor_get(x_721, 0);
lean_inc(x_733);
x_734 = lean_ctor_get(x_721, 1);
lean_inc(x_734);
if (lean_is_exclusive(x_721)) {
 lean_ctor_release(x_721, 0);
 lean_ctor_release(x_721, 1);
 x_735 = x_721;
} else {
 lean_dec_ref(x_721);
 x_735 = lean_box(0);
}
if (lean_is_scalar(x_735)) {
 x_736 = lean_alloc_ctor(1, 2, 0);
} else {
 x_736 = x_735;
}
lean_ctor_set(x_736, 0, x_733);
lean_ctor_set(x_736, 1, x_734);
return x_736;
}
}
else
{
lean_object* x_737; lean_object* x_738; lean_object* x_739; lean_object* x_740; 
lean_dec(x_711);
lean_dec(x_709);
lean_dec(x_706);
lean_dec(x_704);
lean_dec(x_626);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_737 = lean_ctor_get(x_714, 0);
lean_inc(x_737);
x_738 = lean_ctor_get(x_714, 1);
lean_inc(x_738);
if (lean_is_exclusive(x_714)) {
 lean_ctor_release(x_714, 0);
 lean_ctor_release(x_714, 1);
 x_739 = x_714;
} else {
 lean_dec_ref(x_714);
 x_739 = lean_box(0);
}
if (lean_is_scalar(x_739)) {
 x_740 = lean_alloc_ctor(1, 2, 0);
} else {
 x_740 = x_739;
}
lean_ctor_set(x_740, 0, x_737);
lean_ctor_set(x_740, 1, x_738);
return x_740;
}
}
else
{
lean_object* x_741; 
lean_dec(x_711);
lean_dec(x_709);
x_741 = l___private_Lean_Elab_Match_29__collect___main(x_708, x_2, x_626, x_4, x_5, x_6, x_7, x_8, x_615);
if (lean_obj_tag(x_741) == 0)
{
lean_object* x_742; lean_object* x_743; lean_object* x_744; lean_object* x_745; lean_object* x_746; lean_object* x_747; lean_object* x_748; 
x_742 = lean_ctor_get(x_741, 0);
lean_inc(x_742);
x_743 = lean_ctor_get(x_741, 1);
lean_inc(x_743);
if (lean_is_exclusive(x_741)) {
 lean_ctor_release(x_741, 0);
 lean_ctor_release(x_741, 1);
 x_744 = x_741;
} else {
 lean_dec_ref(x_741);
 x_744 = lean_box(0);
}
x_745 = l_Lean_Syntax_setArg(x_704, x_707, x_742);
x_746 = lean_array_set(x_11, x_25, x_745);
if (lean_is_scalar(x_706)) {
 x_747 = lean_alloc_ctor(1, 2, 0);
} else {
 x_747 = x_706;
}
lean_ctor_set(x_747, 0, x_10);
lean_ctor_set(x_747, 1, x_746);
if (lean_is_scalar(x_744)) {
 x_748 = lean_alloc_ctor(0, 2, 0);
} else {
 x_748 = x_744;
}
lean_ctor_set(x_748, 0, x_747);
lean_ctor_set(x_748, 1, x_743);
return x_748;
}
else
{
lean_object* x_749; lean_object* x_750; lean_object* x_751; lean_object* x_752; 
lean_dec(x_706);
lean_dec(x_704);
lean_dec(x_11);
lean_dec(x_10);
x_749 = lean_ctor_get(x_741, 0);
lean_inc(x_749);
x_750 = lean_ctor_get(x_741, 1);
lean_inc(x_750);
if (lean_is_exclusive(x_741)) {
 lean_ctor_release(x_741, 0);
 lean_ctor_release(x_741, 1);
 x_751 = x_741;
} else {
 lean_dec_ref(x_741);
 x_751 = lean_box(0);
}
if (lean_is_scalar(x_751)) {
 x_752 = lean_alloc_ctor(1, 2, 0);
} else {
 x_752 = x_751;
}
lean_ctor_set(x_752, 0, x_749);
lean_ctor_set(x_752, 1, x_750);
return x_752;
}
}
}
else
{
lean_object* x_753; 
lean_dec(x_709);
x_753 = l___private_Lean_Elab_Match_29__collect___main(x_708, x_2, x_626, x_4, x_5, x_6, x_7, x_8, x_615);
if (lean_obj_tag(x_753) == 0)
{
lean_object* x_754; lean_object* x_755; lean_object* x_756; lean_object* x_757; lean_object* x_758; lean_object* x_759; lean_object* x_760; 
x_754 = lean_ctor_get(x_753, 0);
lean_inc(x_754);
x_755 = lean_ctor_get(x_753, 1);
lean_inc(x_755);
if (lean_is_exclusive(x_753)) {
 lean_ctor_release(x_753, 0);
 lean_ctor_release(x_753, 1);
 x_756 = x_753;
} else {
 lean_dec_ref(x_753);
 x_756 = lean_box(0);
}
x_757 = l_Lean_Syntax_setArg(x_704, x_707, x_754);
x_758 = lean_array_set(x_11, x_25, x_757);
if (lean_is_scalar(x_706)) {
 x_759 = lean_alloc_ctor(1, 2, 0);
} else {
 x_759 = x_706;
}
lean_ctor_set(x_759, 0, x_10);
lean_ctor_set(x_759, 1, x_758);
if (lean_is_scalar(x_756)) {
 x_760 = lean_alloc_ctor(0, 2, 0);
} else {
 x_760 = x_756;
}
lean_ctor_set(x_760, 0, x_759);
lean_ctor_set(x_760, 1, x_755);
return x_760;
}
else
{
lean_object* x_761; lean_object* x_762; lean_object* x_763; lean_object* x_764; 
lean_dec(x_706);
lean_dec(x_704);
lean_dec(x_11);
lean_dec(x_10);
x_761 = lean_ctor_get(x_753, 0);
lean_inc(x_761);
x_762 = lean_ctor_get(x_753, 1);
lean_inc(x_762);
if (lean_is_exclusive(x_753)) {
 lean_ctor_release(x_753, 0);
 lean_ctor_release(x_753, 1);
 x_763 = x_753;
} else {
 lean_dec_ref(x_753);
 x_763 = lean_box(0);
}
if (lean_is_scalar(x_763)) {
 x_764 = lean_alloc_ctor(1, 2, 0);
} else {
 x_764 = x_763;
}
lean_ctor_set(x_764, 0, x_761);
lean_ctor_set(x_764, 1, x_762);
return x_764;
}
}
}
else
{
lean_object* x_765; 
lean_dec(x_704);
lean_dec(x_626);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_765 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_765, 0, x_1);
lean_ctor_set(x_765, 1, x_615);
return x_765;
}
}
}
else
{
lean_object* x_766; lean_object* x_767; lean_object* x_768; lean_object* x_769; lean_object* x_770; lean_object* x_771; lean_object* x_772; lean_object* x_773; lean_object* x_774; lean_object* x_775; lean_object* x_776; lean_object* x_777; lean_object* x_778; lean_object* x_779; lean_object* x_780; lean_object* x_781; lean_object* x_782; 
lean_dec(x_626);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_766 = l___private_Lean_Elab_Match_11__mkMVarSyntax___rarg(x_8, x_615);
lean_dec(x_8);
x_767 = lean_ctor_get(x_766, 0);
lean_inc(x_767);
x_768 = lean_ctor_get(x_766, 1);
lean_inc(x_768);
lean_dec(x_766);
x_769 = lean_st_ref_take(x_2, x_768);
x_770 = lean_ctor_get(x_769, 0);
lean_inc(x_770);
x_771 = lean_ctor_get(x_769, 1);
lean_inc(x_771);
lean_dec(x_769);
x_772 = lean_ctor_get(x_770, 0);
lean_inc(x_772);
x_773 = lean_ctor_get(x_770, 1);
lean_inc(x_773);
if (lean_is_exclusive(x_770)) {
 lean_ctor_release(x_770, 0);
 lean_ctor_release(x_770, 1);
 x_774 = x_770;
} else {
 lean_dec_ref(x_770);
 x_774 = lean_box(0);
}
x_775 = l___private_Lean_Elab_Match_12__getMVarSyntaxMVarId(x_767);
x_776 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_776, 0, x_775);
x_777 = lean_array_push(x_773, x_776);
if (lean_is_scalar(x_774)) {
 x_778 = lean_alloc_ctor(0, 2, 0);
} else {
 x_778 = x_774;
}
lean_ctor_set(x_778, 0, x_772);
lean_ctor_set(x_778, 1, x_777);
x_779 = lean_st_ref_set(x_2, x_778, x_771);
lean_dec(x_2);
x_780 = lean_ctor_get(x_779, 1);
lean_inc(x_780);
if (lean_is_exclusive(x_779)) {
 lean_ctor_release(x_779, 0);
 lean_ctor_release(x_779, 1);
 x_781 = x_779;
} else {
 lean_dec_ref(x_779);
 x_781 = lean_box(0);
}
if (lean_is_scalar(x_781)) {
 x_782 = lean_alloc_ctor(0, 2, 0);
} else {
 x_782 = x_781;
}
lean_ctor_set(x_782, 0, x_767);
lean_ctor_set(x_782, 1, x_780);
return x_782;
}
}
else
{
lean_object* x_783; lean_object* x_784; lean_object* x_785; uint8_t x_786; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_783 = x_1;
} else {
 lean_dec_ref(x_1);
 x_783 = lean_box(0);
}
x_784 = l_Lean_Syntax_inhabited;
x_785 = lean_array_get(x_784, x_11, x_25);
x_786 = l_Lean_Syntax_isNone(x_785);
if (x_786 == 0)
{
lean_object* x_787; lean_object* x_788; lean_object* x_789; lean_object* x_790; lean_object* x_791; lean_object* x_792; 
lean_dec(x_783);
lean_dec(x_11);
lean_dec(x_10);
x_787 = l___private_Lean_Elab_Match_29__collect___main___closed__14;
x_788 = l_Lean_throwErrorAt___at___private_Lean_Elab_Match_25__processVar___spec__1___rarg(x_785, x_787, x_2, x_626, x_4, x_5, x_6, x_7, x_8, x_615);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_626);
lean_dec(x_2);
lean_dec(x_785);
x_789 = lean_ctor_get(x_788, 0);
lean_inc(x_789);
x_790 = lean_ctor_get(x_788, 1);
lean_inc(x_790);
if (lean_is_exclusive(x_788)) {
 lean_ctor_release(x_788, 0);
 lean_ctor_release(x_788, 1);
 x_791 = x_788;
} else {
 lean_dec_ref(x_788);
 x_791 = lean_box(0);
}
if (lean_is_scalar(x_791)) {
 x_792 = lean_alloc_ctor(1, 2, 0);
} else {
 x_792 = x_791;
}
lean_ctor_set(x_792, 0, x_789);
lean_ctor_set(x_792, 1, x_790);
return x_792;
}
else
{
lean_object* x_793; lean_object* x_794; lean_object* x_795; lean_object* x_796; lean_object* x_797; 
lean_dec(x_785);
x_793 = lean_unsigned_to_nat(2u);
x_794 = lean_array_get(x_784, x_11, x_793);
x_795 = l_Lean_Syntax_getArgs(x_794);
lean_dec(x_794);
x_796 = l___private_Lean_Elab_Match_29__collect___main___closed__15;
x_797 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_29__collect___main___spec__1(x_795, x_796, x_2, x_626, x_4, x_5, x_6, x_7, x_8, x_615);
lean_dec(x_795);
if (lean_obj_tag(x_797) == 0)
{
lean_object* x_798; lean_object* x_799; lean_object* x_800; lean_object* x_801; lean_object* x_802; lean_object* x_803; lean_object* x_804; lean_object* x_805; 
x_798 = lean_ctor_get(x_797, 0);
lean_inc(x_798);
x_799 = lean_ctor_get(x_797, 1);
lean_inc(x_799);
if (lean_is_exclusive(x_797)) {
 lean_ctor_release(x_797, 0);
 lean_ctor_release(x_797, 1);
 x_800 = x_797;
} else {
 lean_dec_ref(x_797);
 x_800 = lean_box(0);
}
x_801 = l_Lean_nullKind;
if (lean_is_scalar(x_783)) {
 x_802 = lean_alloc_ctor(1, 2, 0);
} else {
 x_802 = x_783;
}
lean_ctor_set(x_802, 0, x_801);
lean_ctor_set(x_802, 1, x_798);
x_803 = lean_array_set(x_11, x_793, x_802);
x_804 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_804, 0, x_10);
lean_ctor_set(x_804, 1, x_803);
if (lean_is_scalar(x_800)) {
 x_805 = lean_alloc_ctor(0, 2, 0);
} else {
 x_805 = x_800;
}
lean_ctor_set(x_805, 0, x_804);
lean_ctor_set(x_805, 1, x_799);
return x_805;
}
else
{
lean_object* x_806; lean_object* x_807; lean_object* x_808; lean_object* x_809; 
lean_dec(x_783);
lean_dec(x_11);
lean_dec(x_10);
x_806 = lean_ctor_get(x_797, 0);
lean_inc(x_806);
x_807 = lean_ctor_get(x_797, 1);
lean_inc(x_807);
if (lean_is_exclusive(x_797)) {
 lean_ctor_release(x_797, 0);
 lean_ctor_release(x_797, 1);
 x_808 = x_797;
} else {
 lean_dec_ref(x_797);
 x_808 = lean_box(0);
}
if (lean_is_scalar(x_808)) {
 x_809 = lean_alloc_ctor(1, 2, 0);
} else {
 x_809 = x_808;
}
lean_ctor_set(x_809, 0, x_806);
lean_ctor_set(x_809, 1, x_807);
return x_809;
}
}
}
}
else
{
lean_object* x_810; lean_object* x_811; lean_object* x_812; lean_object* x_813; lean_object* x_814; lean_object* x_815; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_810 = x_1;
} else {
 lean_dec_ref(x_1);
 x_810 = lean_box(0);
}
x_811 = l_Lean_Syntax_inhabited;
x_812 = lean_array_get(x_811, x_11, x_25);
x_813 = l_Lean_Syntax_getArgs(x_812);
lean_dec(x_812);
x_814 = l___private_Lean_Elab_Match_29__collect___main___closed__11;
x_815 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_29__collect___main___spec__1(x_813, x_814, x_2, x_626, x_4, x_5, x_6, x_7, x_8, x_615);
lean_dec(x_813);
if (lean_obj_tag(x_815) == 0)
{
lean_object* x_816; lean_object* x_817; lean_object* x_818; lean_object* x_819; lean_object* x_820; lean_object* x_821; lean_object* x_822; lean_object* x_823; 
x_816 = lean_ctor_get(x_815, 0);
lean_inc(x_816);
x_817 = lean_ctor_get(x_815, 1);
lean_inc(x_817);
if (lean_is_exclusive(x_815)) {
 lean_ctor_release(x_815, 0);
 lean_ctor_release(x_815, 1);
 x_818 = x_815;
} else {
 lean_dec_ref(x_815);
 x_818 = lean_box(0);
}
x_819 = l_Lean_nullKind;
if (lean_is_scalar(x_810)) {
 x_820 = lean_alloc_ctor(1, 2, 0);
} else {
 x_820 = x_810;
}
lean_ctor_set(x_820, 0, x_819);
lean_ctor_set(x_820, 1, x_816);
x_821 = lean_array_set(x_11, x_25, x_820);
x_822 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_822, 0, x_10);
lean_ctor_set(x_822, 1, x_821);
if (lean_is_scalar(x_818)) {
 x_823 = lean_alloc_ctor(0, 2, 0);
} else {
 x_823 = x_818;
}
lean_ctor_set(x_823, 0, x_822);
lean_ctor_set(x_823, 1, x_817);
return x_823;
}
else
{
lean_object* x_824; lean_object* x_825; lean_object* x_826; lean_object* x_827; 
lean_dec(x_810);
lean_dec(x_11);
lean_dec(x_10);
x_824 = lean_ctor_get(x_815, 0);
lean_inc(x_824);
x_825 = lean_ctor_get(x_815, 1);
lean_inc(x_825);
if (lean_is_exclusive(x_815)) {
 lean_ctor_release(x_815, 0);
 lean_ctor_release(x_815, 1);
 x_826 = x_815;
} else {
 lean_dec_ref(x_815);
 x_826 = lean_box(0);
}
if (lean_is_scalar(x_826)) {
 x_827 = lean_alloc_ctor(1, 2, 0);
} else {
 x_827 = x_826;
}
lean_ctor_set(x_827, 0, x_824);
lean_ctor_set(x_827, 1, x_825);
return x_827;
}
}
}
else
{
lean_object* x_828; lean_object* x_829; 
lean_dec(x_11);
lean_dec(x_10);
x_828 = l___private_Lean_Elab_Match_29__collect___main___closed__11;
x_829 = l_Lean_Elab_Term_CollectPatternVars_processCtorApp(x_828, x_1, x_2, x_626, x_4, x_5, x_6, x_7, x_8, x_615);
lean_dec(x_1);
return x_829;
}
}
}
else
{
lean_object* x_830; lean_object* x_831; lean_object* x_832; lean_object* x_833; lean_object* x_834; lean_object* x_835; lean_object* x_836; lean_object* x_837; lean_object* x_838; lean_object* x_839; lean_object* x_840; lean_object* x_841; lean_object* x_842; lean_object* x_843; lean_object* x_844; lean_object* x_845; lean_object* x_846; uint8_t x_847; uint8_t x_848; lean_object* x_849; lean_object* x_850; 
x_830 = lean_ctor_get(x_21, 0);
x_831 = lean_ctor_get(x_21, 1);
x_832 = lean_ctor_get(x_21, 2);
x_833 = lean_ctor_get(x_21, 3);
lean_inc(x_833);
lean_inc(x_832);
lean_inc(x_831);
lean_inc(x_830);
lean_dec(x_21);
x_834 = lean_unsigned_to_nat(1u);
x_835 = lean_nat_add(x_831, x_834);
x_836 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_836, 0, x_830);
lean_ctor_set(x_836, 1, x_835);
lean_ctor_set(x_836, 2, x_832);
lean_ctor_set(x_836, 3, x_833);
x_837 = lean_st_ref_set(x_8, x_836, x_22);
x_838 = lean_ctor_get(x_837, 1);
lean_inc(x_838);
if (lean_is_exclusive(x_837)) {
 lean_ctor_release(x_837, 0);
 lean_ctor_release(x_837, 1);
 x_839 = x_837;
} else {
 lean_dec_ref(x_837);
 x_839 = lean_box(0);
}
x_840 = lean_ctor_get(x_3, 0);
lean_inc(x_840);
x_841 = lean_ctor_get(x_3, 1);
lean_inc(x_841);
x_842 = lean_ctor_get(x_3, 2);
lean_inc(x_842);
x_843 = lean_ctor_get(x_3, 3);
lean_inc(x_843);
x_844 = lean_ctor_get(x_3, 4);
lean_inc(x_844);
x_845 = lean_ctor_get(x_3, 5);
lean_inc(x_845);
x_846 = lean_ctor_get(x_3, 6);
lean_inc(x_846);
x_847 = lean_ctor_get_uint8(x_3, sizeof(void*)*8);
x_848 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 1);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 lean_ctor_release(x_3, 4);
 lean_ctor_release(x_3, 5);
 lean_ctor_release(x_3, 6);
 lean_ctor_release(x_3, 7);
 x_849 = x_3;
} else {
 lean_dec_ref(x_3);
 x_849 = lean_box(0);
}
if (lean_is_scalar(x_849)) {
 x_850 = lean_alloc_ctor(0, 8, 2);
} else {
 x_850 = x_849;
}
lean_ctor_set(x_850, 0, x_840);
lean_ctor_set(x_850, 1, x_841);
lean_ctor_set(x_850, 2, x_842);
lean_ctor_set(x_850, 3, x_843);
lean_ctor_set(x_850, 4, x_844);
lean_ctor_set(x_850, 5, x_845);
lean_ctor_set(x_850, 6, x_846);
lean_ctor_set(x_850, 7, x_831);
lean_ctor_set_uint8(x_850, sizeof(void*)*8, x_847);
lean_ctor_set_uint8(x_850, sizeof(void*)*8 + 1, x_848);
if (x_20 == 0)
{
lean_object* x_851; uint8_t x_852; 
x_851 = l___private_Lean_Elab_Match_29__collect___main___closed__2;
x_852 = lean_name_eq(x_10, x_851);
if (x_852 == 0)
{
lean_object* x_853; uint8_t x_854; 
x_853 = l_Lean_Elab_Term_quoteAutoTactic___main___closed__2;
x_854 = lean_name_eq(x_10, x_853);
if (x_854 == 0)
{
lean_object* x_855; uint8_t x_856; 
x_855 = l_Lean_mkHole___closed__2;
x_856 = lean_name_eq(x_10, x_855);
if (x_856 == 0)
{
lean_object* x_857; uint8_t x_858; 
x_857 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__20;
x_858 = lean_name_eq(x_10, x_857);
if (x_858 == 0)
{
lean_object* x_859; uint8_t x_860; 
lean_dec(x_11);
x_859 = l___private_Lean_Elab_App_23__elabAppFn___main___closed__5;
x_860 = lean_name_eq(x_10, x_859);
if (x_860 == 0)
{
lean_object* x_861; uint8_t x_862; 
x_861 = l___private_Lean_Elab_App_23__elabAppFn___main___closed__12;
x_862 = lean_name_eq(x_10, x_861);
if (x_862 == 0)
{
lean_object* x_863; uint8_t x_864; 
x_863 = l___regBuiltin_Lean_Elab_Term_elabInaccessible___closed__2;
x_864 = lean_name_eq(x_10, x_863);
if (x_864 == 0)
{
lean_object* x_865; uint8_t x_866; 
x_865 = l_Lean_strLitKind;
x_866 = lean_name_eq(x_10, x_865);
if (x_866 == 0)
{
lean_object* x_867; uint8_t x_868; 
x_867 = l_Lean_numLitKind;
x_868 = lean_name_eq(x_10, x_867);
if (x_868 == 0)
{
lean_object* x_869; uint8_t x_870; 
x_869 = l_Lean_charLitKind;
x_870 = lean_name_eq(x_10, x_869);
if (x_870 == 0)
{
lean_object* x_871; uint8_t x_872; 
lean_dec(x_839);
x_871 = l___regBuiltin_Lean_Elab_Term_elabQuotedName___closed__2;
x_872 = lean_name_eq(x_10, x_871);
if (x_872 == 0)
{
lean_object* x_873; uint8_t x_874; 
lean_dec(x_1);
x_873 = l_Lean_choiceKind;
x_874 = lean_name_eq(x_10, x_873);
lean_dec(x_10);
if (x_874 == 0)
{
lean_object* x_875; 
x_875 = l___private_Lean_Elab_Match_16__throwInvalidPattern___rarg(x_2, x_850, x_4, x_5, x_6, x_7, x_8, x_838);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_850);
lean_dec(x_2);
return x_875;
}
else
{
lean_object* x_876; lean_object* x_877; 
x_876 = l___private_Lean_Elab_Match_29__collect___main___closed__5;
x_877 = l_Lean_throwError___at___private_Lean_Elab_Match_13__throwCtorExpected___spec__1___rarg(x_876, x_2, x_850, x_4, x_5, x_6, x_7, x_8, x_838);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_850);
lean_dec(x_2);
return x_877;
}
}
else
{
lean_object* x_878; 
lean_dec(x_10);
lean_dec(x_2);
x_878 = l___private_Lean_Elab_Match_28__quotedNameToPattern(x_1, x_850, x_4, x_5, x_6, x_7, x_8, x_838);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_878;
}
}
else
{
lean_object* x_879; 
lean_dec(x_850);
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
if (lean_is_scalar(x_839)) {
 x_879 = lean_alloc_ctor(0, 2, 0);
} else {
 x_879 = x_839;
}
lean_ctor_set(x_879, 0, x_1);
lean_ctor_set(x_879, 1, x_838);
return x_879;
}
}
else
{
lean_object* x_880; 
lean_dec(x_850);
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
if (lean_is_scalar(x_839)) {
 x_880 = lean_alloc_ctor(0, 2, 0);
} else {
 x_880 = x_839;
}
lean_ctor_set(x_880, 0, x_1);
lean_ctor_set(x_880, 1, x_838);
return x_880;
}
}
else
{
lean_object* x_881; 
lean_dec(x_850);
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
if (lean_is_scalar(x_839)) {
 x_881 = lean_alloc_ctor(0, 2, 0);
} else {
 x_881 = x_839;
}
lean_ctor_set(x_881, 0, x_1);
lean_ctor_set(x_881, 1, x_838);
return x_881;
}
}
else
{
lean_object* x_882; 
lean_dec(x_850);
lean_dec(x_7);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
if (lean_is_scalar(x_839)) {
 x_882 = lean_alloc_ctor(0, 2, 0);
} else {
 x_882 = x_839;
}
lean_ctor_set(x_882, 0, x_1);
lean_ctor_set(x_882, 1, x_838);
return x_882;
}
}
else
{
lean_object* x_883; lean_object* x_884; lean_object* x_885; 
lean_dec(x_839);
lean_dec(x_10);
x_883 = lean_unsigned_to_nat(0u);
x_884 = l_Lean_Syntax_getArg(x_1, x_883);
lean_inc(x_7);
lean_inc(x_884);
x_885 = l___private_Lean_Elab_Match_25__processVar(x_884, x_2, x_850, x_4, x_5, x_6, x_7, x_8, x_838);
if (lean_obj_tag(x_885) == 0)
{
lean_object* x_886; lean_object* x_887; lean_object* x_888; lean_object* x_889; lean_object* x_890; 
x_886 = lean_ctor_get(x_885, 1);
lean_inc(x_886);
lean_dec(x_885);
x_887 = lean_unsigned_to_nat(2u);
x_888 = l_Lean_Syntax_getArg(x_1, x_887);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_889 = x_1;
} else {
 lean_dec_ref(x_1);
 x_889 = lean_box(0);
}
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_850);
x_890 = l___private_Lean_Elab_Match_29__collect___main(x_888, x_2, x_850, x_4, x_5, x_6, x_7, x_8, x_886);
if (lean_obj_tag(x_890) == 0)
{
lean_object* x_891; lean_object* x_892; lean_object* x_893; lean_object* x_894; lean_object* x_895; lean_object* x_896; lean_object* x_897; lean_object* x_898; lean_object* x_899; lean_object* x_900; lean_object* x_901; lean_object* x_902; lean_object* x_903; lean_object* x_904; lean_object* x_905; lean_object* x_906; lean_object* x_907; lean_object* x_908; lean_object* x_909; lean_object* x_910; lean_object* x_911; lean_object* x_912; lean_object* x_913; lean_object* x_914; 
x_891 = lean_ctor_get(x_890, 0);
lean_inc(x_891);
x_892 = lean_ctor_get(x_890, 1);
lean_inc(x_892);
lean_dec(x_890);
x_893 = l_Lean_Elab_Term_getCurrMacroScope(x_850, x_4, x_5, x_6, x_7, x_8, x_892);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_850);
x_894 = lean_ctor_get(x_893, 0);
lean_inc(x_894);
x_895 = lean_ctor_get(x_893, 1);
lean_inc(x_895);
lean_dec(x_893);
x_896 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_895);
lean_dec(x_8);
x_897 = lean_ctor_get(x_896, 0);
lean_inc(x_897);
x_898 = lean_ctor_get(x_896, 1);
lean_inc(x_898);
if (lean_is_exclusive(x_896)) {
 lean_ctor_release(x_896, 0);
 lean_ctor_release(x_896, 1);
 x_899 = x_896;
} else {
 lean_dec_ref(x_896);
 x_899 = lean_box(0);
}
x_900 = l___private_Lean_Elab_Match_29__collect___main___closed__8;
x_901 = l_Lean_addMacroScope(x_897, x_900, x_894);
x_902 = l_Lean_SourceInfo_inhabited___closed__1;
x_903 = l___private_Lean_Elab_Match_29__collect___main___closed__7;
x_904 = l___private_Lean_Elab_Match_29__collect___main___closed__10;
x_905 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_905, 0, x_902);
lean_ctor_set(x_905, 1, x_903);
lean_ctor_set(x_905, 2, x_901);
lean_ctor_set(x_905, 3, x_904);
x_906 = l_Array_empty___closed__1;
x_907 = lean_array_push(x_906, x_905);
x_908 = lean_array_push(x_906, x_884);
x_909 = lean_array_push(x_908, x_891);
x_910 = l_Lean_nullKind___closed__2;
if (lean_is_scalar(x_889)) {
 x_911 = lean_alloc_ctor(1, 2, 0);
} else {
 x_911 = x_889;
}
lean_ctor_set(x_911, 0, x_910);
lean_ctor_set(x_911, 1, x_909);
x_912 = lean_array_push(x_907, x_911);
x_913 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_913, 0, x_12);
lean_ctor_set(x_913, 1, x_912);
if (lean_is_scalar(x_899)) {
 x_914 = lean_alloc_ctor(0, 2, 0);
} else {
 x_914 = x_899;
}
lean_ctor_set(x_914, 0, x_913);
lean_ctor_set(x_914, 1, x_898);
return x_914;
}
else
{
lean_object* x_915; lean_object* x_916; lean_object* x_917; lean_object* x_918; 
lean_dec(x_889);
lean_dec(x_884);
lean_dec(x_850);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_915 = lean_ctor_get(x_890, 0);
lean_inc(x_915);
x_916 = lean_ctor_get(x_890, 1);
lean_inc(x_916);
if (lean_is_exclusive(x_890)) {
 lean_ctor_release(x_890, 0);
 lean_ctor_release(x_890, 1);
 x_917 = x_890;
} else {
 lean_dec_ref(x_890);
 x_917 = lean_box(0);
}
if (lean_is_scalar(x_917)) {
 x_918 = lean_alloc_ctor(1, 2, 0);
} else {
 x_918 = x_917;
}
lean_ctor_set(x_918, 0, x_915);
lean_ctor_set(x_918, 1, x_916);
return x_918;
}
}
else
{
lean_object* x_919; lean_object* x_920; lean_object* x_921; lean_object* x_922; 
lean_dec(x_884);
lean_dec(x_850);
lean_dec(x_7);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_919 = lean_ctor_get(x_885, 0);
lean_inc(x_919);
x_920 = lean_ctor_get(x_885, 1);
lean_inc(x_920);
if (lean_is_exclusive(x_885)) {
 lean_ctor_release(x_885, 0);
 lean_ctor_release(x_885, 1);
 x_921 = x_885;
} else {
 lean_dec_ref(x_885);
 x_921 = lean_box(0);
}
if (lean_is_scalar(x_921)) {
 x_922 = lean_alloc_ctor(1, 2, 0);
} else {
 x_922 = x_921;
}
lean_ctor_set(x_922, 0, x_919);
lean_ctor_set(x_922, 1, x_920);
return x_922;
}
}
}
else
{
lean_object* x_923; lean_object* x_924; lean_object* x_925; lean_object* x_926; 
lean_dec(x_839);
lean_dec(x_10);
x_923 = lean_unsigned_to_nat(0u);
x_924 = l_Lean_Syntax_getArg(x_1, x_923);
lean_dec(x_1);
x_925 = l___private_Lean_Elab_Match_29__collect___main___closed__11;
x_926 = l_Lean_Elab_Term_CollectPatternVars_processCtor(x_925, x_924, x_2, x_850, x_4, x_5, x_6, x_7, x_8, x_838);
return x_926;
}
}
else
{
lean_object* x_927; lean_object* x_928; uint8_t x_929; 
x_927 = l_Lean_Syntax_inhabited;
x_928 = lean_array_get(x_927, x_11, x_834);
x_929 = l_Lean_Syntax_isNone(x_928);
if (x_929 == 0)
{
lean_object* x_930; lean_object* x_931; lean_object* x_932; lean_object* x_933; uint8_t x_934; 
lean_dec(x_839);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_930 = x_1;
} else {
 lean_dec_ref(x_1);
 x_930 = lean_box(0);
}
x_931 = lean_unsigned_to_nat(0u);
x_932 = l_Lean_Syntax_getArg(x_928, x_931);
x_933 = l_Lean_Syntax_getArg(x_928, x_834);
x_934 = l_Lean_Syntax_isNone(x_933);
if (x_934 == 0)
{
lean_object* x_935; lean_object* x_936; uint8_t x_937; 
x_935 = l_Lean_Syntax_getArg(x_933, x_931);
x_936 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__24;
lean_inc(x_935);
x_937 = l_Lean_Syntax_isOfKind(x_935, x_936);
if (x_937 == 0)
{
lean_object* x_938; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_850);
lean_inc(x_2);
x_938 = l___private_Lean_Elab_Match_29__collect___main(x_932, x_2, x_850, x_4, x_5, x_6, x_7, x_8, x_838);
if (lean_obj_tag(x_938) == 0)
{
lean_object* x_939; lean_object* x_940; lean_object* x_941; lean_object* x_942; lean_object* x_943; lean_object* x_944; lean_object* x_945; 
x_939 = lean_ctor_get(x_938, 0);
lean_inc(x_939);
x_940 = lean_ctor_get(x_938, 1);
lean_inc(x_940);
lean_dec(x_938);
x_941 = l_Lean_Syntax_setArg(x_928, x_931, x_939);
x_942 = l_Lean_Syntax_getArg(x_935, x_834);
x_943 = l_Lean_Syntax_getArgs(x_942);
lean_dec(x_942);
x_944 = l___private_Lean_Elab_Match_29__collect___main___closed__11;
x_945 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_29__collect___main___spec__1(x_943, x_944, x_2, x_850, x_4, x_5, x_6, x_7, x_8, x_940);
lean_dec(x_943);
if (lean_obj_tag(x_945) == 0)
{
lean_object* x_946; lean_object* x_947; lean_object* x_948; lean_object* x_949; lean_object* x_950; lean_object* x_951; lean_object* x_952; lean_object* x_953; lean_object* x_954; lean_object* x_955; lean_object* x_956; 
x_946 = lean_ctor_get(x_945, 0);
lean_inc(x_946);
x_947 = lean_ctor_get(x_945, 1);
lean_inc(x_947);
if (lean_is_exclusive(x_945)) {
 lean_ctor_release(x_945, 0);
 lean_ctor_release(x_945, 1);
 x_948 = x_945;
} else {
 lean_dec_ref(x_945);
 x_948 = lean_box(0);
}
x_949 = l_Lean_nullKind;
if (lean_is_scalar(x_930)) {
 x_950 = lean_alloc_ctor(1, 2, 0);
} else {
 x_950 = x_930;
}
lean_ctor_set(x_950, 0, x_949);
lean_ctor_set(x_950, 1, x_946);
x_951 = l_Lean_Syntax_setArg(x_935, x_834, x_950);
x_952 = l_Lean_Syntax_setArg(x_933, x_931, x_951);
x_953 = l_Lean_Syntax_setArg(x_941, x_834, x_952);
x_954 = lean_array_set(x_11, x_834, x_953);
x_955 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_955, 0, x_10);
lean_ctor_set(x_955, 1, x_954);
if (lean_is_scalar(x_948)) {
 x_956 = lean_alloc_ctor(0, 2, 0);
} else {
 x_956 = x_948;
}
lean_ctor_set(x_956, 0, x_955);
lean_ctor_set(x_956, 1, x_947);
return x_956;
}
else
{
lean_object* x_957; lean_object* x_958; lean_object* x_959; lean_object* x_960; 
lean_dec(x_941);
lean_dec(x_935);
lean_dec(x_933);
lean_dec(x_930);
lean_dec(x_11);
lean_dec(x_10);
x_957 = lean_ctor_get(x_945, 0);
lean_inc(x_957);
x_958 = lean_ctor_get(x_945, 1);
lean_inc(x_958);
if (lean_is_exclusive(x_945)) {
 lean_ctor_release(x_945, 0);
 lean_ctor_release(x_945, 1);
 x_959 = x_945;
} else {
 lean_dec_ref(x_945);
 x_959 = lean_box(0);
}
if (lean_is_scalar(x_959)) {
 x_960 = lean_alloc_ctor(1, 2, 0);
} else {
 x_960 = x_959;
}
lean_ctor_set(x_960, 0, x_957);
lean_ctor_set(x_960, 1, x_958);
return x_960;
}
}
else
{
lean_object* x_961; lean_object* x_962; lean_object* x_963; lean_object* x_964; 
lean_dec(x_935);
lean_dec(x_933);
lean_dec(x_930);
lean_dec(x_928);
lean_dec(x_850);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_961 = lean_ctor_get(x_938, 0);
lean_inc(x_961);
x_962 = lean_ctor_get(x_938, 1);
lean_inc(x_962);
if (lean_is_exclusive(x_938)) {
 lean_ctor_release(x_938, 0);
 lean_ctor_release(x_938, 1);
 x_963 = x_938;
} else {
 lean_dec_ref(x_938);
 x_963 = lean_box(0);
}
if (lean_is_scalar(x_963)) {
 x_964 = lean_alloc_ctor(1, 2, 0);
} else {
 x_964 = x_963;
}
lean_ctor_set(x_964, 0, x_961);
lean_ctor_set(x_964, 1, x_962);
return x_964;
}
}
else
{
lean_object* x_965; 
lean_dec(x_935);
lean_dec(x_933);
x_965 = l___private_Lean_Elab_Match_29__collect___main(x_932, x_2, x_850, x_4, x_5, x_6, x_7, x_8, x_838);
if (lean_obj_tag(x_965) == 0)
{
lean_object* x_966; lean_object* x_967; lean_object* x_968; lean_object* x_969; lean_object* x_970; lean_object* x_971; lean_object* x_972; 
x_966 = lean_ctor_get(x_965, 0);
lean_inc(x_966);
x_967 = lean_ctor_get(x_965, 1);
lean_inc(x_967);
if (lean_is_exclusive(x_965)) {
 lean_ctor_release(x_965, 0);
 lean_ctor_release(x_965, 1);
 x_968 = x_965;
} else {
 lean_dec_ref(x_965);
 x_968 = lean_box(0);
}
x_969 = l_Lean_Syntax_setArg(x_928, x_931, x_966);
x_970 = lean_array_set(x_11, x_834, x_969);
if (lean_is_scalar(x_930)) {
 x_971 = lean_alloc_ctor(1, 2, 0);
} else {
 x_971 = x_930;
}
lean_ctor_set(x_971, 0, x_10);
lean_ctor_set(x_971, 1, x_970);
if (lean_is_scalar(x_968)) {
 x_972 = lean_alloc_ctor(0, 2, 0);
} else {
 x_972 = x_968;
}
lean_ctor_set(x_972, 0, x_971);
lean_ctor_set(x_972, 1, x_967);
return x_972;
}
else
{
lean_object* x_973; lean_object* x_974; lean_object* x_975; lean_object* x_976; 
lean_dec(x_930);
lean_dec(x_928);
lean_dec(x_11);
lean_dec(x_10);
x_973 = lean_ctor_get(x_965, 0);
lean_inc(x_973);
x_974 = lean_ctor_get(x_965, 1);
lean_inc(x_974);
if (lean_is_exclusive(x_965)) {
 lean_ctor_release(x_965, 0);
 lean_ctor_release(x_965, 1);
 x_975 = x_965;
} else {
 lean_dec_ref(x_965);
 x_975 = lean_box(0);
}
if (lean_is_scalar(x_975)) {
 x_976 = lean_alloc_ctor(1, 2, 0);
} else {
 x_976 = x_975;
}
lean_ctor_set(x_976, 0, x_973);
lean_ctor_set(x_976, 1, x_974);
return x_976;
}
}
}
else
{
lean_object* x_977; 
lean_dec(x_933);
x_977 = l___private_Lean_Elab_Match_29__collect___main(x_932, x_2, x_850, x_4, x_5, x_6, x_7, x_8, x_838);
if (lean_obj_tag(x_977) == 0)
{
lean_object* x_978; lean_object* x_979; lean_object* x_980; lean_object* x_981; lean_object* x_982; lean_object* x_983; lean_object* x_984; 
x_978 = lean_ctor_get(x_977, 0);
lean_inc(x_978);
x_979 = lean_ctor_get(x_977, 1);
lean_inc(x_979);
if (lean_is_exclusive(x_977)) {
 lean_ctor_release(x_977, 0);
 lean_ctor_release(x_977, 1);
 x_980 = x_977;
} else {
 lean_dec_ref(x_977);
 x_980 = lean_box(0);
}
x_981 = l_Lean_Syntax_setArg(x_928, x_931, x_978);
x_982 = lean_array_set(x_11, x_834, x_981);
if (lean_is_scalar(x_930)) {
 x_983 = lean_alloc_ctor(1, 2, 0);
} else {
 x_983 = x_930;
}
lean_ctor_set(x_983, 0, x_10);
lean_ctor_set(x_983, 1, x_982);
if (lean_is_scalar(x_980)) {
 x_984 = lean_alloc_ctor(0, 2, 0);
} else {
 x_984 = x_980;
}
lean_ctor_set(x_984, 0, x_983);
lean_ctor_set(x_984, 1, x_979);
return x_984;
}
else
{
lean_object* x_985; lean_object* x_986; lean_object* x_987; lean_object* x_988; 
lean_dec(x_930);
lean_dec(x_928);
lean_dec(x_11);
lean_dec(x_10);
x_985 = lean_ctor_get(x_977, 0);
lean_inc(x_985);
x_986 = lean_ctor_get(x_977, 1);
lean_inc(x_986);
if (lean_is_exclusive(x_977)) {
 lean_ctor_release(x_977, 0);
 lean_ctor_release(x_977, 1);
 x_987 = x_977;
} else {
 lean_dec_ref(x_977);
 x_987 = lean_box(0);
}
if (lean_is_scalar(x_987)) {
 x_988 = lean_alloc_ctor(1, 2, 0);
} else {
 x_988 = x_987;
}
lean_ctor_set(x_988, 0, x_985);
lean_ctor_set(x_988, 1, x_986);
return x_988;
}
}
}
else
{
lean_object* x_989; 
lean_dec(x_928);
lean_dec(x_850);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
if (lean_is_scalar(x_839)) {
 x_989 = lean_alloc_ctor(0, 2, 0);
} else {
 x_989 = x_839;
}
lean_ctor_set(x_989, 0, x_1);
lean_ctor_set(x_989, 1, x_838);
return x_989;
}
}
}
else
{
lean_object* x_990; lean_object* x_991; lean_object* x_992; lean_object* x_993; lean_object* x_994; lean_object* x_995; lean_object* x_996; lean_object* x_997; lean_object* x_998; lean_object* x_999; lean_object* x_1000; lean_object* x_1001; lean_object* x_1002; lean_object* x_1003; lean_object* x_1004; lean_object* x_1005; lean_object* x_1006; 
lean_dec(x_850);
lean_dec(x_839);
lean_dec(x_7);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_990 = l___private_Lean_Elab_Match_11__mkMVarSyntax___rarg(x_8, x_838);
lean_dec(x_8);
x_991 = lean_ctor_get(x_990, 0);
lean_inc(x_991);
x_992 = lean_ctor_get(x_990, 1);
lean_inc(x_992);
lean_dec(x_990);
x_993 = lean_st_ref_take(x_2, x_992);
x_994 = lean_ctor_get(x_993, 0);
lean_inc(x_994);
x_995 = lean_ctor_get(x_993, 1);
lean_inc(x_995);
lean_dec(x_993);
x_996 = lean_ctor_get(x_994, 0);
lean_inc(x_996);
x_997 = lean_ctor_get(x_994, 1);
lean_inc(x_997);
if (lean_is_exclusive(x_994)) {
 lean_ctor_release(x_994, 0);
 lean_ctor_release(x_994, 1);
 x_998 = x_994;
} else {
 lean_dec_ref(x_994);
 x_998 = lean_box(0);
}
x_999 = l___private_Lean_Elab_Match_12__getMVarSyntaxMVarId(x_991);
x_1000 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_1000, 0, x_999);
x_1001 = lean_array_push(x_997, x_1000);
if (lean_is_scalar(x_998)) {
 x_1002 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1002 = x_998;
}
lean_ctor_set(x_1002, 0, x_996);
lean_ctor_set(x_1002, 1, x_1001);
x_1003 = lean_st_ref_set(x_2, x_1002, x_995);
lean_dec(x_2);
x_1004 = lean_ctor_get(x_1003, 1);
lean_inc(x_1004);
if (lean_is_exclusive(x_1003)) {
 lean_ctor_release(x_1003, 0);
 lean_ctor_release(x_1003, 1);
 x_1005 = x_1003;
} else {
 lean_dec_ref(x_1003);
 x_1005 = lean_box(0);
}
if (lean_is_scalar(x_1005)) {
 x_1006 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1006 = x_1005;
}
lean_ctor_set(x_1006, 0, x_991);
lean_ctor_set(x_1006, 1, x_1004);
return x_1006;
}
}
else
{
lean_object* x_1007; lean_object* x_1008; lean_object* x_1009; uint8_t x_1010; 
lean_dec(x_839);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_1007 = x_1;
} else {
 lean_dec_ref(x_1);
 x_1007 = lean_box(0);
}
x_1008 = l_Lean_Syntax_inhabited;
x_1009 = lean_array_get(x_1008, x_11, x_834);
x_1010 = l_Lean_Syntax_isNone(x_1009);
if (x_1010 == 0)
{
lean_object* x_1011; lean_object* x_1012; lean_object* x_1013; lean_object* x_1014; lean_object* x_1015; lean_object* x_1016; 
lean_dec(x_1007);
lean_dec(x_11);
lean_dec(x_10);
x_1011 = l___private_Lean_Elab_Match_29__collect___main___closed__14;
x_1012 = l_Lean_throwErrorAt___at___private_Lean_Elab_Match_25__processVar___spec__1___rarg(x_1009, x_1011, x_2, x_850, x_4, x_5, x_6, x_7, x_8, x_838);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_850);
lean_dec(x_2);
lean_dec(x_1009);
x_1013 = lean_ctor_get(x_1012, 0);
lean_inc(x_1013);
x_1014 = lean_ctor_get(x_1012, 1);
lean_inc(x_1014);
if (lean_is_exclusive(x_1012)) {
 lean_ctor_release(x_1012, 0);
 lean_ctor_release(x_1012, 1);
 x_1015 = x_1012;
} else {
 lean_dec_ref(x_1012);
 x_1015 = lean_box(0);
}
if (lean_is_scalar(x_1015)) {
 x_1016 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1016 = x_1015;
}
lean_ctor_set(x_1016, 0, x_1013);
lean_ctor_set(x_1016, 1, x_1014);
return x_1016;
}
else
{
lean_object* x_1017; lean_object* x_1018; lean_object* x_1019; lean_object* x_1020; lean_object* x_1021; 
lean_dec(x_1009);
x_1017 = lean_unsigned_to_nat(2u);
x_1018 = lean_array_get(x_1008, x_11, x_1017);
x_1019 = l_Lean_Syntax_getArgs(x_1018);
lean_dec(x_1018);
x_1020 = l___private_Lean_Elab_Match_29__collect___main___closed__15;
x_1021 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_29__collect___main___spec__1(x_1019, x_1020, x_2, x_850, x_4, x_5, x_6, x_7, x_8, x_838);
lean_dec(x_1019);
if (lean_obj_tag(x_1021) == 0)
{
lean_object* x_1022; lean_object* x_1023; lean_object* x_1024; lean_object* x_1025; lean_object* x_1026; lean_object* x_1027; lean_object* x_1028; lean_object* x_1029; 
x_1022 = lean_ctor_get(x_1021, 0);
lean_inc(x_1022);
x_1023 = lean_ctor_get(x_1021, 1);
lean_inc(x_1023);
if (lean_is_exclusive(x_1021)) {
 lean_ctor_release(x_1021, 0);
 lean_ctor_release(x_1021, 1);
 x_1024 = x_1021;
} else {
 lean_dec_ref(x_1021);
 x_1024 = lean_box(0);
}
x_1025 = l_Lean_nullKind;
if (lean_is_scalar(x_1007)) {
 x_1026 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1026 = x_1007;
}
lean_ctor_set(x_1026, 0, x_1025);
lean_ctor_set(x_1026, 1, x_1022);
x_1027 = lean_array_set(x_11, x_1017, x_1026);
x_1028 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1028, 0, x_10);
lean_ctor_set(x_1028, 1, x_1027);
if (lean_is_scalar(x_1024)) {
 x_1029 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1029 = x_1024;
}
lean_ctor_set(x_1029, 0, x_1028);
lean_ctor_set(x_1029, 1, x_1023);
return x_1029;
}
else
{
lean_object* x_1030; lean_object* x_1031; lean_object* x_1032; lean_object* x_1033; 
lean_dec(x_1007);
lean_dec(x_11);
lean_dec(x_10);
x_1030 = lean_ctor_get(x_1021, 0);
lean_inc(x_1030);
x_1031 = lean_ctor_get(x_1021, 1);
lean_inc(x_1031);
if (lean_is_exclusive(x_1021)) {
 lean_ctor_release(x_1021, 0);
 lean_ctor_release(x_1021, 1);
 x_1032 = x_1021;
} else {
 lean_dec_ref(x_1021);
 x_1032 = lean_box(0);
}
if (lean_is_scalar(x_1032)) {
 x_1033 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1033 = x_1032;
}
lean_ctor_set(x_1033, 0, x_1030);
lean_ctor_set(x_1033, 1, x_1031);
return x_1033;
}
}
}
}
else
{
lean_object* x_1034; lean_object* x_1035; lean_object* x_1036; lean_object* x_1037; lean_object* x_1038; lean_object* x_1039; 
lean_dec(x_839);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_1034 = x_1;
} else {
 lean_dec_ref(x_1);
 x_1034 = lean_box(0);
}
x_1035 = l_Lean_Syntax_inhabited;
x_1036 = lean_array_get(x_1035, x_11, x_834);
x_1037 = l_Lean_Syntax_getArgs(x_1036);
lean_dec(x_1036);
x_1038 = l___private_Lean_Elab_Match_29__collect___main___closed__11;
x_1039 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_29__collect___main___spec__1(x_1037, x_1038, x_2, x_850, x_4, x_5, x_6, x_7, x_8, x_838);
lean_dec(x_1037);
if (lean_obj_tag(x_1039) == 0)
{
lean_object* x_1040; lean_object* x_1041; lean_object* x_1042; lean_object* x_1043; lean_object* x_1044; lean_object* x_1045; lean_object* x_1046; lean_object* x_1047; 
x_1040 = lean_ctor_get(x_1039, 0);
lean_inc(x_1040);
x_1041 = lean_ctor_get(x_1039, 1);
lean_inc(x_1041);
if (lean_is_exclusive(x_1039)) {
 lean_ctor_release(x_1039, 0);
 lean_ctor_release(x_1039, 1);
 x_1042 = x_1039;
} else {
 lean_dec_ref(x_1039);
 x_1042 = lean_box(0);
}
x_1043 = l_Lean_nullKind;
if (lean_is_scalar(x_1034)) {
 x_1044 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1044 = x_1034;
}
lean_ctor_set(x_1044, 0, x_1043);
lean_ctor_set(x_1044, 1, x_1040);
x_1045 = lean_array_set(x_11, x_834, x_1044);
x_1046 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1046, 0, x_10);
lean_ctor_set(x_1046, 1, x_1045);
if (lean_is_scalar(x_1042)) {
 x_1047 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1047 = x_1042;
}
lean_ctor_set(x_1047, 0, x_1046);
lean_ctor_set(x_1047, 1, x_1041);
return x_1047;
}
else
{
lean_object* x_1048; lean_object* x_1049; lean_object* x_1050; lean_object* x_1051; 
lean_dec(x_1034);
lean_dec(x_11);
lean_dec(x_10);
x_1048 = lean_ctor_get(x_1039, 0);
lean_inc(x_1048);
x_1049 = lean_ctor_get(x_1039, 1);
lean_inc(x_1049);
if (lean_is_exclusive(x_1039)) {
 lean_ctor_release(x_1039, 0);
 lean_ctor_release(x_1039, 1);
 x_1050 = x_1039;
} else {
 lean_dec_ref(x_1039);
 x_1050 = lean_box(0);
}
if (lean_is_scalar(x_1050)) {
 x_1051 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1051 = x_1050;
}
lean_ctor_set(x_1051, 0, x_1048);
lean_ctor_set(x_1051, 1, x_1049);
return x_1051;
}
}
}
else
{
lean_object* x_1052; lean_object* x_1053; 
lean_dec(x_839);
lean_dec(x_11);
lean_dec(x_10);
x_1052 = l___private_Lean_Elab_Match_29__collect___main___closed__11;
x_1053 = l_Lean_Elab_Term_CollectPatternVars_processCtorApp(x_1052, x_1, x_2, x_850, x_4, x_5, x_6, x_7, x_8, x_838);
lean_dec(x_1);
return x_1053;
}
}
}
}
else
{
lean_object* x_1061; lean_object* x_1062; lean_object* x_1063; lean_object* x_1064; lean_object* x_1065; lean_object* x_1066; lean_object* x_1067; lean_object* x_1068; lean_object* x_1069; uint8_t x_1070; lean_object* x_1071; lean_object* x_1072; 
x_1061 = lean_ctor_get(x_7, 0);
x_1062 = lean_ctor_get(x_7, 1);
x_1063 = lean_ctor_get(x_7, 2);
x_1064 = lean_ctor_get(x_7, 3);
lean_inc(x_1064);
lean_inc(x_1063);
lean_inc(x_1062);
lean_inc(x_1061);
lean_dec(x_7);
x_1065 = l_Lean_replaceRef(x_1, x_1064);
x_1066 = l_Lean_replaceRef(x_1065, x_1064);
lean_dec(x_1065);
x_1067 = l_Lean_replaceRef(x_1066, x_1064);
lean_dec(x_1064);
lean_dec(x_1066);
x_1068 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_1068, 0, x_1061);
lean_ctor_set(x_1068, 1, x_1062);
lean_ctor_set(x_1068, 2, x_1063);
lean_ctor_set(x_1068, 3, x_1067);
x_1069 = lean_st_ref_take(x_8, x_9);
if (x_13 == 0)
{
lean_object* x_1299; lean_object* x_1300; uint8_t x_1301; 
x_1299 = lean_ctor_get(x_1069, 0);
lean_inc(x_1299);
x_1300 = lean_ctor_get(x_1069, 1);
lean_inc(x_1300);
lean_dec(x_1069);
x_1301 = 0;
x_1070 = x_1301;
x_1071 = x_1299;
x_1072 = x_1300;
goto block_1298;
}
else
{
lean_object* x_1302; lean_object* x_1303; uint8_t x_1304; 
x_1302 = lean_ctor_get(x_1069, 0);
lean_inc(x_1302);
x_1303 = lean_ctor_get(x_1069, 1);
lean_inc(x_1303);
lean_dec(x_1069);
x_1304 = 1;
x_1070 = x_1304;
x_1071 = x_1302;
x_1072 = x_1303;
goto block_1298;
}
block_1298:
{
lean_object* x_1073; lean_object* x_1074; lean_object* x_1075; lean_object* x_1076; lean_object* x_1077; lean_object* x_1078; lean_object* x_1079; lean_object* x_1080; lean_object* x_1081; lean_object* x_1082; lean_object* x_1083; lean_object* x_1084; lean_object* x_1085; lean_object* x_1086; lean_object* x_1087; lean_object* x_1088; lean_object* x_1089; lean_object* x_1090; uint8_t x_1091; uint8_t x_1092; lean_object* x_1093; lean_object* x_1094; 
x_1073 = lean_ctor_get(x_1071, 0);
lean_inc(x_1073);
x_1074 = lean_ctor_get(x_1071, 1);
lean_inc(x_1074);
x_1075 = lean_ctor_get(x_1071, 2);
lean_inc(x_1075);
x_1076 = lean_ctor_get(x_1071, 3);
lean_inc(x_1076);
if (lean_is_exclusive(x_1071)) {
 lean_ctor_release(x_1071, 0);
 lean_ctor_release(x_1071, 1);
 lean_ctor_release(x_1071, 2);
 lean_ctor_release(x_1071, 3);
 x_1077 = x_1071;
} else {
 lean_dec_ref(x_1071);
 x_1077 = lean_box(0);
}
x_1078 = lean_unsigned_to_nat(1u);
x_1079 = lean_nat_add(x_1074, x_1078);
if (lean_is_scalar(x_1077)) {
 x_1080 = lean_alloc_ctor(0, 4, 0);
} else {
 x_1080 = x_1077;
}
lean_ctor_set(x_1080, 0, x_1073);
lean_ctor_set(x_1080, 1, x_1079);
lean_ctor_set(x_1080, 2, x_1075);
lean_ctor_set(x_1080, 3, x_1076);
x_1081 = lean_st_ref_set(x_8, x_1080, x_1072);
x_1082 = lean_ctor_get(x_1081, 1);
lean_inc(x_1082);
if (lean_is_exclusive(x_1081)) {
 lean_ctor_release(x_1081, 0);
 lean_ctor_release(x_1081, 1);
 x_1083 = x_1081;
} else {
 lean_dec_ref(x_1081);
 x_1083 = lean_box(0);
}
x_1084 = lean_ctor_get(x_3, 0);
lean_inc(x_1084);
x_1085 = lean_ctor_get(x_3, 1);
lean_inc(x_1085);
x_1086 = lean_ctor_get(x_3, 2);
lean_inc(x_1086);
x_1087 = lean_ctor_get(x_3, 3);
lean_inc(x_1087);
x_1088 = lean_ctor_get(x_3, 4);
lean_inc(x_1088);
x_1089 = lean_ctor_get(x_3, 5);
lean_inc(x_1089);
x_1090 = lean_ctor_get(x_3, 6);
lean_inc(x_1090);
x_1091 = lean_ctor_get_uint8(x_3, sizeof(void*)*8);
x_1092 = lean_ctor_get_uint8(x_3, sizeof(void*)*8 + 1);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 lean_ctor_release(x_3, 2);
 lean_ctor_release(x_3, 3);
 lean_ctor_release(x_3, 4);
 lean_ctor_release(x_3, 5);
 lean_ctor_release(x_3, 6);
 lean_ctor_release(x_3, 7);
 x_1093 = x_3;
} else {
 lean_dec_ref(x_3);
 x_1093 = lean_box(0);
}
if (lean_is_scalar(x_1093)) {
 x_1094 = lean_alloc_ctor(0, 8, 2);
} else {
 x_1094 = x_1093;
}
lean_ctor_set(x_1094, 0, x_1084);
lean_ctor_set(x_1094, 1, x_1085);
lean_ctor_set(x_1094, 2, x_1086);
lean_ctor_set(x_1094, 3, x_1087);
lean_ctor_set(x_1094, 4, x_1088);
lean_ctor_set(x_1094, 5, x_1089);
lean_ctor_set(x_1094, 6, x_1090);
lean_ctor_set(x_1094, 7, x_1074);
lean_ctor_set_uint8(x_1094, sizeof(void*)*8, x_1091);
lean_ctor_set_uint8(x_1094, sizeof(void*)*8 + 1, x_1092);
if (x_1070 == 0)
{
lean_object* x_1095; uint8_t x_1096; 
x_1095 = l___private_Lean_Elab_Match_29__collect___main___closed__2;
x_1096 = lean_name_eq(x_10, x_1095);
if (x_1096 == 0)
{
lean_object* x_1097; uint8_t x_1098; 
x_1097 = l_Lean_Elab_Term_quoteAutoTactic___main___closed__2;
x_1098 = lean_name_eq(x_10, x_1097);
if (x_1098 == 0)
{
lean_object* x_1099; uint8_t x_1100; 
x_1099 = l_Lean_mkHole___closed__2;
x_1100 = lean_name_eq(x_10, x_1099);
if (x_1100 == 0)
{
lean_object* x_1101; uint8_t x_1102; 
x_1101 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__20;
x_1102 = lean_name_eq(x_10, x_1101);
if (x_1102 == 0)
{
lean_object* x_1103; uint8_t x_1104; 
lean_dec(x_11);
x_1103 = l___private_Lean_Elab_App_23__elabAppFn___main___closed__5;
x_1104 = lean_name_eq(x_10, x_1103);
if (x_1104 == 0)
{
lean_object* x_1105; uint8_t x_1106; 
x_1105 = l___private_Lean_Elab_App_23__elabAppFn___main___closed__12;
x_1106 = lean_name_eq(x_10, x_1105);
if (x_1106 == 0)
{
lean_object* x_1107; uint8_t x_1108; 
x_1107 = l___regBuiltin_Lean_Elab_Term_elabInaccessible___closed__2;
x_1108 = lean_name_eq(x_10, x_1107);
if (x_1108 == 0)
{
lean_object* x_1109; uint8_t x_1110; 
x_1109 = l_Lean_strLitKind;
x_1110 = lean_name_eq(x_10, x_1109);
if (x_1110 == 0)
{
lean_object* x_1111; uint8_t x_1112; 
x_1111 = l_Lean_numLitKind;
x_1112 = lean_name_eq(x_10, x_1111);
if (x_1112 == 0)
{
lean_object* x_1113; uint8_t x_1114; 
x_1113 = l_Lean_charLitKind;
x_1114 = lean_name_eq(x_10, x_1113);
if (x_1114 == 0)
{
lean_object* x_1115; uint8_t x_1116; 
lean_dec(x_1083);
x_1115 = l___regBuiltin_Lean_Elab_Term_elabQuotedName___closed__2;
x_1116 = lean_name_eq(x_10, x_1115);
if (x_1116 == 0)
{
lean_object* x_1117; uint8_t x_1118; 
lean_dec(x_1);
x_1117 = l_Lean_choiceKind;
x_1118 = lean_name_eq(x_10, x_1117);
lean_dec(x_10);
if (x_1118 == 0)
{
lean_object* x_1119; 
x_1119 = l___private_Lean_Elab_Match_16__throwInvalidPattern___rarg(x_2, x_1094, x_4, x_5, x_6, x_1068, x_8, x_1082);
lean_dec(x_8);
lean_dec(x_1068);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1094);
lean_dec(x_2);
return x_1119;
}
else
{
lean_object* x_1120; lean_object* x_1121; 
x_1120 = l___private_Lean_Elab_Match_29__collect___main___closed__5;
x_1121 = l_Lean_throwError___at___private_Lean_Elab_Match_13__throwCtorExpected___spec__1___rarg(x_1120, x_2, x_1094, x_4, x_5, x_6, x_1068, x_8, x_1082);
lean_dec(x_8);
lean_dec(x_1068);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1094);
lean_dec(x_2);
return x_1121;
}
}
else
{
lean_object* x_1122; 
lean_dec(x_10);
lean_dec(x_2);
x_1122 = l___private_Lean_Elab_Match_28__quotedNameToPattern(x_1, x_1094, x_4, x_5, x_6, x_1068, x_8, x_1082);
lean_dec(x_8);
lean_dec(x_1068);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_1122;
}
}
else
{
lean_object* x_1123; 
lean_dec(x_1094);
lean_dec(x_1068);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
if (lean_is_scalar(x_1083)) {
 x_1123 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1123 = x_1083;
}
lean_ctor_set(x_1123, 0, x_1);
lean_ctor_set(x_1123, 1, x_1082);
return x_1123;
}
}
else
{
lean_object* x_1124; 
lean_dec(x_1094);
lean_dec(x_1068);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
if (lean_is_scalar(x_1083)) {
 x_1124 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1124 = x_1083;
}
lean_ctor_set(x_1124, 0, x_1);
lean_ctor_set(x_1124, 1, x_1082);
return x_1124;
}
}
else
{
lean_object* x_1125; 
lean_dec(x_1094);
lean_dec(x_1068);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
if (lean_is_scalar(x_1083)) {
 x_1125 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1125 = x_1083;
}
lean_ctor_set(x_1125, 0, x_1);
lean_ctor_set(x_1125, 1, x_1082);
return x_1125;
}
}
else
{
lean_object* x_1126; 
lean_dec(x_1094);
lean_dec(x_1068);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
if (lean_is_scalar(x_1083)) {
 x_1126 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1126 = x_1083;
}
lean_ctor_set(x_1126, 0, x_1);
lean_ctor_set(x_1126, 1, x_1082);
return x_1126;
}
}
else
{
lean_object* x_1127; lean_object* x_1128; lean_object* x_1129; 
lean_dec(x_1083);
lean_dec(x_10);
x_1127 = lean_unsigned_to_nat(0u);
x_1128 = l_Lean_Syntax_getArg(x_1, x_1127);
lean_inc(x_1068);
lean_inc(x_1128);
x_1129 = l___private_Lean_Elab_Match_25__processVar(x_1128, x_2, x_1094, x_4, x_5, x_6, x_1068, x_8, x_1082);
if (lean_obj_tag(x_1129) == 0)
{
lean_object* x_1130; lean_object* x_1131; lean_object* x_1132; lean_object* x_1133; lean_object* x_1134; 
x_1130 = lean_ctor_get(x_1129, 1);
lean_inc(x_1130);
lean_dec(x_1129);
x_1131 = lean_unsigned_to_nat(2u);
x_1132 = l_Lean_Syntax_getArg(x_1, x_1131);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_1133 = x_1;
} else {
 lean_dec_ref(x_1);
 x_1133 = lean_box(0);
}
lean_inc(x_8);
lean_inc(x_1068);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1094);
x_1134 = l___private_Lean_Elab_Match_29__collect___main(x_1132, x_2, x_1094, x_4, x_5, x_6, x_1068, x_8, x_1130);
if (lean_obj_tag(x_1134) == 0)
{
lean_object* x_1135; lean_object* x_1136; lean_object* x_1137; lean_object* x_1138; lean_object* x_1139; lean_object* x_1140; lean_object* x_1141; lean_object* x_1142; lean_object* x_1143; lean_object* x_1144; lean_object* x_1145; lean_object* x_1146; lean_object* x_1147; lean_object* x_1148; lean_object* x_1149; lean_object* x_1150; lean_object* x_1151; lean_object* x_1152; lean_object* x_1153; lean_object* x_1154; lean_object* x_1155; lean_object* x_1156; lean_object* x_1157; lean_object* x_1158; 
x_1135 = lean_ctor_get(x_1134, 0);
lean_inc(x_1135);
x_1136 = lean_ctor_get(x_1134, 1);
lean_inc(x_1136);
lean_dec(x_1134);
x_1137 = l_Lean_Elab_Term_getCurrMacroScope(x_1094, x_4, x_5, x_6, x_1068, x_8, x_1136);
lean_dec(x_1068);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1094);
x_1138 = lean_ctor_get(x_1137, 0);
lean_inc(x_1138);
x_1139 = lean_ctor_get(x_1137, 1);
lean_inc(x_1139);
lean_dec(x_1137);
x_1140 = l_Lean_Elab_Term_getMainModule___rarg(x_8, x_1139);
lean_dec(x_8);
x_1141 = lean_ctor_get(x_1140, 0);
lean_inc(x_1141);
x_1142 = lean_ctor_get(x_1140, 1);
lean_inc(x_1142);
if (lean_is_exclusive(x_1140)) {
 lean_ctor_release(x_1140, 0);
 lean_ctor_release(x_1140, 1);
 x_1143 = x_1140;
} else {
 lean_dec_ref(x_1140);
 x_1143 = lean_box(0);
}
x_1144 = l___private_Lean_Elab_Match_29__collect___main___closed__8;
x_1145 = l_Lean_addMacroScope(x_1141, x_1144, x_1138);
x_1146 = l_Lean_SourceInfo_inhabited___closed__1;
x_1147 = l___private_Lean_Elab_Match_29__collect___main___closed__7;
x_1148 = l___private_Lean_Elab_Match_29__collect___main___closed__10;
x_1149 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_1149, 0, x_1146);
lean_ctor_set(x_1149, 1, x_1147);
lean_ctor_set(x_1149, 2, x_1145);
lean_ctor_set(x_1149, 3, x_1148);
x_1150 = l_Array_empty___closed__1;
x_1151 = lean_array_push(x_1150, x_1149);
x_1152 = lean_array_push(x_1150, x_1128);
x_1153 = lean_array_push(x_1152, x_1135);
x_1154 = l_Lean_nullKind___closed__2;
if (lean_is_scalar(x_1133)) {
 x_1155 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1155 = x_1133;
}
lean_ctor_set(x_1155, 0, x_1154);
lean_ctor_set(x_1155, 1, x_1153);
x_1156 = lean_array_push(x_1151, x_1155);
x_1157 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1157, 0, x_12);
lean_ctor_set(x_1157, 1, x_1156);
if (lean_is_scalar(x_1143)) {
 x_1158 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1158 = x_1143;
}
lean_ctor_set(x_1158, 0, x_1157);
lean_ctor_set(x_1158, 1, x_1142);
return x_1158;
}
else
{
lean_object* x_1159; lean_object* x_1160; lean_object* x_1161; lean_object* x_1162; 
lean_dec(x_1133);
lean_dec(x_1128);
lean_dec(x_1094);
lean_dec(x_1068);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_1159 = lean_ctor_get(x_1134, 0);
lean_inc(x_1159);
x_1160 = lean_ctor_get(x_1134, 1);
lean_inc(x_1160);
if (lean_is_exclusive(x_1134)) {
 lean_ctor_release(x_1134, 0);
 lean_ctor_release(x_1134, 1);
 x_1161 = x_1134;
} else {
 lean_dec_ref(x_1134);
 x_1161 = lean_box(0);
}
if (lean_is_scalar(x_1161)) {
 x_1162 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1162 = x_1161;
}
lean_ctor_set(x_1162, 0, x_1159);
lean_ctor_set(x_1162, 1, x_1160);
return x_1162;
}
}
else
{
lean_object* x_1163; lean_object* x_1164; lean_object* x_1165; lean_object* x_1166; 
lean_dec(x_1128);
lean_dec(x_1094);
lean_dec(x_1068);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_1163 = lean_ctor_get(x_1129, 0);
lean_inc(x_1163);
x_1164 = lean_ctor_get(x_1129, 1);
lean_inc(x_1164);
if (lean_is_exclusive(x_1129)) {
 lean_ctor_release(x_1129, 0);
 lean_ctor_release(x_1129, 1);
 x_1165 = x_1129;
} else {
 lean_dec_ref(x_1129);
 x_1165 = lean_box(0);
}
if (lean_is_scalar(x_1165)) {
 x_1166 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1166 = x_1165;
}
lean_ctor_set(x_1166, 0, x_1163);
lean_ctor_set(x_1166, 1, x_1164);
return x_1166;
}
}
}
else
{
lean_object* x_1167; lean_object* x_1168; lean_object* x_1169; lean_object* x_1170; 
lean_dec(x_1083);
lean_dec(x_10);
x_1167 = lean_unsigned_to_nat(0u);
x_1168 = l_Lean_Syntax_getArg(x_1, x_1167);
lean_dec(x_1);
x_1169 = l___private_Lean_Elab_Match_29__collect___main___closed__11;
x_1170 = l_Lean_Elab_Term_CollectPatternVars_processCtor(x_1169, x_1168, x_2, x_1094, x_4, x_5, x_6, x_1068, x_8, x_1082);
return x_1170;
}
}
else
{
lean_object* x_1171; lean_object* x_1172; uint8_t x_1173; 
x_1171 = l_Lean_Syntax_inhabited;
x_1172 = lean_array_get(x_1171, x_11, x_1078);
x_1173 = l_Lean_Syntax_isNone(x_1172);
if (x_1173 == 0)
{
lean_object* x_1174; lean_object* x_1175; lean_object* x_1176; lean_object* x_1177; uint8_t x_1178; 
lean_dec(x_1083);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_1174 = x_1;
} else {
 lean_dec_ref(x_1);
 x_1174 = lean_box(0);
}
x_1175 = lean_unsigned_to_nat(0u);
x_1176 = l_Lean_Syntax_getArg(x_1172, x_1175);
x_1177 = l_Lean_Syntax_getArg(x_1172, x_1078);
x_1178 = l_Lean_Syntax_isNone(x_1177);
if (x_1178 == 0)
{
lean_object* x_1179; lean_object* x_1180; uint8_t x_1181; 
x_1179 = l_Lean_Syntax_getArg(x_1177, x_1175);
x_1180 = l_Lean_myMacro____x40_Lean_Util_Trace___hyg_11____closed__24;
lean_inc(x_1179);
x_1181 = l_Lean_Syntax_isOfKind(x_1179, x_1180);
if (x_1181 == 0)
{
lean_object* x_1182; 
lean_inc(x_8);
lean_inc(x_1068);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1094);
lean_inc(x_2);
x_1182 = l___private_Lean_Elab_Match_29__collect___main(x_1176, x_2, x_1094, x_4, x_5, x_6, x_1068, x_8, x_1082);
if (lean_obj_tag(x_1182) == 0)
{
lean_object* x_1183; lean_object* x_1184; lean_object* x_1185; lean_object* x_1186; lean_object* x_1187; lean_object* x_1188; lean_object* x_1189; 
x_1183 = lean_ctor_get(x_1182, 0);
lean_inc(x_1183);
x_1184 = lean_ctor_get(x_1182, 1);
lean_inc(x_1184);
lean_dec(x_1182);
x_1185 = l_Lean_Syntax_setArg(x_1172, x_1175, x_1183);
x_1186 = l_Lean_Syntax_getArg(x_1179, x_1078);
x_1187 = l_Lean_Syntax_getArgs(x_1186);
lean_dec(x_1186);
x_1188 = l___private_Lean_Elab_Match_29__collect___main___closed__11;
x_1189 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_29__collect___main___spec__1(x_1187, x_1188, x_2, x_1094, x_4, x_5, x_6, x_1068, x_8, x_1184);
lean_dec(x_1187);
if (lean_obj_tag(x_1189) == 0)
{
lean_object* x_1190; lean_object* x_1191; lean_object* x_1192; lean_object* x_1193; lean_object* x_1194; lean_object* x_1195; lean_object* x_1196; lean_object* x_1197; lean_object* x_1198; lean_object* x_1199; lean_object* x_1200; 
x_1190 = lean_ctor_get(x_1189, 0);
lean_inc(x_1190);
x_1191 = lean_ctor_get(x_1189, 1);
lean_inc(x_1191);
if (lean_is_exclusive(x_1189)) {
 lean_ctor_release(x_1189, 0);
 lean_ctor_release(x_1189, 1);
 x_1192 = x_1189;
} else {
 lean_dec_ref(x_1189);
 x_1192 = lean_box(0);
}
x_1193 = l_Lean_nullKind;
if (lean_is_scalar(x_1174)) {
 x_1194 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1194 = x_1174;
}
lean_ctor_set(x_1194, 0, x_1193);
lean_ctor_set(x_1194, 1, x_1190);
x_1195 = l_Lean_Syntax_setArg(x_1179, x_1078, x_1194);
x_1196 = l_Lean_Syntax_setArg(x_1177, x_1175, x_1195);
x_1197 = l_Lean_Syntax_setArg(x_1185, x_1078, x_1196);
x_1198 = lean_array_set(x_11, x_1078, x_1197);
x_1199 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1199, 0, x_10);
lean_ctor_set(x_1199, 1, x_1198);
if (lean_is_scalar(x_1192)) {
 x_1200 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1200 = x_1192;
}
lean_ctor_set(x_1200, 0, x_1199);
lean_ctor_set(x_1200, 1, x_1191);
return x_1200;
}
else
{
lean_object* x_1201; lean_object* x_1202; lean_object* x_1203; lean_object* x_1204; 
lean_dec(x_1185);
lean_dec(x_1179);
lean_dec(x_1177);
lean_dec(x_1174);
lean_dec(x_11);
lean_dec(x_10);
x_1201 = lean_ctor_get(x_1189, 0);
lean_inc(x_1201);
x_1202 = lean_ctor_get(x_1189, 1);
lean_inc(x_1202);
if (lean_is_exclusive(x_1189)) {
 lean_ctor_release(x_1189, 0);
 lean_ctor_release(x_1189, 1);
 x_1203 = x_1189;
} else {
 lean_dec_ref(x_1189);
 x_1203 = lean_box(0);
}
if (lean_is_scalar(x_1203)) {
 x_1204 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1204 = x_1203;
}
lean_ctor_set(x_1204, 0, x_1201);
lean_ctor_set(x_1204, 1, x_1202);
return x_1204;
}
}
else
{
lean_object* x_1205; lean_object* x_1206; lean_object* x_1207; lean_object* x_1208; 
lean_dec(x_1179);
lean_dec(x_1177);
lean_dec(x_1174);
lean_dec(x_1172);
lean_dec(x_1094);
lean_dec(x_1068);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_1205 = lean_ctor_get(x_1182, 0);
lean_inc(x_1205);
x_1206 = lean_ctor_get(x_1182, 1);
lean_inc(x_1206);
if (lean_is_exclusive(x_1182)) {
 lean_ctor_release(x_1182, 0);
 lean_ctor_release(x_1182, 1);
 x_1207 = x_1182;
} else {
 lean_dec_ref(x_1182);
 x_1207 = lean_box(0);
}
if (lean_is_scalar(x_1207)) {
 x_1208 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1208 = x_1207;
}
lean_ctor_set(x_1208, 0, x_1205);
lean_ctor_set(x_1208, 1, x_1206);
return x_1208;
}
}
else
{
lean_object* x_1209; 
lean_dec(x_1179);
lean_dec(x_1177);
x_1209 = l___private_Lean_Elab_Match_29__collect___main(x_1176, x_2, x_1094, x_4, x_5, x_6, x_1068, x_8, x_1082);
if (lean_obj_tag(x_1209) == 0)
{
lean_object* x_1210; lean_object* x_1211; lean_object* x_1212; lean_object* x_1213; lean_object* x_1214; lean_object* x_1215; lean_object* x_1216; 
x_1210 = lean_ctor_get(x_1209, 0);
lean_inc(x_1210);
x_1211 = lean_ctor_get(x_1209, 1);
lean_inc(x_1211);
if (lean_is_exclusive(x_1209)) {
 lean_ctor_release(x_1209, 0);
 lean_ctor_release(x_1209, 1);
 x_1212 = x_1209;
} else {
 lean_dec_ref(x_1209);
 x_1212 = lean_box(0);
}
x_1213 = l_Lean_Syntax_setArg(x_1172, x_1175, x_1210);
x_1214 = lean_array_set(x_11, x_1078, x_1213);
if (lean_is_scalar(x_1174)) {
 x_1215 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1215 = x_1174;
}
lean_ctor_set(x_1215, 0, x_10);
lean_ctor_set(x_1215, 1, x_1214);
if (lean_is_scalar(x_1212)) {
 x_1216 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1216 = x_1212;
}
lean_ctor_set(x_1216, 0, x_1215);
lean_ctor_set(x_1216, 1, x_1211);
return x_1216;
}
else
{
lean_object* x_1217; lean_object* x_1218; lean_object* x_1219; lean_object* x_1220; 
lean_dec(x_1174);
lean_dec(x_1172);
lean_dec(x_11);
lean_dec(x_10);
x_1217 = lean_ctor_get(x_1209, 0);
lean_inc(x_1217);
x_1218 = lean_ctor_get(x_1209, 1);
lean_inc(x_1218);
if (lean_is_exclusive(x_1209)) {
 lean_ctor_release(x_1209, 0);
 lean_ctor_release(x_1209, 1);
 x_1219 = x_1209;
} else {
 lean_dec_ref(x_1209);
 x_1219 = lean_box(0);
}
if (lean_is_scalar(x_1219)) {
 x_1220 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1220 = x_1219;
}
lean_ctor_set(x_1220, 0, x_1217);
lean_ctor_set(x_1220, 1, x_1218);
return x_1220;
}
}
}
else
{
lean_object* x_1221; 
lean_dec(x_1177);
x_1221 = l___private_Lean_Elab_Match_29__collect___main(x_1176, x_2, x_1094, x_4, x_5, x_6, x_1068, x_8, x_1082);
if (lean_obj_tag(x_1221) == 0)
{
lean_object* x_1222; lean_object* x_1223; lean_object* x_1224; lean_object* x_1225; lean_object* x_1226; lean_object* x_1227; lean_object* x_1228; 
x_1222 = lean_ctor_get(x_1221, 0);
lean_inc(x_1222);
x_1223 = lean_ctor_get(x_1221, 1);
lean_inc(x_1223);
if (lean_is_exclusive(x_1221)) {
 lean_ctor_release(x_1221, 0);
 lean_ctor_release(x_1221, 1);
 x_1224 = x_1221;
} else {
 lean_dec_ref(x_1221);
 x_1224 = lean_box(0);
}
x_1225 = l_Lean_Syntax_setArg(x_1172, x_1175, x_1222);
x_1226 = lean_array_set(x_11, x_1078, x_1225);
if (lean_is_scalar(x_1174)) {
 x_1227 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1227 = x_1174;
}
lean_ctor_set(x_1227, 0, x_10);
lean_ctor_set(x_1227, 1, x_1226);
if (lean_is_scalar(x_1224)) {
 x_1228 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1228 = x_1224;
}
lean_ctor_set(x_1228, 0, x_1227);
lean_ctor_set(x_1228, 1, x_1223);
return x_1228;
}
else
{
lean_object* x_1229; lean_object* x_1230; lean_object* x_1231; lean_object* x_1232; 
lean_dec(x_1174);
lean_dec(x_1172);
lean_dec(x_11);
lean_dec(x_10);
x_1229 = lean_ctor_get(x_1221, 0);
lean_inc(x_1229);
x_1230 = lean_ctor_get(x_1221, 1);
lean_inc(x_1230);
if (lean_is_exclusive(x_1221)) {
 lean_ctor_release(x_1221, 0);
 lean_ctor_release(x_1221, 1);
 x_1231 = x_1221;
} else {
 lean_dec_ref(x_1221);
 x_1231 = lean_box(0);
}
if (lean_is_scalar(x_1231)) {
 x_1232 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1232 = x_1231;
}
lean_ctor_set(x_1232, 0, x_1229);
lean_ctor_set(x_1232, 1, x_1230);
return x_1232;
}
}
}
else
{
lean_object* x_1233; 
lean_dec(x_1172);
lean_dec(x_1094);
lean_dec(x_1068);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
if (lean_is_scalar(x_1083)) {
 x_1233 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1233 = x_1083;
}
lean_ctor_set(x_1233, 0, x_1);
lean_ctor_set(x_1233, 1, x_1082);
return x_1233;
}
}
}
else
{
lean_object* x_1234; lean_object* x_1235; lean_object* x_1236; lean_object* x_1237; lean_object* x_1238; lean_object* x_1239; lean_object* x_1240; lean_object* x_1241; lean_object* x_1242; lean_object* x_1243; lean_object* x_1244; lean_object* x_1245; lean_object* x_1246; lean_object* x_1247; lean_object* x_1248; lean_object* x_1249; lean_object* x_1250; 
lean_dec(x_1094);
lean_dec(x_1083);
lean_dec(x_1068);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_1234 = l___private_Lean_Elab_Match_11__mkMVarSyntax___rarg(x_8, x_1082);
lean_dec(x_8);
x_1235 = lean_ctor_get(x_1234, 0);
lean_inc(x_1235);
x_1236 = lean_ctor_get(x_1234, 1);
lean_inc(x_1236);
lean_dec(x_1234);
x_1237 = lean_st_ref_take(x_2, x_1236);
x_1238 = lean_ctor_get(x_1237, 0);
lean_inc(x_1238);
x_1239 = lean_ctor_get(x_1237, 1);
lean_inc(x_1239);
lean_dec(x_1237);
x_1240 = lean_ctor_get(x_1238, 0);
lean_inc(x_1240);
x_1241 = lean_ctor_get(x_1238, 1);
lean_inc(x_1241);
if (lean_is_exclusive(x_1238)) {
 lean_ctor_release(x_1238, 0);
 lean_ctor_release(x_1238, 1);
 x_1242 = x_1238;
} else {
 lean_dec_ref(x_1238);
 x_1242 = lean_box(0);
}
x_1243 = l___private_Lean_Elab_Match_12__getMVarSyntaxMVarId(x_1235);
x_1244 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_1244, 0, x_1243);
x_1245 = lean_array_push(x_1241, x_1244);
if (lean_is_scalar(x_1242)) {
 x_1246 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1246 = x_1242;
}
lean_ctor_set(x_1246, 0, x_1240);
lean_ctor_set(x_1246, 1, x_1245);
x_1247 = lean_st_ref_set(x_2, x_1246, x_1239);
lean_dec(x_2);
x_1248 = lean_ctor_get(x_1247, 1);
lean_inc(x_1248);
if (lean_is_exclusive(x_1247)) {
 lean_ctor_release(x_1247, 0);
 lean_ctor_release(x_1247, 1);
 x_1249 = x_1247;
} else {
 lean_dec_ref(x_1247);
 x_1249 = lean_box(0);
}
if (lean_is_scalar(x_1249)) {
 x_1250 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1250 = x_1249;
}
lean_ctor_set(x_1250, 0, x_1235);
lean_ctor_set(x_1250, 1, x_1248);
return x_1250;
}
}
else
{
lean_object* x_1251; lean_object* x_1252; lean_object* x_1253; uint8_t x_1254; 
lean_dec(x_1083);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_1251 = x_1;
} else {
 lean_dec_ref(x_1);
 x_1251 = lean_box(0);
}
x_1252 = l_Lean_Syntax_inhabited;
x_1253 = lean_array_get(x_1252, x_11, x_1078);
x_1254 = l_Lean_Syntax_isNone(x_1253);
if (x_1254 == 0)
{
lean_object* x_1255; lean_object* x_1256; lean_object* x_1257; lean_object* x_1258; lean_object* x_1259; lean_object* x_1260; 
lean_dec(x_1251);
lean_dec(x_11);
lean_dec(x_10);
x_1255 = l___private_Lean_Elab_Match_29__collect___main___closed__14;
x_1256 = l_Lean_throwErrorAt___at___private_Lean_Elab_Match_25__processVar___spec__1___rarg(x_1253, x_1255, x_2, x_1094, x_4, x_5, x_6, x_1068, x_8, x_1082);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1094);
lean_dec(x_2);
lean_dec(x_1253);
x_1257 = lean_ctor_get(x_1256, 0);
lean_inc(x_1257);
x_1258 = lean_ctor_get(x_1256, 1);
lean_inc(x_1258);
if (lean_is_exclusive(x_1256)) {
 lean_ctor_release(x_1256, 0);
 lean_ctor_release(x_1256, 1);
 x_1259 = x_1256;
} else {
 lean_dec_ref(x_1256);
 x_1259 = lean_box(0);
}
if (lean_is_scalar(x_1259)) {
 x_1260 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1260 = x_1259;
}
lean_ctor_set(x_1260, 0, x_1257);
lean_ctor_set(x_1260, 1, x_1258);
return x_1260;
}
else
{
lean_object* x_1261; lean_object* x_1262; lean_object* x_1263; lean_object* x_1264; lean_object* x_1265; 
lean_dec(x_1253);
x_1261 = lean_unsigned_to_nat(2u);
x_1262 = lean_array_get(x_1252, x_11, x_1261);
x_1263 = l_Lean_Syntax_getArgs(x_1262);
lean_dec(x_1262);
x_1264 = l___private_Lean_Elab_Match_29__collect___main___closed__15;
x_1265 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_29__collect___main___spec__1(x_1263, x_1264, x_2, x_1094, x_4, x_5, x_6, x_1068, x_8, x_1082);
lean_dec(x_1263);
if (lean_obj_tag(x_1265) == 0)
{
lean_object* x_1266; lean_object* x_1267; lean_object* x_1268; lean_object* x_1269; lean_object* x_1270; lean_object* x_1271; lean_object* x_1272; lean_object* x_1273; 
x_1266 = lean_ctor_get(x_1265, 0);
lean_inc(x_1266);
x_1267 = lean_ctor_get(x_1265, 1);
lean_inc(x_1267);
if (lean_is_exclusive(x_1265)) {
 lean_ctor_release(x_1265, 0);
 lean_ctor_release(x_1265, 1);
 x_1268 = x_1265;
} else {
 lean_dec_ref(x_1265);
 x_1268 = lean_box(0);
}
x_1269 = l_Lean_nullKind;
if (lean_is_scalar(x_1251)) {
 x_1270 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1270 = x_1251;
}
lean_ctor_set(x_1270, 0, x_1269);
lean_ctor_set(x_1270, 1, x_1266);
x_1271 = lean_array_set(x_11, x_1261, x_1270);
x_1272 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1272, 0, x_10);
lean_ctor_set(x_1272, 1, x_1271);
if (lean_is_scalar(x_1268)) {
 x_1273 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1273 = x_1268;
}
lean_ctor_set(x_1273, 0, x_1272);
lean_ctor_set(x_1273, 1, x_1267);
return x_1273;
}
else
{
lean_object* x_1274; lean_object* x_1275; lean_object* x_1276; lean_object* x_1277; 
lean_dec(x_1251);
lean_dec(x_11);
lean_dec(x_10);
x_1274 = lean_ctor_get(x_1265, 0);
lean_inc(x_1274);
x_1275 = lean_ctor_get(x_1265, 1);
lean_inc(x_1275);
if (lean_is_exclusive(x_1265)) {
 lean_ctor_release(x_1265, 0);
 lean_ctor_release(x_1265, 1);
 x_1276 = x_1265;
} else {
 lean_dec_ref(x_1265);
 x_1276 = lean_box(0);
}
if (lean_is_scalar(x_1276)) {
 x_1277 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1277 = x_1276;
}
lean_ctor_set(x_1277, 0, x_1274);
lean_ctor_set(x_1277, 1, x_1275);
return x_1277;
}
}
}
}
else
{
lean_object* x_1278; lean_object* x_1279; lean_object* x_1280; lean_object* x_1281; lean_object* x_1282; lean_object* x_1283; 
lean_dec(x_1083);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_1278 = x_1;
} else {
 lean_dec_ref(x_1);
 x_1278 = lean_box(0);
}
x_1279 = l_Lean_Syntax_inhabited;
x_1280 = lean_array_get(x_1279, x_11, x_1078);
x_1281 = l_Lean_Syntax_getArgs(x_1280);
lean_dec(x_1280);
x_1282 = l___private_Lean_Elab_Match_29__collect___main___closed__11;
x_1283 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_29__collect___main___spec__1(x_1281, x_1282, x_2, x_1094, x_4, x_5, x_6, x_1068, x_8, x_1082);
lean_dec(x_1281);
if (lean_obj_tag(x_1283) == 0)
{
lean_object* x_1284; lean_object* x_1285; lean_object* x_1286; lean_object* x_1287; lean_object* x_1288; lean_object* x_1289; lean_object* x_1290; lean_object* x_1291; 
x_1284 = lean_ctor_get(x_1283, 0);
lean_inc(x_1284);
x_1285 = lean_ctor_get(x_1283, 1);
lean_inc(x_1285);
if (lean_is_exclusive(x_1283)) {
 lean_ctor_release(x_1283, 0);
 lean_ctor_release(x_1283, 1);
 x_1286 = x_1283;
} else {
 lean_dec_ref(x_1283);
 x_1286 = lean_box(0);
}
x_1287 = l_Lean_nullKind;
if (lean_is_scalar(x_1278)) {
 x_1288 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1288 = x_1278;
}
lean_ctor_set(x_1288, 0, x_1287);
lean_ctor_set(x_1288, 1, x_1284);
x_1289 = lean_array_set(x_11, x_1078, x_1288);
x_1290 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_1290, 0, x_10);
lean_ctor_set(x_1290, 1, x_1289);
if (lean_is_scalar(x_1286)) {
 x_1291 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1291 = x_1286;
}
lean_ctor_set(x_1291, 0, x_1290);
lean_ctor_set(x_1291, 1, x_1285);
return x_1291;
}
else
{
lean_object* x_1292; lean_object* x_1293; lean_object* x_1294; lean_object* x_1295; 
lean_dec(x_1278);
lean_dec(x_11);
lean_dec(x_10);
x_1292 = lean_ctor_get(x_1283, 0);
lean_inc(x_1292);
x_1293 = lean_ctor_get(x_1283, 1);
lean_inc(x_1293);
if (lean_is_exclusive(x_1283)) {
 lean_ctor_release(x_1283, 0);
 lean_ctor_release(x_1283, 1);
 x_1294 = x_1283;
} else {
 lean_dec_ref(x_1283);
 x_1294 = lean_box(0);
}
if (lean_is_scalar(x_1294)) {
 x_1295 = lean_alloc_ctor(1, 2, 0);
} else {
 x_1295 = x_1294;
}
lean_ctor_set(x_1295, 0, x_1292);
lean_ctor_set(x_1295, 1, x_1293);
return x_1295;
}
}
}
else
{
lean_object* x_1296; lean_object* x_1297; 
lean_dec(x_1083);
lean_dec(x_11);
lean_dec(x_10);
x_1296 = l___private_Lean_Elab_Match_29__collect___main___closed__11;
x_1297 = l_Lean_Elab_Term_CollectPatternVars_processCtorApp(x_1296, x_1, x_2, x_1094, x_4, x_5, x_6, x_1068, x_8, x_1082);
lean_dec(x_1);
return x_1297;
}
}
}
}
case 3:
{
lean_object* x_1305; lean_object* x_1306; 
x_1305 = l___private_Lean_Elab_Match_29__collect___main___closed__11;
x_1306 = l___private_Lean_Elab_Match_26__processId(x_1305, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_1306;
}
default: 
{
lean_object* x_1307; 
lean_dec(x_1);
x_1307 = l___private_Lean_Elab_Match_16__throwInvalidPattern___rarg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_1307;
}
}
}
}
lean_object* l___private_Init_LeanInit_18__mapSepElemsMAux___main___at___private_Lean_Elab_Match_29__collect___main___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Init_LeanInit_18__mapSepElemsMAux___main___at___private_Lean_Elab_Match_29__collect___main___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_1);
return x_13;
}
}
lean_object* l_Array_mapSepElemsM___at___private_Lean_Elab_Match_29__collect___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Array_mapSepElemsM___at___private_Lean_Elab_Match_29__collect___main___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_Match_29__collect(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Match_29__collect___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
lean_object* l_Lean_Elab_logAt___at_Lean_Elab_Term_CollectPatternVars_main___spec__3(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_9, 3);
x_13 = l_Lean_replaceRef(x_1, x_12);
x_14 = l_Lean_Syntax_getPos(x_13);
lean_dec(x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_15 = lean_ctor_get(x_5, 0);
x_16 = lean_ctor_get(x_5, 1);
x_17 = lean_ctor_get(x_5, 2);
x_18 = lean_ctor_get(x_5, 5);
x_19 = l_Lean_addMessageContextFull___at_Lean_Meta_Lean_AddMessageContext___spec__1(x_2, x_7, x_8, x_9, x_10, x_11);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_unsigned_to_nat(0u);
x_23 = l_Lean_FileMap_toPosition(x_16, x_22);
x_24 = lean_box(0);
lean_inc(x_18);
lean_inc(x_17);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_17);
lean_ctor_set(x_25, 1, x_18);
x_26 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_20);
x_27 = l_String_splitAux___main___closed__1;
lean_inc(x_15);
x_28 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_28, 0, x_15);
lean_ctor_set(x_28, 1, x_23);
lean_ctor_set(x_28, 2, x_24);
lean_ctor_set(x_28, 3, x_27);
lean_ctor_set(x_28, 4, x_26);
lean_ctor_set_uint8(x_28, sizeof(void*)*5, x_3);
x_29 = lean_st_ref_take(x_6, x_21);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = !lean_is_exclusive(x_30);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_33 = lean_ctor_get(x_30, 2);
x_34 = l_Std_PersistentArray_push___rarg(x_33, x_28);
lean_ctor_set(x_30, 2, x_34);
x_35 = lean_st_ref_set(x_6, x_30, x_31);
x_36 = !lean_is_exclusive(x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_35, 0);
lean_dec(x_37);
x_38 = lean_box(0);
lean_ctor_set(x_35, 0, x_38);
return x_35;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_35, 1);
lean_inc(x_39);
lean_dec(x_35);
x_40 = lean_box(0);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_39);
return x_41;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_42 = lean_ctor_get(x_30, 0);
x_43 = lean_ctor_get(x_30, 1);
x_44 = lean_ctor_get(x_30, 2);
x_45 = lean_ctor_get(x_30, 3);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_30);
x_46 = l_Std_PersistentArray_push___rarg(x_44, x_28);
x_47 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_47, 0, x_42);
lean_ctor_set(x_47, 1, x_43);
lean_ctor_set(x_47, 2, x_46);
lean_ctor_set(x_47, 3, x_45);
x_48 = lean_st_ref_set(x_6, x_47, x_31);
x_49 = lean_ctor_get(x_48, 1);
lean_inc(x_49);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 x_50 = x_48;
} else {
 lean_dec_ref(x_48);
 x_50 = lean_box(0);
}
x_51 = lean_box(0);
if (lean_is_scalar(x_50)) {
 x_52 = lean_alloc_ctor(0, 2, 0);
} else {
 x_52 = x_50;
}
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_49);
return x_52;
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_53 = lean_ctor_get(x_14, 0);
lean_inc(x_53);
lean_dec(x_14);
x_54 = lean_ctor_get(x_5, 0);
x_55 = lean_ctor_get(x_5, 1);
x_56 = lean_ctor_get(x_5, 2);
x_57 = lean_ctor_get(x_5, 5);
x_58 = l_Lean_addMessageContextFull___at_Lean_Meta_Lean_AddMessageContext___spec__1(x_2, x_7, x_8, x_9, x_10, x_11);
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
x_61 = l_Lean_FileMap_toPosition(x_55, x_53);
x_62 = lean_box(0);
lean_inc(x_57);
lean_inc(x_56);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_56);
lean_ctor_set(x_63, 1, x_57);
x_64 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_59);
x_65 = l_String_splitAux___main___closed__1;
lean_inc(x_54);
x_66 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_66, 0, x_54);
lean_ctor_set(x_66, 1, x_61);
lean_ctor_set(x_66, 2, x_62);
lean_ctor_set(x_66, 3, x_65);
lean_ctor_set(x_66, 4, x_64);
lean_ctor_set_uint8(x_66, sizeof(void*)*5, x_3);
x_67 = lean_st_ref_take(x_6, x_60);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = !lean_is_exclusive(x_68);
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
x_71 = lean_ctor_get(x_68, 2);
x_72 = l_Std_PersistentArray_push___rarg(x_71, x_66);
lean_ctor_set(x_68, 2, x_72);
x_73 = lean_st_ref_set(x_6, x_68, x_69);
x_74 = !lean_is_exclusive(x_73);
if (x_74 == 0)
{
lean_object* x_75; lean_object* x_76; 
x_75 = lean_ctor_get(x_73, 0);
lean_dec(x_75);
x_76 = lean_box(0);
lean_ctor_set(x_73, 0, x_76);
return x_73;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_73, 1);
lean_inc(x_77);
lean_dec(x_73);
x_78 = lean_box(0);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_77);
return x_79;
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_80 = lean_ctor_get(x_68, 0);
x_81 = lean_ctor_get(x_68, 1);
x_82 = lean_ctor_get(x_68, 2);
x_83 = lean_ctor_get(x_68, 3);
lean_inc(x_83);
lean_inc(x_82);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_68);
x_84 = l_Std_PersistentArray_push___rarg(x_82, x_66);
x_85 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_85, 0, x_80);
lean_ctor_set(x_85, 1, x_81);
lean_ctor_set(x_85, 2, x_84);
lean_ctor_set(x_85, 3, x_83);
x_86 = lean_st_ref_set(x_6, x_85, x_69);
x_87 = lean_ctor_get(x_86, 1);
lean_inc(x_87);
if (lean_is_exclusive(x_86)) {
 lean_ctor_release(x_86, 0);
 lean_ctor_release(x_86, 1);
 x_88 = x_86;
} else {
 lean_dec_ref(x_86);
 x_88 = lean_box(0);
}
x_89 = lean_box(0);
if (lean_is_scalar(x_88)) {
 x_90 = lean_alloc_ctor(0, 2, 0);
} else {
 x_90 = x_88;
}
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_87);
return x_90;
}
}
}
}
lean_object* l_Lean_Elab_log___at_Lean_Elab_Term_CollectPatternVars_main___spec__2(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_8, 3);
x_12 = l_Lean_Elab_logAt___at_Lean_Elab_Term_CollectPatternVars_main___spec__3(x_11, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_12;
}
}
lean_object* l_Lean_Elab_logTrace___at_Lean_Elab_Term_CollectPatternVars_main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; lean_object* x_13; 
x_11 = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(x_11, 0, x_1);
lean_ctor_set(x_11, 1, x_2);
x_12 = 0;
x_13 = l_Lean_Elab_log___at_Lean_Elab_Term_CollectPatternVars_main___spec__2(x_11, x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
}
lean_object* _init_l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__4___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("collecting variables at pattern: ");
return x_1;
}
}
lean_object* _init_l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__4___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__4___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__4___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__4___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_array_get_size(x_2);
x_12 = lean_nat_dec_lt(x_1, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_13 = x_2;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_10);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_15 = lean_array_fget(x_2, x_1);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_fset(x_2, x_1, x_16);
x_18 = x_15;
x_19 = lean_ctor_get(x_8, 0);
lean_inc(x_19);
x_20 = l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__10;
x_21 = l_Lean_checkTraceOption(x_19, x_20);
lean_dec(x_19);
if (x_21 == 0)
{
lean_object* x_22; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_22 = l___private_Lean_Elab_Match_29__collect___main(x_18, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_add(x_1, x_25);
x_27 = x_23;
x_28 = lean_array_fset(x_17, x_1, x_27);
lean_dec(x_1);
x_1 = x_26;
x_2 = x_28;
x_10 = x_24;
goto _start;
}
else
{
uint8_t x_30; 
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_22);
if (x_30 == 0)
{
return x_22;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_22, 0);
x_32 = lean_ctor_get(x_22, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_22);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
lean_inc(x_18);
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_18);
x_35 = l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__4___closed__3;
x_36 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
x_37 = l_Lean_Elab_logTrace___at_Lean_Elab_Term_CollectPatternVars_main___spec__1(x_20, x_36, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_39 = l___private_Lean_Elab_Match_29__collect___main(x_18, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_38);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec(x_39);
x_42 = lean_unsigned_to_nat(1u);
x_43 = lean_nat_add(x_1, x_42);
x_44 = x_40;
x_45 = lean_array_fset(x_17, x_1, x_44);
lean_dec(x_1);
x_1 = x_43;
x_2 = x_45;
x_10 = x_41;
goto _start;
}
else
{
uint8_t x_47; 
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_39);
if (x_47 == 0)
{
return x_39;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_39, 0);
x_49 = lean_ctor_get(x_39, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_39);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
}
}
}
lean_object* l_Lean_Elab_Term_CollectPatternVars_main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_1);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_ctor_get(x_1, 0);
x_12 = lean_ctor_get(x_1, 1);
x_13 = lean_ctor_get(x_1, 2);
x_14 = x_12;
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__4), 10, 2);
lean_closure_set(x_16, 0, x_15);
lean_closure_set(x_16, 1, x_14);
x_17 = x_16;
x_18 = lean_apply_8(x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_ctor_set(x_1, 1, x_20);
lean_ctor_set(x_18, 0, x_1);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_18, 0);
x_22 = lean_ctor_get(x_18, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_18);
lean_ctor_set(x_1, 1, x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_1);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_free_object(x_1);
lean_dec(x_13);
lean_dec(x_11);
x_24 = !lean_is_exclusive(x_18);
if (x_24 == 0)
{
return x_18;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_18, 0);
x_26 = lean_ctor_get(x_18, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_18);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_28 = lean_ctor_get(x_1, 0);
x_29 = lean_ctor_get(x_1, 1);
x_30 = lean_ctor_get(x_1, 2);
lean_inc(x_30);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_1);
x_31 = x_29;
x_32 = lean_unsigned_to_nat(0u);
x_33 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__4), 10, 2);
lean_closure_set(x_33, 0, x_32);
lean_closure_set(x_33, 1, x_31);
x_34 = x_33;
x_35 = lean_apply_8(x_34, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
if (lean_is_exclusive(x_35)) {
 lean_ctor_release(x_35, 0);
 lean_ctor_release(x_35, 1);
 x_38 = x_35;
} else {
 lean_dec_ref(x_35);
 x_38 = lean_box(0);
}
x_39 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_39, 0, x_28);
lean_ctor_set(x_39, 1, x_36);
lean_ctor_set(x_39, 2, x_30);
if (lean_is_scalar(x_38)) {
 x_40 = lean_alloc_ctor(0, 2, 0);
} else {
 x_40 = x_38;
}
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_37);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_30);
lean_dec(x_28);
x_41 = lean_ctor_get(x_35, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_35, 1);
lean_inc(x_42);
if (lean_is_exclusive(x_35)) {
 lean_ctor_release(x_35, 0);
 lean_ctor_release(x_35, 1);
 x_43 = x_35;
} else {
 lean_dec_ref(x_35);
 x_43 = lean_box(0);
}
if (lean_is_scalar(x_43)) {
 x_44 = lean_alloc_ctor(1, 2, 0);
} else {
 x_44 = x_43;
}
lean_ctor_set(x_44, 0, x_41);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
}
}
lean_object* l_Lean_Elab_logAt___at_Lean_Elab_Term_CollectPatternVars_main___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_3);
lean_dec(x_3);
x_13 = l_Lean_Elab_logAt___at_Lean_Elab_Term_CollectPatternVars_main___spec__3(x_1, x_2, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_13;
}
}
lean_object* l_Lean_Elab_log___at_Lean_Elab_Term_CollectPatternVars_main___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; lean_object* x_12; 
x_11 = lean_unbox(x_2);
lean_dec(x_2);
x_12 = l_Lean_Elab_log___at_Lean_Elab_Term_CollectPatternVars_main___spec__2(x_1, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
}
lean_object* l_Lean_Elab_logTrace___at_Lean_Elab_Term_CollectPatternVars_main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_logTrace___at_Lean_Elab_Term_CollectPatternVars_main___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
lean_object* _init_l___private_Lean_Elab_Match_30__collectPatternVars___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_NameSet_empty;
x_2 = l_Array_empty___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Match_30__collectPatternVars(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = l___private_Lean_Elab_Match_30__collectPatternVars___closed__1;
x_10 = lean_st_mk_ref(x_9, x_8);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_11);
x_13 = l_Lean_Elab_Term_CollectPatternVars_main(x_1, x_11, x_2, x_3, x_4, x_5, x_6, x_7, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_st_ref_get(x_11, x_15);
lean_dec(x_11);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_14);
lean_ctor_set(x_16, 0, x_20);
return x_16;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_16, 0);
x_22 = lean_ctor_get(x_16, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_16);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_14);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_22);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_dec(x_11);
x_26 = !lean_is_exclusive(x_13);
if (x_26 == 0)
{
return x_13;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_13, 0);
x_28 = lean_ctor_get(x_13, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_13);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
lean_object* l_Lean_Meta_mkFreshExprMVarWithId___at___private_Lean_Elab_Match_31__withPatternVarsAux___main___spec__1(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Meta_mkFreshExprMVarWithIdImpl(x_1, x_2, x_3, x_4, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
lean_object* l_Array_forMAux___main___at___private_Lean_Elab_Match_31__withPatternVarsAux___main___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_array_get_size(x_1);
x_11 = lean_nat_dec_lt(x_2, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
else
{
lean_object* x_14; 
x_14 = lean_array_fget(x_1, x_2);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_mkFVar(x_16);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_18 = l_Lean_Meta_inferType___at_Lean_Elab_Term_tryLiftAndCoe___spec__2(x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_19);
x_22 = 0;
x_23 = lean_box(0);
lean_inc(x_5);
x_24 = l_Lean_Meta_mkFreshExprMVarWithIdImpl(x_15, x_21, x_22, x_23, x_5, x_6, x_7, x_8, x_20);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
lean_dec(x_24);
x_26 = lean_unsigned_to_nat(1u);
x_27 = lean_nat_add(x_2, x_26);
lean_dec(x_2);
x_2 = x_27;
x_9 = x_25;
goto _start;
}
else
{
uint8_t x_29; 
lean_dec(x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_29 = !lean_is_exclusive(x_18);
if (x_29 == 0)
{
return x_18;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_18, 0);
x_31 = lean_ctor_get(x_18, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_18);
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
lean_object* x_33; lean_object* x_34; 
lean_dec(x_14);
x_33 = lean_unsigned_to_nat(1u);
x_34 = lean_nat_add(x_2, x_33);
lean_dec(x_2);
x_2 = x_34;
goto _start;
}
}
}
}
lean_object* l___private_Lean_Elab_Match_31__withPatternVarsAux___main___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_1, x_13);
x_15 = l_Lean_Expr_fvarId_x21(x_5);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_15);
x_17 = lean_array_push(x_2, x_16);
x_18 = l___private_Lean_Elab_Match_31__withPatternVarsAux___main___rarg(x_3, x_4, x_14, x_17, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_18;
}
}
lean_object* l___private_Lean_Elab_Match_31__withPatternVarsAux___main___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_1, x_14);
x_16 = l_Lean_Expr_fvarId_x21(x_6);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_2);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_array_push(x_3, x_17);
x_19 = l___private_Lean_Elab_Match_31__withPatternVarsAux___main___rarg(x_4, x_5, x_15, x_18, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_19;
}
}
lean_object* l___private_Lean_Elab_Match_31__withPatternVarsAux___main___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_1);
x_13 = lean_nat_dec_lt(x_3, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_3);
lean_dec(x_1);
x_14 = lean_unsigned_to_nat(0u);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_15 = l_Array_forMAux___main___at___private_Lean_Elab_Match_31__withPatternVarsAux___main___spec__2(x_4, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_apply_8(x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_16);
return x_17;
}
else
{
uint8_t x_18; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_18 = !lean_is_exclusive(x_15);
if (x_18 == 0)
{
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
else
{
lean_object* x_22; 
x_22 = lean_array_fget(x_1, x_3);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_31; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
lean_dec(x_22);
x_24 = 0;
x_25 = lean_box(0);
lean_inc(x_7);
x_26 = l_Lean_Meta_mkFreshTypeMVar___at___private_Lean_Elab_Term_6__exceptionToSorry___spec__2(x_24, x_25, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_31__withPatternVarsAux___main___rarg___lambda__1___boxed), 12, 4);
lean_closure_set(x_29, 0, x_3);
lean_closure_set(x_29, 1, x_4);
lean_closure_set(x_29, 2, x_1);
lean_closure_set(x_29, 3, x_2);
x_30 = 0;
x_31 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_16__elabImplicitLambda___main___spec__1___rarg(x_23, x_30, x_27, x_29, x_5, x_6, x_7, x_8, x_9, x_10, x_28);
return x_31;
}
else
{
lean_object* x_32; uint8_t x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; lean_object* x_43; 
x_32 = lean_ctor_get(x_22, 0);
lean_inc(x_32);
lean_dec(x_22);
x_33 = 0;
x_34 = lean_box(0);
lean_inc(x_7);
x_35 = l_Lean_Meta_mkFreshTypeMVar___at___private_Lean_Elab_Term_6__exceptionToSorry___spec__2(x_33, x_34, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
lean_inc(x_5);
x_38 = l_Lean_Elab_Term_mkFreshBinderName(x_5, x_6, x_7, x_8, x_9, x_10, x_37);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_31__withPatternVarsAux___main___rarg___lambda__2___boxed), 13, 5);
lean_closure_set(x_41, 0, x_3);
lean_closure_set(x_41, 1, x_32);
lean_closure_set(x_41, 2, x_4);
lean_closure_set(x_41, 3, x_1);
lean_closure_set(x_41, 4, x_2);
x_42 = 0;
x_43 = l_Lean_Meta_withLocalDecl___at___private_Lean_Elab_Term_16__elabImplicitLambda___main___spec__1___rarg(x_39, x_42, x_36, x_41, x_5, x_6, x_7, x_8, x_9, x_10, x_40);
return x_43;
}
}
}
}
lean_object* l___private_Lean_Elab_Match_31__withPatternVarsAux___main(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_31__withPatternVarsAux___main___rarg), 11, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_mkFreshExprMVarWithId___at___private_Lean_Elab_Match_31__withPatternVarsAux___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; lean_object* x_13; 
x_12 = lean_unbox(x_3);
lean_dec(x_3);
x_13 = l_Lean_Meta_mkFreshExprMVarWithId___at___private_Lean_Elab_Match_31__withPatternVarsAux___main___spec__1(x_1, x_2, x_12, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
return x_13;
}
}
lean_object* l_Array_forMAux___main___at___private_Lean_Elab_Match_31__withPatternVarsAux___main___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Array_forMAux___main___at___private_Lean_Elab_Match_31__withPatternVarsAux___main___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Match_31__withPatternVarsAux___main___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Lean_Elab_Match_31__withPatternVarsAux___main___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
lean_dec(x_1);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Match_31__withPatternVarsAux___main___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l___private_Lean_Elab_Match_31__withPatternVarsAux___main___rarg___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_6);
lean_dec(x_1);
return x_14;
}
}
lean_object* l___private_Lean_Elab_Match_31__withPatternVarsAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Match_31__withPatternVarsAux___main___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Match_31__withPatternVarsAux(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_31__withPatternVarsAux___rarg), 11, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Match_32__withPatternVars___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = l_Array_empty___closed__1;
x_12 = l___private_Lean_Elab_Match_31__withPatternVarsAux___main___rarg(x_1, x_2, x_10, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Match_32__withPatternVars(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_32__withPatternVars___rarg), 9, 0);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_33__elabPatternsAux___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected match type");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_33__elabPatternsAux___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_33__elabPatternsAux___main___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_33__elabPatternsAux___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_33__elabPatternsAux___main___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Match_33__elabPatternsAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_1);
x_13 = lean_nat_dec_lt(x_2, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_4);
lean_ctor_set(x_14, 1, x_3);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_11);
return x_15;
}
else
{
lean_object* x_16; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_16 = l_Lean_Meta_whnf___at___private_Lean_Elab_Term_3__isTypeApp_x3f___spec__1(x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 7)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; 
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_17, 2);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_array_fget(x_1, x_2);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_19);
x_23 = 1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_24 = l_Lean_Elab_Term_elabTermEnsuringType(x_21, x_22, x_23, x_5, x_6, x_7, x_8, x_9, x_10, x_18);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_2, x_27);
lean_dec(x_2);
x_29 = lean_expr_instantiate1(x_20, x_25);
lean_dec(x_20);
x_30 = lean_array_push(x_4, x_25);
x_2 = x_28;
x_3 = x_29;
x_4 = x_30;
x_11 = x_26;
goto _start;
}
else
{
uint8_t x_32; 
lean_dec(x_20);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_32 = !lean_is_exclusive(x_24);
if (x_32 == 0)
{
return x_24;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_24, 0);
x_34 = lean_ctor_get(x_24, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_24);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_17);
lean_dec(x_4);
lean_dec(x_2);
x_36 = lean_ctor_get(x_16, 1);
lean_inc(x_36);
lean_dec(x_16);
x_37 = l___private_Lean_Elab_Match_33__elabPatternsAux___main___closed__3;
x_38 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_37, x_5, x_6, x_7, x_8, x_9, x_10, x_36);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_38;
}
}
else
{
uint8_t x_39; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_39 = !lean_is_exclusive(x_16);
if (x_39 == 0)
{
return x_16;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_16, 0);
x_41 = lean_ctor_get(x_16, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_16);
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
}
}
lean_object* l___private_Lean_Elab_Match_33__elabPatternsAux___main___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Match_33__elabPatternsAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Match_33__elabPatternsAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Match_33__elabPatternsAux___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Match_33__elabPatternsAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Match_33__elabPatternsAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Lean_Meta_instantiateLocalDeclMVars___at_Lean_Elab_Term_finalizePatternDecls___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_1, 3);
x_11 = l_Lean_Meta_instantiateMVars___at_Lean_Meta_instantiateLocalDeclMVars___spec__1(x_10, x_4, x_5, x_6, x_7, x_8);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_11, 0);
lean_ctor_set(x_1, 3, x_13);
lean_ctor_set(x_11, 0, x_1);
return x_11;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_11, 0);
x_15 = lean_ctor_get(x_11, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_11);
lean_ctor_set(x_1, 3, x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_17 = lean_ctor_get(x_1, 0);
x_18 = lean_ctor_get(x_1, 1);
x_19 = lean_ctor_get(x_1, 2);
x_20 = lean_ctor_get(x_1, 3);
x_21 = lean_ctor_get_uint8(x_1, sizeof(void*)*4);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_1);
x_22 = l_Lean_Meta_instantiateMVars___at_Lean_Meta_instantiateLocalDeclMVars___spec__1(x_20, x_4, x_5, x_6, x_7, x_8);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
if (lean_is_exclusive(x_22)) {
 lean_ctor_release(x_22, 0);
 lean_ctor_release(x_22, 1);
 x_25 = x_22;
} else {
 lean_dec_ref(x_22);
 x_25 = lean_box(0);
}
x_26 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_26, 0, x_17);
lean_ctor_set(x_26, 1, x_18);
lean_ctor_set(x_26, 2, x_19);
lean_ctor_set(x_26, 3, x_23);
lean_ctor_set_uint8(x_26, sizeof(void*)*4, x_21);
if (lean_is_scalar(x_25)) {
 x_27 = lean_alloc_ctor(0, 2, 0);
} else {
 x_27 = x_25;
}
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_24);
return x_27;
}
}
else
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_1);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
x_29 = lean_ctor_get(x_1, 3);
x_30 = lean_ctor_get(x_1, 4);
x_31 = l_Lean_Meta_instantiateMVars___at_Lean_Meta_instantiateLocalDeclMVars___spec__1(x_29, x_4, x_5, x_6, x_7, x_8);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Meta_instantiateMVars___at_Lean_Meta_instantiateLocalDeclMVars___spec__1(x_30, x_4, x_5, x_6, x_7, x_33);
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_34, 0);
lean_ctor_set(x_1, 4, x_36);
lean_ctor_set(x_1, 3, x_32);
lean_ctor_set(x_34, 0, x_1);
return x_34;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_34, 0);
x_38 = lean_ctor_get(x_34, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_34);
lean_ctor_set(x_1, 4, x_37);
lean_ctor_set(x_1, 3, x_32);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_1);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_40 = lean_ctor_get(x_1, 0);
x_41 = lean_ctor_get(x_1, 1);
x_42 = lean_ctor_get(x_1, 2);
x_43 = lean_ctor_get(x_1, 3);
x_44 = lean_ctor_get(x_1, 4);
x_45 = lean_ctor_get_uint8(x_1, sizeof(void*)*5);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_1);
x_46 = l_Lean_Meta_instantiateMVars___at_Lean_Meta_instantiateLocalDeclMVars___spec__1(x_43, x_4, x_5, x_6, x_7, x_8);
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = l_Lean_Meta_instantiateMVars___at_Lean_Meta_instantiateLocalDeclMVars___spec__1(x_44, x_4, x_5, x_6, x_7, x_48);
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 x_52 = x_49;
} else {
 lean_dec_ref(x_49);
 x_52 = lean_box(0);
}
x_53 = lean_alloc_ctor(1, 5, 1);
lean_ctor_set(x_53, 0, x_40);
lean_ctor_set(x_53, 1, x_41);
lean_ctor_set(x_53, 2, x_42);
lean_ctor_set(x_53, 3, x_47);
lean_ctor_set(x_53, 4, x_50);
lean_ctor_set_uint8(x_53, sizeof(void*)*5, x_45);
if (lean_is_scalar(x_52)) {
 x_54 = lean_alloc_ctor(0, 2, 0);
} else {
 x_54 = x_52;
}
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_51);
return x_54;
}
}
}
}
lean_object* _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("finalizePatternDecls: ");
return x_1;
}
}
lean_object* _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("finalizePatternDecls: mvarId: ");
return x_1;
}
}
lean_object* _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(", fvarId: ");
return x_1;
}
}
lean_object* _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__7;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_2);
x_13 = lean_nat_dec_lt(x_3, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_7);
lean_dec(x_3);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_4);
lean_ctor_set(x_14, 1, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_array_fget(x_2, x_3);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_add(x_3, x_16);
lean_dec(x_3);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_18 = lean_ctor_get(x_15, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
lean_dec(x_15);
lean_inc(x_18);
x_20 = l_Lean_mkMVar(x_18);
x_21 = l_Lean_Meta_instantiateMVars___at_Lean_Elab_Term_MVarErrorContext_logError___spec__1(x_20, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_68 = lean_ctor_get(x_9, 0);
x_69 = l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__10;
x_70 = l_Lean_checkTraceOption(x_68, x_69);
if (x_70 == 0)
{
lean_dec(x_18);
x_24 = x_23;
goto block_67;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_71 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_71, 0, x_18);
x_72 = l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__6;
x_73 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_71);
x_74 = l___private_Lean_Meta_ExprDefEq_8__checkTypesAndAssign___lambda__1___closed__1;
x_75 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
lean_inc(x_22);
x_76 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_76, 0, x_22);
x_77 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
x_78 = l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__9;
x_79 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
lean_inc(x_19);
x_80 = l_Lean_mkFVar(x_19);
x_81 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_81, 0, x_80);
x_82 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_82, 0, x_79);
lean_ctor_set(x_82, 1, x_81);
x_83 = l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_69, x_82, x_5, x_6, x_7, x_8, x_9, x_10, x_23);
x_84 = lean_ctor_get(x_83, 1);
lean_inc(x_84);
lean_dec(x_83);
x_24 = x_84;
goto block_67;
}
block_67:
{
if (lean_obj_tag(x_22) == 2)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_25 = lean_ctor_get(x_22, 0);
lean_inc(x_25);
lean_dec(x_22);
lean_inc(x_19);
x_26 = l_Lean_mkFVar(x_19);
lean_inc(x_26);
lean_inc(x_25);
x_27 = l_Lean_Meta_assignExprMVar___at_Lean_Elab_Term_synthesizeInstMVarCore___spec__2(x_25, x_26, x_5, x_6, x_7, x_8, x_9, x_10, x_24);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = lean_ctor_get(x_9, 0);
x_30 = l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__10;
x_31 = l_Lean_checkTraceOption(x_29, x_30);
if (x_31 == 0)
{
lean_object* x_32; 
lean_dec(x_26);
lean_dec(x_25);
lean_inc(x_7);
x_32 = l_Lean_Meta_getLocalDecl___at___private_Lean_Elab_Match_5__mkUserNameFor___spec__1(x_19, x_5, x_6, x_7, x_8, x_9, x_10, x_28);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = l_Lean_Meta_instantiateLocalDeclMVars___at_Lean_Elab_Term_finalizePatternDecls___spec__1(x_33, x_5, x_6, x_7, x_8, x_9, x_10, x_34);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_array_push(x_4, x_36);
x_3 = x_17;
x_4 = x_38;
x_11 = x_37;
goto _start;
}
else
{
uint8_t x_40; 
lean_dec(x_17);
lean_dec(x_7);
lean_dec(x_4);
x_40 = !lean_is_exclusive(x_32);
if (x_40 == 0)
{
return x_32;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_32, 0);
x_42 = lean_ctor_get(x_32, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_32);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_44 = l_Lean_mkMVar(x_25);
x_45 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_45, 0, x_44);
x_46 = l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__3;
x_47 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
x_48 = l___private_Lean_Meta_ExprDefEq_8__checkTypesAndAssign___lambda__1___closed__1;
x_49 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_50, 0, x_26);
x_51 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
x_52 = l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_30, x_51, x_5, x_6, x_7, x_8, x_9, x_10, x_28);
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
lean_dec(x_52);
lean_inc(x_7);
x_54 = l_Lean_Meta_getLocalDecl___at___private_Lean_Elab_Match_5__mkUserNameFor___spec__1(x_19, x_5, x_6, x_7, x_8, x_9, x_10, x_53);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = l_Lean_Meta_instantiateLocalDeclMVars___at_Lean_Elab_Term_finalizePatternDecls___spec__1(x_55, x_5, x_6, x_7, x_8, x_9, x_10, x_56);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = lean_array_push(x_4, x_58);
x_3 = x_17;
x_4 = x_60;
x_11 = x_59;
goto _start;
}
else
{
uint8_t x_62; 
lean_dec(x_17);
lean_dec(x_7);
lean_dec(x_4);
x_62 = !lean_is_exclusive(x_54);
if (x_62 == 0)
{
return x_54;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_54, 0);
x_64 = lean_ctor_get(x_54, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_54);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
}
else
{
lean_dec(x_22);
lean_dec(x_19);
x_3 = x_17;
x_11 = x_24;
goto _start;
}
}
}
else
{
lean_object* x_85; lean_object* x_86; 
x_85 = lean_ctor_get(x_15, 0);
lean_inc(x_85);
lean_dec(x_15);
lean_inc(x_7);
x_86 = l_Lean_Meta_getLocalDecl___at___private_Lean_Elab_Match_5__mkUserNameFor___spec__1(x_85, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_86) == 0)
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_86, 1);
lean_inc(x_88);
lean_dec(x_86);
x_89 = l_Lean_Meta_instantiateLocalDeclMVars___at_Lean_Elab_Term_finalizePatternDecls___spec__1(x_87, x_5, x_6, x_7, x_8, x_9, x_10, x_88);
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_89, 1);
lean_inc(x_91);
lean_dec(x_89);
x_92 = lean_array_push(x_4, x_90);
x_3 = x_17;
x_4 = x_92;
x_11 = x_91;
goto _start;
}
else
{
uint8_t x_94; 
lean_dec(x_17);
lean_dec(x_7);
lean_dec(x_4);
x_94 = !lean_is_exclusive(x_86);
if (x_94 == 0)
{
return x_86;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_95 = lean_ctor_get(x_86, 0);
x_96 = lean_ctor_get(x_86, 1);
lean_inc(x_96);
lean_inc(x_95);
lean_dec(x_86);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set(x_97, 1, x_96);
return x_97;
}
}
}
}
}
}
lean_object* l_Lean_Elab_Term_finalizePatternDecls(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Array_empty___closed__1;
x_11 = l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2(x_1, x_1, x_9, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
lean_object* l_Lean_Meta_instantiateLocalDeclMVars___at_Lean_Elab_Term_finalizePatternDecls___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Meta_instantiateLocalDeclMVars___at_Lean_Elab_Term_finalizePatternDecls___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_finalizePatternDecls___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_finalizePatternDecls(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
lean_object* l___private_Lean_Elab_Match_34__alreadyVisited(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_st_ref_get(x_2, x_9);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = l_Lean_NameSet_contains(x_13, x_1);
lean_dec(x_13);
x_15 = lean_box(x_14);
lean_ctor_set(x_10, 0, x_15);
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_10);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_NameSet_contains(x_18, x_1);
lean_dec(x_18);
x_20 = lean_box(x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_17);
return x_21;
}
}
}
lean_object* l___private_Lean_Elab_Match_34__alreadyVisited___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Match_34__alreadyVisited(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Match_35__markAsVisited(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_st_ref_take(x_2, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = lean_ctor_get(x_11, 0);
x_15 = lean_box(0);
x_16 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_14, x_1, x_15);
lean_ctor_set(x_11, 0, x_16);
x_17 = lean_st_ref_set(x_2, x_11, x_12);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
lean_ctor_set(x_17, 0, x_15);
return x_17;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_15);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_22 = lean_ctor_get(x_11, 0);
x_23 = lean_ctor_get(x_11, 1);
x_24 = lean_ctor_get(x_11, 2);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_dec(x_11);
x_25 = lean_box(0);
x_26 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_22, x_1, x_25);
x_27 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_23);
lean_ctor_set(x_27, 2, x_24);
x_28 = lean_st_ref_set(x_2, x_27, x_12);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_30 = x_28;
} else {
 lean_dec_ref(x_28);
 x_30 = lean_box(0);
}
if (lean_is_scalar(x_30)) {
 x_31 = lean_alloc_ctor(0, 2, 0);
} else {
 x_31 = x_30;
}
lean_ctor_set(x_31, 0, x_25);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
}
lean_object* l___private_Lean_Elab_Match_35__markAsVisited___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Match_35__markAsVisited(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Match_36__throwInvalidPattern___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_7, 3);
x_11 = l_Lean_addMessageContextFull___at_Lean_Meta_Lean_AddMessageContext___spec__1(x_1, x_5, x_6, x_7, x_8, x_9);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_10);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
lean_ctor_set_tag(x_11, 1);
lean_ctor_set(x_11, 0, x_14);
return x_11;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_11, 0);
x_16 = lean_ctor_get(x_11, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_11);
lean_inc(x_10);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_10);
lean_ctor_set(x_17, 1, x_15);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Match_36__throwInvalidPattern___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at___private_Lean_Elab_Match_36__throwInvalidPattern___spec__1___rarg___boxed), 9, 0);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_36__throwInvalidPattern___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid pattern ");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_36__throwInvalidPattern___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_36__throwInvalidPattern___rarg___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_36__throwInvalidPattern___rarg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_36__throwInvalidPattern___rarg___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Match_36__throwInvalidPattern___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = l_Lean_indentExpr(x_1);
x_11 = l___private_Lean_Elab_Match_36__throwInvalidPattern___rarg___closed__3;
x_12 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
x_13 = l_Lean_throwError___at___private_Lean_Elab_Match_36__throwInvalidPattern___spec__1___rarg(x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Match_36__throwInvalidPattern(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_36__throwInvalidPattern___rarg___boxed), 9, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Match_36__throwInvalidPattern___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwError___at___private_Lean_Elab_Match_36__throwInvalidPattern___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Match_36__throwInvalidPattern___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Match_36__throwInvalidPattern___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Lean_Meta_getExprMVarAssignment_x3f___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_st_ref_get(x_6, x_9);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_metavar_ctx_get_expr_assignment(x_13, x_1);
lean_ctor_set(x_10, 0, x_14);
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_10, 0);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_10);
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_metavar_ctx_get_expr_assignment(x_17, x_1);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_16);
return x_19;
}
}
}
lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = lean_st_ref_get(x_1, x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_4, 2);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_8 = lean_ctor_get(x_5, 0);
x_9 = lean_ctor_get(x_5, 1);
lean_inc(x_9);
lean_inc(x_8);
x_10 = lean_name_mk_numeral(x_8, x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_9, x_11);
lean_dec(x_9);
lean_ctor_set(x_5, 1, x_12);
x_13 = lean_st_ref_take(x_1, x_6);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_14, 2);
lean_dec(x_17);
lean_ctor_set(x_14, 2, x_5);
x_18 = lean_st_ref_set(x_1, x_14, x_15);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
lean_ctor_set(x_18, 0, x_10);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_10);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_23 = lean_ctor_get(x_14, 0);
x_24 = lean_ctor_get(x_14, 1);
x_25 = lean_ctor_get(x_14, 3);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_14);
x_26 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_26, 0, x_23);
lean_ctor_set(x_26, 1, x_24);
lean_ctor_set(x_26, 2, x_5);
lean_ctor_set(x_26, 3, x_25);
x_27 = lean_st_ref_set(x_1, x_26, x_15);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 lean_ctor_release(x_27, 1);
 x_29 = x_27;
} else {
 lean_dec_ref(x_27);
 x_29 = lean_box(0);
}
if (lean_is_scalar(x_29)) {
 x_30 = lean_alloc_ctor(0, 2, 0);
} else {
 x_30 = x_29;
}
lean_ctor_set(x_30, 0, x_10);
lean_ctor_set(x_30, 1, x_28);
return x_30;
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_31 = lean_ctor_get(x_5, 0);
x_32 = lean_ctor_get(x_5, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_5);
lean_inc(x_32);
lean_inc(x_31);
x_33 = lean_name_mk_numeral(x_31, x_32);
x_34 = lean_unsigned_to_nat(1u);
x_35 = lean_nat_add(x_32, x_34);
lean_dec(x_32);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_31);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_st_ref_take(x_1, x_6);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = lean_ctor_get(x_38, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_38, 1);
lean_inc(x_41);
x_42 = lean_ctor_get(x_38, 3);
lean_inc(x_42);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 lean_ctor_release(x_38, 1);
 lean_ctor_release(x_38, 2);
 lean_ctor_release(x_38, 3);
 x_43 = x_38;
} else {
 lean_dec_ref(x_38);
 x_43 = lean_box(0);
}
if (lean_is_scalar(x_43)) {
 x_44 = lean_alloc_ctor(0, 4, 0);
} else {
 x_44 = x_43;
}
lean_ctor_set(x_44, 0, x_40);
lean_ctor_set(x_44, 1, x_41);
lean_ctor_set(x_44, 2, x_36);
lean_ctor_set(x_44, 3, x_42);
x_45 = lean_st_ref_set(x_1, x_44, x_39);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_47 = x_45;
} else {
 lean_dec_ref(x_45);
 x_47 = lean_box(0);
}
if (lean_is_scalar(x_47)) {
 x_48 = lean_alloc_ctor(0, 2, 0);
} else {
 x_48 = x_47;
}
lean_ctor_set(x_48, 0, x_33);
lean_ctor_set(x_48, 1, x_46);
return x_48;
}
}
}
lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Lean_mkFreshId___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__2___rarg___boxed), 2, 0);
return x_7;
}
}
lean_object* l_Lean_Meta_inferType___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_7, 2);
lean_inc(x_12);
x_13 = lean_ctor_get(x_7, 3);
lean_inc(x_13);
x_14 = lean_nat_dec_eq(x_11, x_12);
if (x_14 == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_7);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_16 = lean_ctor_get(x_7, 3);
lean_dec(x_16);
x_17 = lean_ctor_get(x_7, 2);
lean_dec(x_17);
x_18 = lean_ctor_get(x_7, 1);
lean_dec(x_18);
x_19 = lean_ctor_get(x_7, 0);
lean_dec(x_19);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_11, x_20);
lean_dec(x_11);
lean_ctor_set(x_7, 1, x_21);
x_22 = l_Lean_Meta_inferTypeRef;
x_23 = lean_st_ref_get(x_22, x_9);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_apply_6(x_24, x_1, x_5, x_6, x_7, x_8, x_25);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_7);
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_11, x_27);
lean_dec(x_11);
x_29 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_29, 0, x_10);
lean_ctor_set(x_29, 1, x_28);
lean_ctor_set(x_29, 2, x_12);
lean_ctor_set(x_29, 3, x_13);
x_30 = l_Lean_Meta_inferTypeRef;
x_31 = lean_st_ref_get(x_30, x_9);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_apply_6(x_32, x_1, x_5, x_6, x_29, x_8, x_33);
return x_34;
}
}
else
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_1);
x_35 = l_Lean_withIncRecDepth___rarg___lambda__2___closed__2;
x_36 = l_Lean_throwError___at_Lean_Meta_mkWHNFRef___spec__1___rarg(x_35, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
return x_36;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_36, 0);
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_36);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
lean_object* l_Lean_Meta_assignExprMVar___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_st_ref_take(x_7, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_15 = lean_ctor_get(x_12, 0);
x_16 = l_Lean_MetavarContext_assignExpr(x_15, x_1, x_2);
lean_ctor_set(x_12, 0, x_16);
x_17 = lean_st_ref_set(x_7, x_12, x_13);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_17, 0);
lean_dec(x_19);
x_20 = lean_box(0);
lean_ctor_set(x_17, 0, x_20);
return x_17;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_17, 1);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_box(0);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
return x_23;
}
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_24 = lean_ctor_get(x_12, 0);
x_25 = lean_ctor_get(x_12, 1);
x_26 = lean_ctor_get(x_12, 2);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_12);
x_27 = l_Lean_MetavarContext_assignExpr(x_24, x_1, x_2);
x_28 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
lean_ctor_set(x_28, 2, x_26);
x_29 = lean_st_ref_set(x_7, x_28, x_13);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_31 = x_29;
} else {
 lean_dec_ref(x_29);
 x_31 = lean_box(0);
}
x_32 = lean_box(0);
if (lean_is_scalar(x_31)) {
 x_33 = lean_alloc_ctor(0, 2, 0);
} else {
 x_33 = x_31;
}
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_30);
return x_33;
}
}
}
lean_object* l_Array_findIdxAux___main___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_3);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = l_Lean_LocalDecl_type(x_7);
lean_dec(x_7);
x_9 = l_Lean_Expr_occurs(x_1, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_3, x_10);
lean_dec(x_3);
x_3 = x_11;
goto _start;
}
else
{
lean_object* x_13; 
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_3);
return x_13;
}
}
}
}
lean_object* l___private_Lean_Elab_Match_37__mkLocalDeclFor(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = l_Lean_Expr_mvarId_x21(x_1);
x_11 = lean_st_ref_get(x_2, x_9);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
lean_inc(x_10);
x_13 = l_Lean_Meta_getExprMVarAssignment_x3f___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__1(x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_mkFreshId___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__2___rarg(x_8, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_19 = l_Lean_Meta_inferType___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
lean_inc(x_17);
x_22 = l_Lean_mkFVar(x_17);
x_23 = l_Lean_Meta_assignExprMVar___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__4(x_10, x_22, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_21);
x_24 = lean_ctor_get(x_23, 1);
lean_inc(x_24);
lean_dec(x_23);
x_25 = l_Lean_Elab_Term_mkFreshBinderName(x_3, x_4, x_5, x_6, x_7, x_8, x_24);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_unsigned_to_nat(0u);
x_29 = 0;
lean_inc(x_17);
x_30 = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_17);
lean_ctor_set(x_30, 2, x_26);
lean_ctor_set(x_30, 3, x_20);
lean_ctor_set_uint8(x_30, sizeof(void*)*4, x_29);
x_31 = lean_st_ref_take(x_2, x_27);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = !lean_is_exclusive(x_32);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_35 = lean_ctor_get(x_32, 1);
x_36 = lean_ctor_get(x_32, 2);
x_37 = l_Array_findIdxAux___main___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__5(x_1, x_35, x_28);
lean_dec(x_1);
x_38 = lean_box(0);
lean_inc(x_17);
x_39 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_36, x_17, x_38);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_40 = lean_array_push(x_35, x_30);
lean_ctor_set(x_32, 2, x_39);
lean_ctor_set(x_32, 1, x_40);
x_41 = lean_st_ref_set(x_2, x_32, x_33);
x_42 = !lean_is_exclusive(x_41);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_41, 0);
lean_dec(x_43);
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_17);
lean_ctor_set(x_41, 0, x_44);
return x_41;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_41, 1);
lean_inc(x_45);
lean_dec(x_41);
x_46 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_46, 0, x_17);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
return x_47;
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_48 = lean_ctor_get(x_37, 0);
lean_inc(x_48);
lean_dec(x_37);
x_49 = l_Array_insertAt___rarg(x_35, x_48, x_30);
lean_dec(x_48);
lean_ctor_set(x_32, 2, x_39);
lean_ctor_set(x_32, 1, x_49);
x_50 = lean_st_ref_set(x_2, x_32, x_33);
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_50, 0);
lean_dec(x_52);
x_53 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_53, 0, x_17);
lean_ctor_set(x_50, 0, x_53);
return x_50;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_50, 1);
lean_inc(x_54);
lean_dec(x_50);
x_55 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_55, 0, x_17);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_54);
return x_56;
}
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_57 = lean_ctor_get(x_32, 0);
x_58 = lean_ctor_get(x_32, 1);
x_59 = lean_ctor_get(x_32, 2);
lean_inc(x_59);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_32);
x_60 = l_Array_findIdxAux___main___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__5(x_1, x_58, x_28);
lean_dec(x_1);
x_61 = lean_box(0);
lean_inc(x_17);
x_62 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_59, x_17, x_61);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_63 = lean_array_push(x_58, x_30);
x_64 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_64, 0, x_57);
lean_ctor_set(x_64, 1, x_63);
lean_ctor_set(x_64, 2, x_62);
x_65 = lean_st_ref_set(x_2, x_64, x_33);
x_66 = lean_ctor_get(x_65, 1);
lean_inc(x_66);
if (lean_is_exclusive(x_65)) {
 lean_ctor_release(x_65, 0);
 lean_ctor_release(x_65, 1);
 x_67 = x_65;
} else {
 lean_dec_ref(x_65);
 x_67 = lean_box(0);
}
x_68 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_68, 0, x_17);
if (lean_is_scalar(x_67)) {
 x_69 = lean_alloc_ctor(0, 2, 0);
} else {
 x_69 = x_67;
}
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_66);
return x_69;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_70 = lean_ctor_get(x_60, 0);
lean_inc(x_70);
lean_dec(x_60);
x_71 = l_Array_insertAt___rarg(x_58, x_70, x_30);
lean_dec(x_70);
x_72 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_72, 0, x_57);
lean_ctor_set(x_72, 1, x_71);
lean_ctor_set(x_72, 2, x_62);
x_73 = lean_st_ref_set(x_2, x_72, x_33);
x_74 = lean_ctor_get(x_73, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_75 = x_73;
} else {
 lean_dec_ref(x_73);
 x_75 = lean_box(0);
}
x_76 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_76, 0, x_17);
if (lean_is_scalar(x_75)) {
 x_77 = lean_alloc_ctor(0, 2, 0);
} else {
 x_77 = x_75;
}
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_74);
return x_77;
}
}
}
else
{
uint8_t x_78; 
lean_dec(x_17);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_78 = !lean_is_exclusive(x_19);
if (x_78 == 0)
{
return x_19;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_19, 0);
x_80 = lean_ctor_get(x_19, 1);
lean_inc(x_80);
lean_inc(x_79);
lean_dec(x_19);
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
return x_81;
}
}
}
else
{
uint8_t x_82; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_82 = !lean_is_exclusive(x_13);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_13, 0);
lean_dec(x_83);
x_84 = lean_ctor_get(x_14, 0);
lean_inc(x_84);
lean_dec(x_14);
x_85 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_13, 0, x_85);
return x_13;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_86 = lean_ctor_get(x_13, 1);
lean_inc(x_86);
lean_dec(x_13);
x_87 = lean_ctor_get(x_14, 0);
lean_inc(x_87);
lean_dec(x_14);
x_88 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_88, 0, x_87);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_86);
return x_89;
}
}
}
}
lean_object* l_Lean_Meta_getExprMVarAssignment_x3f___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_getExprMVarAssignment_x3f___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_mkFreshId___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__2___rarg(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_mkFreshId___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_mkFreshId___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Meta_inferType___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_inferType___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Lean_Meta_assignExprMVar___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_assignExprMVar___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Array_findIdxAux___main___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_findIdxAux___main___at___private_Lean_Elab_Match_37__mkLocalDeclFor___spec__5(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l___private_Lean_Elab_Match_37__mkLocalDeclFor___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Match_37__mkLocalDeclFor(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Lean_Meta_whnf___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_7, 2);
lean_inc(x_12);
x_13 = lean_ctor_get(x_7, 3);
lean_inc(x_13);
x_14 = lean_nat_dec_eq(x_11, x_12);
if (x_14 == 0)
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_7);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_16 = lean_ctor_get(x_7, 3);
lean_dec(x_16);
x_17 = lean_ctor_get(x_7, 2);
lean_dec(x_17);
x_18 = lean_ctor_get(x_7, 1);
lean_dec(x_18);
x_19 = lean_ctor_get(x_7, 0);
lean_dec(x_19);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_add(x_11, x_20);
lean_dec(x_11);
lean_ctor_set(x_7, 1, x_21);
x_22 = l_Lean_Meta_whnfRef;
x_23 = lean_st_ref_get(x_22, x_9);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_apply_6(x_24, x_1, x_5, x_6, x_7, x_8, x_25);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_7);
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_add(x_11, x_27);
lean_dec(x_11);
x_29 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_29, 0, x_10);
lean_ctor_set(x_29, 1, x_28);
lean_ctor_set(x_29, 2, x_12);
lean_ctor_set(x_29, 3, x_13);
x_30 = l_Lean_Meta_whnfRef;
x_31 = lean_st_ref_get(x_30, x_9);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_apply_6(x_32, x_1, x_5, x_6, x_29, x_8, x_33);
return x_34;
}
}
else
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_1);
x_35 = l_Lean_withIncRecDepth___rarg___lambda__2___closed__2;
x_36 = l_Lean_throwError___at_Lean_Meta_mkWHNFRef___spec__1___rarg(x_35, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
return x_36;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_36, 0);
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_36);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_array_get_size(x_2);
x_12 = lean_nat_dec_lt(x_1, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_13 = x_2;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_10);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_array_fget(x_2, x_1);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_fset(x_2, x_1, x_16);
x_18 = x_15;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_19 = l_Lean_Elab_Term_ToDepElimPattern_main___main(x_18, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_1, x_22);
x_24 = x_20;
x_25 = lean_array_fset(x_17, x_1, x_24);
lean_dec(x_1);
x_1 = x_23;
x_2 = x_25;
x_10 = x_21;
goto _start;
}
else
{
uint8_t x_27; 
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_19);
if (x_27 == 0)
{
return x_19;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_19, 0);
x_29 = lean_ctor_get(x_19, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_19);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = l_Lean_LocalDecl_fvarId(x_8);
lean_dec(x_8);
x_10 = lean_name_eq(x_9, x_1);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_5, x_11);
lean_dec(x_5);
x_5 = x_12;
goto _start;
}
else
{
lean_dec(x_5);
return x_10;
}
}
}
}
lean_object* l_List_mapM___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_10 = lean_box(0);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_1);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_1, 0);
x_14 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_15 = l_Lean_Elab_Term_ToDepElimPattern_main___main(x_13, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_List_mapM___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__4(x_14, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_17);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_ctor_set(x_1, 1, x_20);
lean_ctor_set(x_1, 0, x_16);
lean_ctor_set(x_18, 0, x_1);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_18, 0);
x_22 = lean_ctor_get(x_18, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_18);
lean_ctor_set(x_1, 1, x_21);
lean_ctor_set(x_1, 0, x_16);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_1);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_dec(x_16);
lean_free_object(x_1);
x_24 = !lean_is_exclusive(x_18);
if (x_24 == 0)
{
return x_18;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_18, 0);
x_26 = lean_ctor_get(x_18, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_18);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
else
{
uint8_t x_28; 
lean_free_object(x_1);
lean_dec(x_14);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_28 = !lean_is_exclusive(x_15);
if (x_28 == 0)
{
return x_15;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_15, 0);
x_30 = lean_ctor_get(x_15, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_15);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_1, 0);
x_33 = lean_ctor_get(x_1, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_34 = l_Lean_Elab_Term_ToDepElimPattern_main___main(x_32, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = l_List_mapM___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__4(x_33, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_36);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 x_40 = x_37;
} else {
 lean_dec_ref(x_37);
 x_40 = lean_box(0);
}
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_35);
lean_ctor_set(x_41, 1, x_38);
if (lean_is_scalar(x_40)) {
 x_42 = lean_alloc_ctor(0, 2, 0);
} else {
 x_42 = x_40;
}
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_39);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_35);
x_43 = lean_ctor_get(x_37, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_37, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 x_45 = x_37;
} else {
 lean_dec_ref(x_37);
 x_45 = lean_box(0);
}
if (lean_is_scalar(x_45)) {
 x_46 = lean_alloc_ctor(1, 2, 0);
} else {
 x_46 = x_45;
}
lean_ctor_set(x_46, 0, x_43);
lean_ctor_set(x_46, 1, x_44);
return x_46;
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_33);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_47 = lean_ctor_get(x_34, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_34, 1);
lean_inc(x_48);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_49 = x_34;
} else {
 lean_dec_ref(x_34);
 x_49 = lean_box(0);
}
if (lean_is_scalar(x_49)) {
 x_50 = lean_alloc_ctor(1, 2, 0);
} else {
 x_50 = x_49;
}
lean_ctor_set(x_50, 0, x_47);
lean_ctor_set(x_50, 1, x_48);
return x_50;
}
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
uint8_t x_7; 
lean_dec(x_5);
x_7 = 0;
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_array_fget(x_3, x_5);
x_9 = l_Lean_LocalDecl_fvarId(x_8);
lean_dec(x_8);
x_10 = lean_name_eq(x_9, x_1);
lean_dec(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_5, x_11);
lean_dec(x_5);
x_5 = x_12;
goto _start;
}
else
{
lean_dec(x_5);
return x_10;
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected occurrence of auxiliary declaration 'namedPattern'");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_ToDepElimPattern_main___main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_inaccessible_x3f(x_1);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = l_Lean_Expr_arrayLit_x3f(x_1);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = l___private_Lean_Elab_Match_29__collect___main___closed__8;
x_13 = lean_unsigned_to_nat(3u);
x_14 = l_Lean_Expr_isAppOfArity___main(x_1, x_12, x_13);
if (x_14 == 0)
{
uint8_t x_15; 
x_15 = l_Lean_Expr_isNatLit(x_1);
if (x_15 == 0)
{
uint8_t x_16; 
x_16 = l_Lean_Expr_isStringLit(x_1);
if (x_16 == 0)
{
uint8_t x_17; 
x_17 = l_Lean_Expr_isCharLit(x_1);
if (x_17 == 0)
{
uint8_t x_18; 
x_18 = l_Lean_Expr_isFVar(x_1);
if (x_18 == 0)
{
uint8_t x_19; 
x_19 = l_Lean_Expr_isMVar(x_1);
if (x_19 == 0)
{
lean_object* x_20; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_20 = l_Lean_Meta_whnf___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_expr_eqv(x_21, x_1);
if (x_23 == 0)
{
lean_dec(x_1);
x_1 = x_21;
x_9 = x_22;
goto _start;
}
else
{
lean_object* x_25; 
lean_dec(x_21);
x_25 = l_Lean_Expr_getAppFn___main(x_1);
if (lean_obj_tag(x_25) == 4)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_25, 1);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_st_ref_get(x_8, x_22);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_ctor_get(x_29, 0);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_environment_find(x_31, x_26);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; 
lean_dec(x_27);
x_33 = l___private_Lean_Elab_Match_36__throwInvalidPattern___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_30);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_33;
}
else
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_32, 0);
lean_inc(x_34);
lean_dec(x_32);
if (lean_obj_tag(x_34) == 6)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_unsigned_to_nat(0u);
x_37 = l_Lean_Expr_getAppNumArgsAux___main(x_1, x_36);
x_38 = l_Lean_Expr_getAppArgs___closed__1;
lean_inc(x_37);
x_39 = lean_mk_array(x_37, x_38);
x_40 = lean_unsigned_to_nat(1u);
x_41 = lean_nat_sub(x_37, x_40);
lean_dec(x_37);
lean_inc(x_1);
x_42 = l___private_Lean_Expr_3__getAppArgsAux___main(x_1, x_39, x_41);
x_43 = lean_array_get_size(x_42);
x_44 = lean_ctor_get(x_35, 3);
lean_inc(x_44);
x_45 = lean_ctor_get(x_35, 4);
lean_inc(x_45);
x_46 = lean_nat_add(x_44, x_45);
lean_dec(x_45);
x_47 = lean_nat_dec_eq(x_43, x_46);
lean_dec(x_46);
if (x_47 == 0)
{
lean_object* x_48; uint8_t x_49; 
lean_dec(x_44);
lean_dec(x_43);
lean_dec(x_42);
lean_dec(x_35);
lean_dec(x_27);
x_48 = l___private_Lean_Elab_Match_36__throwInvalidPattern___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_30);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_49 = !lean_is_exclusive(x_48);
if (x_49 == 0)
{
return x_48;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_48, 0);
x_51 = lean_ctor_get(x_48, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_48);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_1);
x_53 = l_Array_extract___rarg(x_42, x_36, x_44);
x_54 = l_Array_extract___rarg(x_42, x_44, x_43);
lean_dec(x_43);
lean_dec(x_42);
x_55 = x_54;
x_56 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__2), 10, 2);
lean_closure_set(x_56, 0, x_36);
lean_closure_set(x_56, 1, x_55);
x_57 = x_56;
x_58 = lean_apply_8(x_57, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_30);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; uint8_t x_60; 
x_59 = lean_ctor_get(x_35, 0);
lean_inc(x_59);
lean_dec(x_35);
x_60 = !lean_is_exclusive(x_58);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_61 = lean_ctor_get(x_58, 0);
x_62 = lean_ctor_get(x_59, 0);
lean_inc(x_62);
lean_dec(x_59);
x_63 = l_Array_toList___rarg(x_53);
lean_dec(x_53);
x_64 = l_Array_toList___rarg(x_61);
lean_dec(x_61);
x_65 = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(x_65, 0, x_62);
lean_ctor_set(x_65, 1, x_27);
lean_ctor_set(x_65, 2, x_63);
lean_ctor_set(x_65, 3, x_64);
lean_ctor_set(x_58, 0, x_65);
return x_58;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_66 = lean_ctor_get(x_58, 0);
x_67 = lean_ctor_get(x_58, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_58);
x_68 = lean_ctor_get(x_59, 0);
lean_inc(x_68);
lean_dec(x_59);
x_69 = l_Array_toList___rarg(x_53);
lean_dec(x_53);
x_70 = l_Array_toList___rarg(x_66);
lean_dec(x_66);
x_71 = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(x_71, 0, x_68);
lean_ctor_set(x_71, 1, x_27);
lean_ctor_set(x_71, 2, x_69);
lean_ctor_set(x_71, 3, x_70);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_67);
return x_72;
}
}
else
{
uint8_t x_73; 
lean_dec(x_53);
lean_dec(x_35);
lean_dec(x_27);
x_73 = !lean_is_exclusive(x_58);
if (x_73 == 0)
{
return x_58;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_58, 0);
x_75 = lean_ctor_get(x_58, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_58);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
}
else
{
lean_object* x_77; 
lean_dec(x_34);
lean_dec(x_27);
x_77 = l___private_Lean_Elab_Match_36__throwInvalidPattern___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_30);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_77;
}
}
}
else
{
lean_object* x_78; 
lean_dec(x_25);
x_78 = l___private_Lean_Elab_Match_36__throwInvalidPattern___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_22);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_78;
}
}
}
else
{
uint8_t x_79; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_79 = !lean_is_exclusive(x_20);
if (x_79 == 0)
{
return x_20;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_20, 0);
x_81 = lean_ctor_get(x_20, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_20);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
return x_82;
}
}
}
else
{
lean_object* x_83; 
x_83 = l___private_Lean_Elab_Match_37__mkLocalDeclFor(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_2);
return x_83;
}
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; uint8_t x_110; 
x_84 = l_Lean_Expr_fvarId_x21(x_1);
x_104 = lean_st_ref_get(x_2, x_9);
x_105 = lean_ctor_get(x_104, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_104, 1);
lean_inc(x_106);
lean_dec(x_104);
x_107 = lean_ctor_get(x_105, 1);
lean_inc(x_107);
x_108 = lean_array_get_size(x_107);
x_109 = lean_unsigned_to_nat(0u);
x_110 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__3(x_84, x_105, x_107, x_108, x_109);
lean_dec(x_108);
lean_dec(x_107);
lean_dec(x_105);
if (x_110 == 0)
{
lean_object* x_111; uint8_t x_112; 
lean_dec(x_84);
x_111 = l___private_Lean_Elab_Match_36__throwInvalidPattern___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_106);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_112 = !lean_is_exclusive(x_111);
if (x_112 == 0)
{
return x_111;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_113 = lean_ctor_get(x_111, 0);
x_114 = lean_ctor_get(x_111, 1);
lean_inc(x_114);
lean_inc(x_113);
lean_dec(x_111);
x_115 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_115, 0, x_113);
lean_ctor_set(x_115, 1, x_114);
return x_115;
}
}
else
{
x_85 = x_106;
goto block_103;
}
block_103:
{
lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_86 = l___private_Lean_Elab_Match_34__alreadyVisited(x_84, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_85);
x_87 = lean_ctor_get(x_86, 0);
lean_inc(x_87);
x_88 = lean_unbox(x_87);
lean_dec(x_87);
if (x_88 == 0)
{
lean_object* x_89; lean_object* x_90; uint8_t x_91; 
lean_dec(x_1);
x_89 = lean_ctor_get(x_86, 1);
lean_inc(x_89);
lean_dec(x_86);
lean_inc(x_84);
x_90 = l___private_Lean_Elab_Match_35__markAsVisited(x_84, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_89);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_91 = !lean_is_exclusive(x_90);
if (x_91 == 0)
{
lean_object* x_92; lean_object* x_93; 
x_92 = lean_ctor_get(x_90, 0);
lean_dec(x_92);
x_93 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_93, 0, x_84);
lean_ctor_set(x_90, 0, x_93);
return x_90;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_94 = lean_ctor_get(x_90, 1);
lean_inc(x_94);
lean_dec(x_90);
x_95 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_95, 0, x_84);
x_96 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_96, 0, x_95);
lean_ctor_set(x_96, 1, x_94);
return x_96;
}
}
else
{
uint8_t x_97; 
lean_dec(x_84);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_97 = !lean_is_exclusive(x_86);
if (x_97 == 0)
{
lean_object* x_98; lean_object* x_99; 
x_98 = lean_ctor_get(x_86, 0);
lean_dec(x_98);
x_99 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_99, 0, x_1);
lean_ctor_set(x_86, 0, x_99);
return x_86;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_100 = lean_ctor_get(x_86, 1);
lean_inc(x_100);
lean_dec(x_86);
x_101 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_101, 0, x_1);
x_102 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_100);
return x_102;
}
}
}
}
}
else
{
lean_object* x_116; lean_object* x_117; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_116 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_116, 0, x_1);
x_117 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_117, 0, x_116);
lean_ctor_set(x_117, 1, x_9);
return x_117;
}
}
else
{
lean_object* x_118; lean_object* x_119; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_118 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_118, 0, x_1);
x_119 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_119, 0, x_118);
lean_ctor_set(x_119, 1, x_9);
return x_119;
}
}
else
{
lean_object* x_120; lean_object* x_121; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_120 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_120, 0, x_1);
x_121 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_9);
return x_121;
}
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_122 = lean_unsigned_to_nat(0u);
x_123 = l_Lean_Expr_getAppNumArgsAux___main(x_1, x_122);
x_124 = lean_unsigned_to_nat(2u);
x_125 = lean_nat_sub(x_123, x_124);
x_126 = lean_unsigned_to_nat(1u);
x_127 = lean_nat_sub(x_125, x_126);
lean_dec(x_125);
x_128 = l_Lean_Expr_getRevArg_x21___main(x_1, x_127);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_129 = l_Lean_Elab_Term_ToDepElimPattern_main___main(x_128, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_129) == 0)
{
uint8_t x_130; 
x_130 = !lean_is_exclusive(x_129);
if (x_130 == 0)
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_131 = lean_ctor_get(x_129, 0);
x_132 = lean_ctor_get(x_129, 1);
x_133 = lean_nat_sub(x_123, x_126);
lean_dec(x_123);
x_134 = lean_nat_sub(x_133, x_126);
lean_dec(x_133);
x_135 = l_Lean_Expr_getRevArg_x21___main(x_1, x_134);
lean_dec(x_1);
if (lean_obj_tag(x_135) == 1)
{
lean_object* x_136; lean_object* x_137; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_136 = lean_ctor_get(x_135, 0);
lean_inc(x_136);
lean_dec(x_135);
x_137 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_137, 0, x_136);
lean_ctor_set(x_137, 1, x_131);
lean_ctor_set(x_129, 0, x_137);
return x_129;
}
else
{
lean_object* x_138; lean_object* x_139; 
lean_dec(x_135);
lean_free_object(x_129);
lean_dec(x_131);
x_138 = l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__3;
x_139 = l_Lean_throwError___at___private_Lean_Elab_Match_36__throwInvalidPattern___spec__1___rarg(x_138, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_132);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_139;
}
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_140 = lean_ctor_get(x_129, 0);
x_141 = lean_ctor_get(x_129, 1);
lean_inc(x_141);
lean_inc(x_140);
lean_dec(x_129);
x_142 = lean_nat_sub(x_123, x_126);
lean_dec(x_123);
x_143 = lean_nat_sub(x_142, x_126);
lean_dec(x_142);
x_144 = l_Lean_Expr_getRevArg_x21___main(x_1, x_143);
lean_dec(x_1);
if (lean_obj_tag(x_144) == 1)
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_145 = lean_ctor_get(x_144, 0);
lean_inc(x_145);
lean_dec(x_144);
x_146 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_140);
x_147 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_147, 0, x_146);
lean_ctor_set(x_147, 1, x_141);
return x_147;
}
else
{
lean_object* x_148; lean_object* x_149; 
lean_dec(x_144);
lean_dec(x_140);
x_148 = l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__3;
x_149 = l_Lean_throwError___at___private_Lean_Elab_Match_36__throwInvalidPattern___spec__1___rarg(x_148, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_141);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_149;
}
}
}
else
{
uint8_t x_150; 
lean_dec(x_123);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_150 = !lean_is_exclusive(x_129);
if (x_150 == 0)
{
return x_129;
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_151 = lean_ctor_get(x_129, 0);
x_152 = lean_ctor_get(x_129, 1);
lean_inc(x_152);
lean_inc(x_151);
lean_dec(x_129);
x_153 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_153, 0, x_151);
lean_ctor_set(x_153, 1, x_152);
return x_153;
}
}
}
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; 
lean_dec(x_1);
x_154 = lean_ctor_get(x_11, 0);
lean_inc(x_154);
lean_dec(x_11);
x_155 = lean_ctor_get(x_154, 0);
lean_inc(x_155);
x_156 = lean_ctor_get(x_154, 1);
lean_inc(x_156);
lean_dec(x_154);
x_157 = l_List_mapM___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__4(x_156, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_157) == 0)
{
uint8_t x_158; 
x_158 = !lean_is_exclusive(x_157);
if (x_158 == 0)
{
lean_object* x_159; lean_object* x_160; 
x_159 = lean_ctor_get(x_157, 0);
x_160 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_160, 0, x_155);
lean_ctor_set(x_160, 1, x_159);
lean_ctor_set(x_157, 0, x_160);
return x_157;
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; 
x_161 = lean_ctor_get(x_157, 0);
x_162 = lean_ctor_get(x_157, 1);
lean_inc(x_162);
lean_inc(x_161);
lean_dec(x_157);
x_163 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_163, 0, x_155);
lean_ctor_set(x_163, 1, x_161);
x_164 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_164, 0, x_163);
lean_ctor_set(x_164, 1, x_162);
return x_164;
}
}
else
{
uint8_t x_165; 
lean_dec(x_155);
x_165 = !lean_is_exclusive(x_157);
if (x_165 == 0)
{
return x_157;
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; 
x_166 = lean_ctor_get(x_157, 0);
x_167 = lean_ctor_get(x_157, 1);
lean_inc(x_167);
lean_inc(x_166);
lean_dec(x_157);
x_168 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_168, 0, x_166);
lean_ctor_set(x_168, 1, x_167);
return x_168;
}
}
}
}
else
{
lean_object* x_169; 
lean_dec(x_1);
x_169 = lean_ctor_get(x_10, 0);
lean_inc(x_169);
lean_dec(x_10);
if (lean_obj_tag(x_169) == 1)
{
lean_object* x_170; lean_object* x_171; uint8_t x_172; 
x_170 = lean_ctor_get(x_169, 0);
lean_inc(x_170);
x_171 = lean_st_ref_get(x_2, x_9);
x_172 = !lean_is_exclusive(x_171);
if (x_172 == 0)
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; uint8_t x_178; 
x_173 = lean_ctor_get(x_171, 0);
x_174 = lean_ctor_get(x_171, 1);
x_175 = lean_ctor_get(x_173, 1);
lean_inc(x_175);
x_176 = lean_array_get_size(x_175);
x_177 = lean_unsigned_to_nat(0u);
x_178 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__5(x_170, x_173, x_175, x_176, x_177);
lean_dec(x_176);
lean_dec(x_175);
lean_dec(x_173);
if (x_178 == 0)
{
lean_object* x_179; 
lean_dec(x_170);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_179 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_179, 0, x_169);
lean_ctor_set(x_171, 0, x_179);
return x_171;
}
else
{
lean_object* x_180; lean_object* x_181; uint8_t x_182; 
lean_free_object(x_171);
x_180 = l___private_Lean_Elab_Match_34__alreadyVisited(x_170, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_174);
x_181 = lean_ctor_get(x_180, 0);
lean_inc(x_181);
x_182 = lean_unbox(x_181);
lean_dec(x_181);
if (x_182 == 0)
{
lean_object* x_183; lean_object* x_184; uint8_t x_185; 
x_183 = lean_ctor_get(x_180, 1);
lean_inc(x_183);
lean_dec(x_180);
x_184 = l___private_Lean_Elab_Match_35__markAsVisited(x_170, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_183);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_185 = !lean_is_exclusive(x_184);
if (x_185 == 0)
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; 
x_186 = lean_ctor_get(x_184, 0);
lean_dec(x_186);
x_187 = l_Lean_Expr_fvarId_x21(x_169);
lean_dec(x_169);
x_188 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_188, 0, x_187);
lean_ctor_set(x_184, 0, x_188);
return x_184;
}
else
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; 
x_189 = lean_ctor_get(x_184, 1);
lean_inc(x_189);
lean_dec(x_184);
x_190 = l_Lean_Expr_fvarId_x21(x_169);
lean_dec(x_169);
x_191 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_191, 0, x_190);
x_192 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_192, 0, x_191);
lean_ctor_set(x_192, 1, x_189);
return x_192;
}
}
else
{
uint8_t x_193; 
lean_dec(x_170);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_193 = !lean_is_exclusive(x_180);
if (x_193 == 0)
{
lean_object* x_194; lean_object* x_195; 
x_194 = lean_ctor_get(x_180, 0);
lean_dec(x_194);
x_195 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_195, 0, x_169);
lean_ctor_set(x_180, 0, x_195);
return x_180;
}
else
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; 
x_196 = lean_ctor_get(x_180, 1);
lean_inc(x_196);
lean_dec(x_180);
x_197 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_197, 0, x_169);
x_198 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_198, 0, x_197);
lean_ctor_set(x_198, 1, x_196);
return x_198;
}
}
}
}
else
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; uint8_t x_204; 
x_199 = lean_ctor_get(x_171, 0);
x_200 = lean_ctor_get(x_171, 1);
lean_inc(x_200);
lean_inc(x_199);
lean_dec(x_171);
x_201 = lean_ctor_get(x_199, 1);
lean_inc(x_201);
x_202 = lean_array_get_size(x_201);
x_203 = lean_unsigned_to_nat(0u);
x_204 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__5(x_170, x_199, x_201, x_202, x_203);
lean_dec(x_202);
lean_dec(x_201);
lean_dec(x_199);
if (x_204 == 0)
{
lean_object* x_205; lean_object* x_206; 
lean_dec(x_170);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_205 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_205, 0, x_169);
x_206 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_206, 0, x_205);
lean_ctor_set(x_206, 1, x_200);
return x_206;
}
else
{
lean_object* x_207; lean_object* x_208; uint8_t x_209; 
x_207 = l___private_Lean_Elab_Match_34__alreadyVisited(x_170, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_200);
x_208 = lean_ctor_get(x_207, 0);
lean_inc(x_208);
x_209 = lean_unbox(x_208);
lean_dec(x_208);
if (x_209 == 0)
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; 
x_210 = lean_ctor_get(x_207, 1);
lean_inc(x_210);
lean_dec(x_207);
x_211 = l___private_Lean_Elab_Match_35__markAsVisited(x_170, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_210);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_212 = lean_ctor_get(x_211, 1);
lean_inc(x_212);
if (lean_is_exclusive(x_211)) {
 lean_ctor_release(x_211, 0);
 lean_ctor_release(x_211, 1);
 x_213 = x_211;
} else {
 lean_dec_ref(x_211);
 x_213 = lean_box(0);
}
x_214 = l_Lean_Expr_fvarId_x21(x_169);
lean_dec(x_169);
x_215 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_215, 0, x_214);
if (lean_is_scalar(x_213)) {
 x_216 = lean_alloc_ctor(0, 2, 0);
} else {
 x_216 = x_213;
}
lean_ctor_set(x_216, 0, x_215);
lean_ctor_set(x_216, 1, x_212);
return x_216;
}
else
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; 
lean_dec(x_170);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_217 = lean_ctor_get(x_207, 1);
lean_inc(x_217);
if (lean_is_exclusive(x_207)) {
 lean_ctor_release(x_207, 0);
 lean_ctor_release(x_207, 1);
 x_218 = x_207;
} else {
 lean_dec_ref(x_207);
 x_218 = lean_box(0);
}
x_219 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_219, 0, x_169);
if (lean_is_scalar(x_218)) {
 x_220 = lean_alloc_ctor(0, 2, 0);
} else {
 x_220 = x_218;
}
lean_ctor_set(x_220, 0, x_219);
lean_ctor_set(x_220, 1, x_217);
return x_220;
}
}
}
}
else
{
lean_object* x_221; lean_object* x_222; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_221 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_221, 0, x_169);
x_222 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_222, 0, x_221);
lean_ctor_set(x_222, 1, x_9);
return x_222;
}
}
}
}
lean_object* l_Lean_Meta_whnf___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_whnf___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__5(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l_Lean_Elab_Term_ToDepElimPattern_main(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_ToDepElimPattern_main___main(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_array_get_size(x_2);
x_11 = lean_nat_dec_lt(x_1, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_1);
x_12 = x_2;
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_14 = lean_array_fget(x_2, x_1);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_array_fset(x_2, x_1, x_15);
x_17 = x_14;
x_18 = l_Lean_Meta_instantiateLocalDeclMVars___at_Lean_Elab_Term_finalizePatternDecls___spec__1(x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_1, x_21);
x_23 = x_19;
x_24 = lean_array_fset(x_16, x_1, x_23);
lean_dec(x_1);
x_1 = x_22;
x_2 = x_24;
x_9 = x_20;
goto _start;
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_dec(x_3);
return x_4;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = l_Lean_LocalDecl_fvarId(x_7);
lean_dec(x_7);
x_9 = lean_local_ctx_erase(x_4, x_8);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_3, x_10);
lean_dec(x_3);
x_3 = x_11;
x_4 = x_9;
goto _start;
}
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_nat_dec_lt(x_3, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_dec(x_3);
return x_4;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_array_fget(x_2, x_3);
x_8 = l_Lean_LocalContext_addDecl(x_4, x_7);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_3 = x_10;
x_4 = x_8;
goto _start;
}
}
}
lean_object* l_Lean_Elab_Term_withDepElimPatterns___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_11 = x_2;
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at_Lean_Elab_Term_ToDepElimPattern_main___main___spec__2), 10, 2);
lean_closure_set(x_13, 0, x_12);
lean_closure_set(x_13, 1, x_11);
x_14 = l_Lean_NameSet_empty;
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_1);
lean_ctor_set(x_15, 2, x_14);
x_16 = lean_st_mk_ref(x_15, x_10);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = x_13;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_17);
x_20 = lean_apply_8(x_19, x_17, x_4, x_5, x_6, x_7, x_8, x_9, x_18);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = lean_st_ref_get(x_17, x_22);
lean_dec(x_17);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = x_26;
x_28 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__1___boxed), 9, 2);
lean_closure_set(x_28, 0, x_12);
lean_closure_set(x_28, 1, x_27);
x_29 = x_28;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_30 = lean_apply_7(x_29, x_4, x_5, x_6, x_7, x_8, x_9, x_25);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = !lean_is_exclusive(x_6);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_6, 1);
x_35 = l_Array_iterateMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__2(x_31, x_31, x_12, x_34);
x_36 = l_Array_iterateMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__3(x_31, x_31, x_12, x_35);
lean_ctor_set(x_6, 1, x_36);
x_37 = lean_apply_9(x_3, x_31, x_21, x_4, x_5, x_6, x_7, x_8, x_9, x_32);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_38 = lean_ctor_get(x_6, 0);
x_39 = lean_ctor_get(x_6, 1);
x_40 = lean_ctor_get(x_6, 2);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_6);
x_41 = l_Array_iterateMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__2(x_31, x_31, x_12, x_39);
x_42 = l_Array_iterateMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__3(x_31, x_31, x_12, x_41);
x_43 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_43, 0, x_38);
lean_ctor_set(x_43, 1, x_42);
lean_ctor_set(x_43, 2, x_40);
x_44 = lean_apply_9(x_3, x_31, x_21, x_4, x_5, x_43, x_7, x_8, x_9, x_32);
return x_44;
}
}
else
{
uint8_t x_45; 
lean_dec(x_21);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_45 = !lean_is_exclusive(x_30);
if (x_45 == 0)
{
return x_30;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_30, 0);
x_47 = lean_ctor_get(x_30, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_30);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_49 = !lean_is_exclusive(x_20);
if (x_49 == 0)
{
return x_20;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_20, 0);
x_51 = lean_ctor_get(x_20, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_20);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
}
lean_object* l_Lean_Elab_Term_withDepElimPatterns(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withDepElimPatterns___rarg), 10, 0);
return x_2;
}
}
lean_object* l_Array_umapMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Array_umapMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_iterateMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_iterateMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_iterateMAux___main___at_Lean_Elab_Term_withDepElimPatterns___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Match_38__withElaboratedLHS___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_array_get_size(x_2);
x_11 = lean_nat_dec_lt(x_1, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_1);
x_12 = x_2;
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_9);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_14 = lean_array_fget(x_2, x_1);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_array_fset(x_2, x_1, x_15);
x_17 = x_14;
x_18 = l_Lean_Meta_instantiateMVars___at_Lean_Elab_Term_MVarErrorContext_logError___spec__1(x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_add(x_1, x_21);
x_23 = x_19;
x_24 = lean_array_fset(x_16, x_1, x_23);
lean_dec(x_1);
x_1 = x_22;
x_2 = x_24;
x_9 = x_20;
goto _start;
}
}
}
lean_object* l___private_Lean_Elab_Match_38__withElaboratedLHS___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = l_Array_toList___rarg(x_4);
x_14 = l_Array_toList___rarg(x_5);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_13);
lean_ctor_set(x_15, 2, x_14);
x_16 = lean_apply_9(x_2, x_15, x_3, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
return x_16;
}
}
lean_object* l___private_Lean_Elab_Match_38__withElaboratedLHS___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Array_empty___closed__1;
x_15 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_33__elabPatternsAux___boxed), 11, 4);
lean_closure_set(x_15, 0, x_3);
lean_closure_set(x_15, 1, x_13);
lean_closure_set(x_15, 2, x_4);
lean_closure_set(x_15, 3, x_14);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_16 = l_Lean_Elab_Term_withSynthesize___rarg(x_15, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
lean_inc(x_8);
x_21 = l_Lean_Elab_Term_finalizePatternDecls(x_2, x_6, x_7, x_8, x_9, x_10, x_11, x_18);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = x_19;
x_25 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at___private_Lean_Elab_Match_38__withElaboratedLHS___spec__1___boxed), 9, 2);
lean_closure_set(x_25, 0, x_13);
lean_closure_set(x_25, 1, x_24);
x_26 = x_25;
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_27 = lean_apply_7(x_26, x_6, x_7, x_8, x_9, x_10, x_11, x_23);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_38__withElaboratedLHS___rarg___lambda__1___boxed), 12, 3);
lean_closure_set(x_30, 0, x_1);
lean_closure_set(x_30, 1, x_5);
lean_closure_set(x_30, 2, x_20);
x_31 = l_Lean_Elab_Term_withDepElimPatterns___rarg(x_22, x_28, x_30, x_6, x_7, x_8, x_9, x_10, x_11, x_29);
return x_31;
}
else
{
uint8_t x_32; 
lean_dec(x_22);
lean_dec(x_20);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_27);
if (x_32 == 0)
{
return x_27;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_27, 0);
x_34 = lean_ctor_get(x_27, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_27);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
uint8_t x_36; 
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_36 = !lean_is_exclusive(x_21);
if (x_36 == 0)
{
return x_21;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_21, 0);
x_38 = lean_ctor_get(x_21, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_21);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_40 = !lean_is_exclusive(x_16);
if (x_40 == 0)
{
return x_16;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_16, 0);
x_42 = lean_ctor_get(x_16, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_16);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
lean_object* l___private_Lean_Elab_Match_38__withElaboratedLHS(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Match_38__withElaboratedLHS___rarg___boxed), 12, 0);
return x_2;
}
}
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Match_38__withElaboratedLHS___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Array_umapMAux___main___at___private_Lean_Elab_Match_38__withElaboratedLHS___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l___private_Lean_Elab_Match_38__withElaboratedLHS___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Lean_Elab_Match_38__withElaboratedLHS___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
}
lean_object* l___private_Lean_Elab_Match_38__withElaboratedLHS___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
x_13 = l___private_Lean_Elab_Match_38__withElaboratedLHS___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_2);
return x_13;
}
}
lean_object* l_List_toStringAux___main___at_Lean_Elab_Term_elabMatchAltView___spec__2(uint8_t x_1, lean_object* x_2) {
_start:
{
if (x_1 == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = l_String_splitAux___main___closed__1;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = l_List_toStringAux___main___at_Lean_Elab_Term_elabMatchAltView___spec__2(x_1, x_5);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
lean_dec(x_4);
x_8 = l_System_FilePath_dirName___closed__1;
x_9 = l_Lean_Name_toStringWithSep___main(x_8, x_7);
x_10 = l_List_reprAux___main___rarg___closed__1;
x_11 = lean_string_append(x_10, x_9);
lean_dec(x_9);
x_12 = lean_string_append(x_11, x_6);
lean_dec(x_6);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = lean_ctor_get(x_4, 0);
lean_inc(x_13);
lean_dec(x_4);
x_14 = l_System_FilePath_dirName___closed__1;
x_15 = l_Lean_Name_toStringWithSep___main(x_14, x_13);
x_16 = l_Lean_Elab_Term_PatternVar_hasToString___closed__1;
x_17 = lean_string_append(x_16, x_15);
lean_dec(x_15);
x_18 = l_List_reprAux___main___rarg___closed__1;
x_19 = lean_string_append(x_18, x_17);
lean_dec(x_17);
x_20 = lean_string_append(x_19, x_6);
lean_dec(x_6);
return x_20;
}
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_21; 
x_21 = l_String_splitAux___main___closed__1;
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_2, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_2, 1);
lean_inc(x_23);
lean_dec(x_2);
x_24 = 0;
x_25 = l_List_toStringAux___main___at_Lean_Elab_Term_elabMatchAltView___spec__2(x_24, x_23);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_22, 0);
lean_inc(x_26);
lean_dec(x_22);
x_27 = l_System_FilePath_dirName___closed__1;
x_28 = l_Lean_Name_toStringWithSep___main(x_27, x_26);
x_29 = lean_string_append(x_28, x_25);
lean_dec(x_25);
return x_29;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_30 = lean_ctor_get(x_22, 0);
lean_inc(x_30);
lean_dec(x_22);
x_31 = l_System_FilePath_dirName___closed__1;
x_32 = l_Lean_Name_toStringWithSep___main(x_31, x_30);
x_33 = l_Lean_Elab_Term_PatternVar_hasToString___closed__1;
x_34 = lean_string_append(x_33, x_32);
lean_dec(x_32);
x_35 = lean_string_append(x_34, x_25);
lean_dec(x_25);
return x_35;
}
}
}
}
}
lean_object* l_List_toString___at_Lean_Elab_Term_elabMatchAltView___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = l_List_repr___rarg___closed__1;
return x_2;
}
else
{
uint8_t x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = 1;
x_4 = l_List_toStringAux___main___at_Lean_Elab_Term_elabMatchAltView___spec__2(x_3, x_1);
x_5 = l_List_repr___rarg___closed__2;
x_6 = lean_string_append(x_5, x_4);
lean_dec(x_4);
x_7 = l_List_repr___rarg___closed__3;
x_8 = lean_string_append(x_6, x_7);
return x_8;
}
}
}
lean_object* _init_l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("rhs: ");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabMatchAltView___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_4);
x_14 = 1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_15 = l_Lean_Elab_Term_elabTermEnsuringType(x_12, x_13, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_ctor_get(x_15, 1);
x_19 = lean_ctor_get(x_3, 1);
lean_inc(x_19);
x_20 = l_List_redLength___main___rarg(x_19);
x_21 = lean_mk_empty_array_with_capacity(x_20);
lean_dec(x_20);
x_22 = l_List_toArrayAux___main___rarg(x_19, x_21);
x_23 = x_22;
x_24 = lean_unsigned_to_nat(0u);
x_25 = l_Array_umapMAux___main___at_Lean_Meta_Closure_mkBinding___spec__1(x_24, x_23);
x_26 = x_25;
x_27 = l_Array_isEmpty___rarg(x_26);
if (x_27 == 0)
{
lean_object* x_28; 
lean_free_object(x_15);
lean_inc(x_7);
x_28 = l_Lean_Meta_mkLambdaFVars___at___private_Lean_Elab_Term_15__elabImplicitLambdaAux___spec__1(x_26, x_17, x_5, x_6, x_7, x_8, x_9, x_10, x_18);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_30 = lean_ctor_get(x_28, 0);
x_31 = lean_ctor_get(x_28, 1);
x_32 = lean_ctor_get(x_9, 0);
lean_inc(x_32);
lean_inc(x_2);
x_33 = l_Lean_checkTraceOption(x_32, x_2);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_3);
lean_ctor_set(x_34, 1, x_30);
lean_ctor_set(x_28, 0, x_34);
return x_28;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; 
lean_free_object(x_28);
lean_inc(x_30);
x_35 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_35, 0, x_30);
x_36 = l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__3;
x_37 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
x_38 = l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_2, x_37, x_5, x_6, x_7, x_8, x_9, x_10, x_31);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_39 = !lean_is_exclusive(x_38);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_38, 0);
lean_dec(x_40);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_3);
lean_ctor_set(x_41, 1, x_30);
lean_ctor_set(x_38, 0, x_41);
return x_38;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_38, 1);
lean_inc(x_42);
lean_dec(x_38);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_3);
lean_ctor_set(x_43, 1, x_30);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_45 = lean_ctor_get(x_28, 0);
x_46 = lean_ctor_get(x_28, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_28);
x_47 = lean_ctor_get(x_9, 0);
lean_inc(x_47);
lean_inc(x_2);
x_48 = l_Lean_checkTraceOption(x_47, x_2);
lean_dec(x_47);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_3);
lean_ctor_set(x_49, 1, x_45);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_46);
return x_50;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_inc(x_45);
x_51 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_51, 0, x_45);
x_52 = l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__3;
x_53 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_51);
x_54 = l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_2, x_53, x_5, x_6, x_7, x_8, x_9, x_10, x_46);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_56 = x_54;
} else {
 lean_dec_ref(x_54);
 x_56 = lean_box(0);
}
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_3);
lean_ctor_set(x_57, 1, x_45);
if (lean_is_scalar(x_56)) {
 x_58 = lean_alloc_ctor(0, 2, 0);
} else {
 x_58 = x_56;
}
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_55);
return x_58;
}
}
}
else
{
uint8_t x_59; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_59 = !lean_is_exclusive(x_28);
if (x_59 == 0)
{
return x_28;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_28, 0);
x_61 = lean_ctor_get(x_28, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_28);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
else
{
lean_object* x_63; lean_object* x_64; uint8_t x_65; 
lean_dec(x_26);
x_63 = l_Lean_mkThunk(x_17);
x_64 = lean_ctor_get(x_9, 0);
lean_inc(x_64);
lean_inc(x_2);
x_65 = l_Lean_checkTraceOption(x_64, x_2);
lean_dec(x_64);
if (x_65 == 0)
{
lean_object* x_66; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_3);
lean_ctor_set(x_66, 1, x_63);
lean_ctor_set(x_15, 0, x_66);
return x_15;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
lean_free_object(x_15);
lean_inc(x_63);
x_67 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_67, 0, x_63);
x_68 = l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__3;
x_69 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_67);
x_70 = l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_2, x_69, x_5, x_6, x_7, x_8, x_9, x_10, x_18);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_71 = !lean_is_exclusive(x_70);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; 
x_72 = lean_ctor_get(x_70, 0);
lean_dec(x_72);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_3);
lean_ctor_set(x_73, 1, x_63);
lean_ctor_set(x_70, 0, x_73);
return x_70;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_70, 1);
lean_inc(x_74);
lean_dec(x_70);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_3);
lean_ctor_set(x_75, 1, x_63);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_74);
return x_76;
}
}
}
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; uint8_t x_87; 
x_77 = lean_ctor_get(x_15, 0);
x_78 = lean_ctor_get(x_15, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_15);
x_79 = lean_ctor_get(x_3, 1);
lean_inc(x_79);
x_80 = l_List_redLength___main___rarg(x_79);
x_81 = lean_mk_empty_array_with_capacity(x_80);
lean_dec(x_80);
x_82 = l_List_toArrayAux___main___rarg(x_79, x_81);
x_83 = x_82;
x_84 = lean_unsigned_to_nat(0u);
x_85 = l_Array_umapMAux___main___at_Lean_Meta_Closure_mkBinding___spec__1(x_84, x_83);
x_86 = x_85;
x_87 = l_Array_isEmpty___rarg(x_86);
if (x_87 == 0)
{
lean_object* x_88; 
lean_inc(x_7);
x_88 = l_Lean_Meta_mkLambdaFVars___at___private_Lean_Elab_Term_15__elabImplicitLambdaAux___spec__1(x_86, x_77, x_5, x_6, x_7, x_8, x_9, x_10, x_78);
if (lean_obj_tag(x_88) == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; uint8_t x_93; 
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_88, 1);
lean_inc(x_90);
if (lean_is_exclusive(x_88)) {
 lean_ctor_release(x_88, 0);
 lean_ctor_release(x_88, 1);
 x_91 = x_88;
} else {
 lean_dec_ref(x_88);
 x_91 = lean_box(0);
}
x_92 = lean_ctor_get(x_9, 0);
lean_inc(x_92);
lean_inc(x_2);
x_93 = l_Lean_checkTraceOption(x_92, x_2);
lean_dec(x_92);
if (x_93 == 0)
{
lean_object* x_94; lean_object* x_95; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_3);
lean_ctor_set(x_94, 1, x_89);
if (lean_is_scalar(x_91)) {
 x_95 = lean_alloc_ctor(0, 2, 0);
} else {
 x_95 = x_91;
}
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_90);
return x_95;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
lean_dec(x_91);
lean_inc(x_89);
x_96 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_96, 0, x_89);
x_97 = l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__3;
x_98 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_96);
x_99 = l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_2, x_98, x_5, x_6, x_7, x_8, x_9, x_10, x_90);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_100 = lean_ctor_get(x_99, 1);
lean_inc(x_100);
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 lean_ctor_release(x_99, 1);
 x_101 = x_99;
} else {
 lean_dec_ref(x_99);
 x_101 = lean_box(0);
}
x_102 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_102, 0, x_3);
lean_ctor_set(x_102, 1, x_89);
if (lean_is_scalar(x_101)) {
 x_103 = lean_alloc_ctor(0, 2, 0);
} else {
 x_103 = x_101;
}
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_100);
return x_103;
}
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_104 = lean_ctor_get(x_88, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_88, 1);
lean_inc(x_105);
if (lean_is_exclusive(x_88)) {
 lean_ctor_release(x_88, 0);
 lean_ctor_release(x_88, 1);
 x_106 = x_88;
} else {
 lean_dec_ref(x_88);
 x_106 = lean_box(0);
}
if (lean_is_scalar(x_106)) {
 x_107 = lean_alloc_ctor(1, 2, 0);
} else {
 x_107 = x_106;
}
lean_ctor_set(x_107, 0, x_104);
lean_ctor_set(x_107, 1, x_105);
return x_107;
}
}
else
{
lean_object* x_108; lean_object* x_109; uint8_t x_110; 
lean_dec(x_86);
x_108 = l_Lean_mkThunk(x_77);
x_109 = lean_ctor_get(x_9, 0);
lean_inc(x_109);
lean_inc(x_2);
x_110 = l_Lean_checkTraceOption(x_109, x_2);
lean_dec(x_109);
if (x_110 == 0)
{
lean_object* x_111; lean_object* x_112; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_111 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_111, 0, x_3);
lean_ctor_set(x_111, 1, x_108);
x_112 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_112, 0, x_111);
lean_ctor_set(x_112, 1, x_78);
return x_112;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; 
lean_inc(x_108);
x_113 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_113, 0, x_108);
x_114 = l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__3;
x_115 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_115, 0, x_114);
lean_ctor_set(x_115, 1, x_113);
x_116 = l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_2, x_115, x_5, x_6, x_7, x_8, x_9, x_10, x_78);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_117 = lean_ctor_get(x_116, 1);
lean_inc(x_117);
if (lean_is_exclusive(x_116)) {
 lean_ctor_release(x_116, 0);
 lean_ctor_release(x_116, 1);
 x_118 = x_116;
} else {
 lean_dec_ref(x_116);
 x_118 = lean_box(0);
}
x_119 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_119, 0, x_3);
lean_ctor_set(x_119, 1, x_108);
if (lean_is_scalar(x_118)) {
 x_120 = lean_alloc_ctor(0, 2, 0);
} else {
 x_120 = x_118;
}
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_117);
return x_120;
}
}
}
}
else
{
uint8_t x_121; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_121 = !lean_is_exclusive(x_15);
if (x_121 == 0)
{
return x_15;
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_122 = lean_ctor_get(x_15, 0);
x_123 = lean_ctor_get(x_15, 1);
lean_inc(x_123);
lean_inc(x_122);
lean_dec(x_15);
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_122);
lean_ctor_set(x_124, 1, x_123);
return x_124;
}
}
}
}
lean_object* l_Lean_Elab_Term_elabMatchAltView___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
x_14 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabMatchAltView___lambda__1), 11, 2);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_2);
x_15 = l___private_Lean_Elab_Match_38__withElaboratedLHS___rarg(x_12, x_4, x_13, x_3, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_15;
}
}
lean_object* _init_l_Lean_Elab_Term_elabMatchAltView___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("patternVars: ");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_elabMatchAltView___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabMatchAltView___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_elabMatchAltView___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabMatchAltView___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabMatchAltView(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = !lean_is_exclusive(x_7);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_7, 0);
x_13 = lean_ctor_get(x_7, 3);
x_14 = l_Lean_replaceRef(x_10, x_13);
lean_dec(x_10);
x_15 = l_Lean_replaceRef(x_14, x_13);
lean_dec(x_14);
x_16 = l_Lean_replaceRef(x_15, x_13);
lean_dec(x_13);
lean_dec(x_15);
lean_inc(x_12);
lean_ctor_set(x_7, 3, x_16);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_17 = l___private_Lean_Elab_Match_30__collectPatternVars(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__10;
x_23 = l_Lean_checkTraceOption(x_12, x_22);
lean_dec(x_12);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabMatchAltView___lambda__2___boxed), 11, 3);
lean_closure_set(x_24, 0, x_21);
lean_closure_set(x_24, 1, x_22);
lean_closure_set(x_24, 2, x_2);
x_25 = l___private_Lean_Elab_Match_32__withPatternVars___rarg(x_20, x_24, x_3, x_4, x_5, x_6, x_7, x_8, x_19);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_26 = l_Array_toList___rarg(x_20);
x_27 = l_List_toString___at_Lean_Elab_Term_elabMatchAltView___spec__1(x_26);
x_28 = l_Array_HasRepr___rarg___closed__1;
x_29 = lean_string_append(x_28, x_27);
lean_dec(x_27);
x_30 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_31, 0, x_30);
x_32 = l_Lean_Elab_Term_elabMatchAltView___closed__3;
x_33 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
x_34 = l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_22, x_33, x_3, x_4, x_5, x_6, x_7, x_8, x_19);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabMatchAltView___lambda__2___boxed), 11, 3);
lean_closure_set(x_36, 0, x_21);
lean_closure_set(x_36, 1, x_22);
lean_closure_set(x_36, 2, x_2);
x_37 = l___private_Lean_Elab_Match_32__withPatternVars___rarg(x_20, x_36, x_3, x_4, x_5, x_6, x_7, x_8, x_35);
return x_37;
}
}
else
{
uint8_t x_38; 
lean_dec(x_7);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_38 = !lean_is_exclusive(x_17);
if (x_38 == 0)
{
return x_17;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_17, 0);
x_40 = lean_ctor_get(x_17, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_17);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_42 = lean_ctor_get(x_7, 0);
x_43 = lean_ctor_get(x_7, 1);
x_44 = lean_ctor_get(x_7, 2);
x_45 = lean_ctor_get(x_7, 3);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_7);
x_46 = l_Lean_replaceRef(x_10, x_45);
lean_dec(x_10);
x_47 = l_Lean_replaceRef(x_46, x_45);
lean_dec(x_46);
x_48 = l_Lean_replaceRef(x_47, x_45);
lean_dec(x_45);
lean_dec(x_47);
lean_inc(x_42);
x_49 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_49, 0, x_42);
lean_ctor_set(x_49, 1, x_43);
lean_ctor_set(x_49, 2, x_44);
lean_ctor_set(x_49, 3, x_48);
lean_inc(x_8);
lean_inc(x_49);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_50 = l___private_Lean_Elab_Match_30__collectPatternVars(x_1, x_3, x_4, x_5, x_6, x_49, x_8, x_9);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = lean_ctor_get(x_51, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_51, 1);
lean_inc(x_54);
lean_dec(x_51);
x_55 = l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__10;
x_56 = l_Lean_checkTraceOption(x_42, x_55);
lean_dec(x_42);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; 
x_57 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabMatchAltView___lambda__2___boxed), 11, 3);
lean_closure_set(x_57, 0, x_54);
lean_closure_set(x_57, 1, x_55);
lean_closure_set(x_57, 2, x_2);
x_58 = l___private_Lean_Elab_Match_32__withPatternVars___rarg(x_53, x_57, x_3, x_4, x_5, x_6, x_49, x_8, x_52);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_59 = l_Array_toList___rarg(x_53);
x_60 = l_List_toString___at_Lean_Elab_Term_elabMatchAltView___spec__1(x_59);
x_61 = l_Array_HasRepr___rarg___closed__1;
x_62 = lean_string_append(x_61, x_60);
lean_dec(x_60);
x_63 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_63, 0, x_62);
x_64 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_64, 0, x_63);
x_65 = l_Lean_Elab_Term_elabMatchAltView___closed__3;
x_66 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_64);
x_67 = l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_55, x_66, x_3, x_4, x_5, x_6, x_49, x_8, x_52);
x_68 = lean_ctor_get(x_67, 1);
lean_inc(x_68);
lean_dec(x_67);
x_69 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabMatchAltView___lambda__2___boxed), 11, 3);
lean_closure_set(x_69, 0, x_54);
lean_closure_set(x_69, 1, x_55);
lean_closure_set(x_69, 2, x_2);
x_70 = l___private_Lean_Elab_Match_32__withPatternVars___rarg(x_53, x_69, x_3, x_4, x_5, x_6, x_49, x_8, x_68);
return x_70;
}
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; 
lean_dec(x_49);
lean_dec(x_42);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_71 = lean_ctor_get(x_50, 0);
lean_inc(x_71);
x_72 = lean_ctor_get(x_50, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 x_73 = x_50;
} else {
 lean_dec_ref(x_50);
 x_73 = lean_box(0);
}
if (lean_is_scalar(x_73)) {
 x_74 = lean_alloc_ctor(1, 2, 0);
} else {
 x_74 = x_73;
}
lean_ctor_set(x_74, 0, x_71);
lean_ctor_set(x_74, 1, x_72);
return x_74;
}
}
}
}
lean_object* l_List_toStringAux___main___at_Lean_Elab_Term_elabMatchAltView___spec__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_List_toStringAux___main___at_Lean_Elab_Term_elabMatchAltView___spec__2(x_3, x_2);
return x_4;
}
}
lean_object* l_Lean_Elab_Term_elabMatchAltView___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_Term_elabMatchAltView___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_4);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_mkMotiveType___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_10 = l___private_Lean_Meta_InferType_4__getLevelImp(x_2, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_mkSort(x_11);
x_14 = l_Lean_Meta_mkForallFVars___at_Lean_Elab_Term_elabForall___spec__2(x_1, x_13, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_10);
if (x_15 == 0)
{
return x_10;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_10, 0);
x_17 = lean_ctor_get(x_10, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_10);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_mkMotiveType___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_mkMotiveType___lambda__1___boxed), 9, 0);
return x_1;
}
}
lean_object* l_Lean_Elab_Term_mkMotiveType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_2);
x_11 = l_Lean_Elab_Term_mkMotiveType___closed__1;
x_12 = l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Elab_Match_14__getNumExplicitCtorParams___spec__2___rarg(x_1, x_10, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_mkMotiveType___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_mkMotiveType___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_Elab_Term_mkMatcher(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Meta_Match_mkMatcher(x_1, x_2, x_3, x_4, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
lean_object* l_Lean_Elab_Term_mkMatcher___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_Term_mkMatcher(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
lean_dec(x_5);
return x_12;
}
}
lean_object* l_List_map___main___at_Lean_Elab_Term_reportMatcherResultErrors___spec__1(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_ctor_get(x_1, 0);
x_5 = lean_ctor_get(x_1, 1);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_add(x_4, x_6);
lean_dec(x_4);
x_8 = l_Nat_repr(x_7);
x_9 = l_Array_HasRepr___rarg___closed__1;
x_10 = lean_string_append(x_9, x_8);
lean_dec(x_8);
x_11 = l_List_map___main___at_Lean_Elab_Term_reportMatcherResultErrors___spec__1(x_5);
lean_ctor_set(x_1, 1, x_11);
lean_ctor_set(x_1, 0, x_10);
return x_1;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_ctor_get(x_1, 0);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_1);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_12, x_14);
lean_dec(x_12);
x_16 = l_Nat_repr(x_15);
x_17 = l_Array_HasRepr___rarg___closed__1;
x_18 = lean_string_append(x_17, x_16);
lean_dec(x_16);
x_19 = l_List_map___main___at_Lean_Elab_Term_reportMatcherResultErrors___spec__1(x_13);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_reportMatcherResultErrors___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unused alternatives: ");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_reportMatcherResultErrors___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_reportMatcherResultErrors___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_reportMatcherResultErrors___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_reportMatcherResultErrors___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_reportMatcherResultErrors___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("missing cases:");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_reportMatcherResultErrors___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_reportMatcherResultErrors___closed__4;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_reportMatcherResultErrors___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_reportMatcherResultErrors___closed__5;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_reportMatcherResultErrors___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Term_reportMatcherResultErrors___closed__6;
x_2 = l_Lean_MessageData_ofList___closed__3;
x_3 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_reportMatcherResultErrors(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_22; uint8_t x_23; 
x_22 = lean_ctor_get(x_1, 1);
lean_inc(x_22);
x_23 = l_List_isEmpty___rarg(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
lean_dec(x_1);
x_24 = l_Lean_Meta_Match_counterExamplesToMessageData(x_22);
x_25 = l_Lean_Elab_Term_reportMatcherResultErrors___closed__7;
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
x_27 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_26, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
return x_27;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_27);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
else
{
lean_dec(x_22);
x_9 = x_8;
goto block_21;
}
block_21:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_1, 2);
lean_inc(x_10);
lean_dec(x_1);
x_11 = l_List_isEmpty___rarg(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_12 = l_List_map___main___at_Lean_Elab_Term_reportMatcherResultErrors___spec__1(x_10);
x_13 = l_List_toString___at_Lean_MetavarContext_MkBinding_Exception_toString___spec__2(x_12);
x_14 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = l_Lean_Elab_Term_reportMatcherResultErrors___closed__3;
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
x_18 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1___rarg(x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_9);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_10);
lean_dec(x_2);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_9);
return x_20;
}
}
}
}
lean_object* l_Lean_Elab_Term_reportMatcherResultErrors___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Term_reportMatcherResultErrors(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Match_39__elabMatchAux___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_array_get_size(x_3);
x_12 = lean_nat_dec_lt(x_2, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_13 = x_3;
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_10);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_array_fget(x_3, x_2);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_array_fset(x_3, x_2, x_16);
x_18 = x_15;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_1);
x_19 = l_Lean_Elab_Term_elabMatchAltView(x_18, x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_2, x_22);
x_24 = x_20;
x_25 = lean_array_fset(x_17, x_2, x_24);
lean_dec(x_2);
x_2 = x_23;
x_3 = x_25;
x_10 = x_21;
goto _start;
}
else
{
uint8_t x_27; 
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_19);
if (x_27 == 0)
{
return x_19;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_19, 0);
x_29 = lean_ctor_get(x_19, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_19);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
}
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Match_39__elabMatchAux___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_nat_dec_lt(x_1, x_3);
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_1);
x_5 = x_2;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = x_6;
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_1, x_11);
x_13 = x_10;
x_14 = lean_array_fset(x_8, x_1, x_13);
lean_dec(x_1);
x_1 = x_12;
x_2 = x_14;
goto _start;
}
}
}
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Match_39__elabMatchAux___spec__3(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_nat_dec_lt(x_1, x_3);
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_1);
x_5 = x_2;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = x_6;
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_1, x_11);
x_13 = x_10;
x_14 = lean_array_fset(x_8, x_1, x_13);
lean_dec(x_1);
x_1 = x_12;
x_2 = x_14;
goto _start;
}
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Match_39__elabMatchAux___spec__4___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwUnsupportedSyntax___rarg___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Match_39__elabMatchAux___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Match_39__elabMatchAux___spec__4___rarg), 1, 0);
return x_7;
}
}
lean_object* _init_l___private_Lean_Elab_Match_39__elabMatchAux___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___at___private_Lean_Elab_Term_15__elabImplicitLambdaAux___spec__1___boxed), 9, 0);
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_39__elabMatchAux___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* _init_l___private_Lean_Elab_Match_39__elabMatchAux___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("result: ");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_39__elabMatchAux___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_39__elabMatchAux___closed__3;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_39__elabMatchAux___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_39__elabMatchAux___closed__4;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_39__elabMatchAux___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("matchType: ");
return x_1;
}
}
lean_object* _init_l___private_Lean_Elab_Match_39__elabMatchAux___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_39__elabMatchAux___closed__6;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l___private_Lean_Elab_Match_39__elabMatchAux___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l___private_Lean_Elab_Match_39__elabMatchAux___closed__7;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Match_39__elabMatchAux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_12 = l___private_Lean_Elab_Match_7__elabMatchTypeAndDiscrs(x_1, x_3, x_2, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = lean_ctor_get(x_13, 0);
lean_inc(x_16);
lean_dec(x_13);
x_17 = lean_ctor_get(x_14, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_dec(x_14);
x_120 = l_Lean_Elab_Term_getCurrMacroScope(x_5, x_6, x_7, x_8, x_9, x_10, x_15);
x_121 = lean_ctor_get(x_120, 0);
lean_inc(x_121);
x_122 = lean_ctor_get(x_120, 1);
lean_inc(x_122);
lean_dec(x_120);
x_123 = lean_st_ref_get(x_10, x_122);
x_124 = lean_ctor_get(x_123, 0);
lean_inc(x_124);
x_125 = lean_ctor_get(x_123, 1);
lean_inc(x_125);
lean_dec(x_123);
x_126 = lean_ctor_get(x_124, 0);
lean_inc(x_126);
lean_dec(x_124);
x_127 = lean_st_ref_get(x_10, x_125);
x_128 = lean_ctor_get(x_127, 0);
lean_inc(x_128);
x_129 = lean_ctor_get(x_127, 1);
lean_inc(x_129);
lean_dec(x_127);
x_130 = lean_ctor_get(x_128, 1);
lean_inc(x_130);
lean_dec(x_128);
x_131 = lean_ctor_get(x_9, 1);
lean_inc(x_131);
x_132 = lean_ctor_get(x_9, 2);
lean_inc(x_132);
lean_inc(x_126);
x_133 = lean_alloc_closure((void*)(l___private_Lean_Elab_Util_4__expandMacro_x3f___boxed), 4, 1);
lean_closure_set(x_133, 0, x_126);
x_134 = x_133;
x_135 = lean_environment_main_module(x_126);
x_136 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_136, 0, x_134);
lean_ctor_set(x_136, 1, x_135);
lean_ctor_set(x_136, 2, x_121);
lean_ctor_set(x_136, 3, x_131);
lean_ctor_set(x_136, 4, x_132);
x_137 = l_Lean_Elab_Term_expandMacrosInPatterns(x_18, x_136, x_130);
if (lean_obj_tag(x_137) == 0)
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; uint8_t x_143; 
x_138 = lean_ctor_get(x_137, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_137, 1);
lean_inc(x_139);
lean_dec(x_137);
x_140 = lean_st_ref_take(x_10, x_129);
x_141 = lean_ctor_get(x_140, 0);
lean_inc(x_141);
x_142 = lean_ctor_get(x_140, 1);
lean_inc(x_142);
lean_dec(x_140);
x_143 = !lean_is_exclusive(x_141);
if (x_143 == 0)
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_144 = lean_ctor_get(x_141, 1);
lean_dec(x_144);
lean_ctor_set(x_141, 1, x_139);
x_145 = lean_st_ref_set(x_10, x_141, x_142);
x_146 = lean_ctor_get(x_145, 1);
lean_inc(x_146);
lean_dec(x_145);
x_19 = x_138;
x_20 = x_146;
goto block_119;
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_147 = lean_ctor_get(x_141, 0);
x_148 = lean_ctor_get(x_141, 2);
x_149 = lean_ctor_get(x_141, 3);
lean_inc(x_149);
lean_inc(x_148);
lean_inc(x_147);
lean_dec(x_141);
x_150 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_150, 0, x_147);
lean_ctor_set(x_150, 1, x_139);
lean_ctor_set(x_150, 2, x_148);
lean_ctor_set(x_150, 3, x_149);
x_151 = lean_st_ref_set(x_10, x_150, x_142);
x_152 = lean_ctor_get(x_151, 1);
lean_inc(x_152);
lean_dec(x_151);
x_19 = x_138;
x_20 = x_152;
goto block_119;
}
}
else
{
lean_object* x_153; 
lean_dec(x_17);
lean_dec(x_16);
x_153 = lean_ctor_get(x_137, 0);
lean_inc(x_153);
lean_dec(x_137);
if (lean_obj_tag(x_153) == 0)
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; uint8_t x_159; 
x_154 = lean_ctor_get(x_153, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_153, 1);
lean_inc(x_155);
lean_dec(x_153);
x_156 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_156, 0, x_155);
x_157 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_157, 0, x_156);
x_158 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_154, x_157, x_5, x_6, x_7, x_8, x_9, x_10, x_129);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_154);
x_159 = !lean_is_exclusive(x_158);
if (x_159 == 0)
{
return x_158;
}
else
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; 
x_160 = lean_ctor_get(x_158, 0);
x_161 = lean_ctor_get(x_158, 1);
lean_inc(x_161);
lean_inc(x_160);
lean_dec(x_158);
x_162 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_162, 0, x_160);
lean_ctor_set(x_162, 1, x_161);
return x_162;
}
}
else
{
lean_object* x_163; uint8_t x_164; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_163 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Match_39__elabMatchAux___spec__4___rarg(x_129);
x_164 = !lean_is_exclusive(x_163);
if (x_164 == 0)
{
return x_163;
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_165 = lean_ctor_get(x_163, 0);
x_166 = lean_ctor_get(x_163, 1);
lean_inc(x_166);
lean_inc(x_165);
lean_dec(x_163);
x_167 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_167, 0, x_165);
lean_ctor_set(x_167, 1, x_166);
return x_167;
}
}
}
block_119:
{
lean_object* x_21; lean_object* x_111; lean_object* x_112; uint8_t x_113; 
x_111 = lean_ctor_get(x_9, 0);
lean_inc(x_111);
x_112 = l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__10;
x_113 = l_Lean_checkTraceOption(x_111, x_112);
lean_dec(x_111);
if (x_113 == 0)
{
x_21 = x_20;
goto block_110;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
lean_inc(x_17);
x_114 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_114, 0, x_17);
x_115 = l___private_Lean_Elab_Match_39__elabMatchAux___closed__8;
x_116 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_116, 0, x_115);
lean_ctor_set(x_116, 1, x_114);
x_117 = l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_112, x_116, x_5, x_6, x_7, x_8, x_9, x_10, x_20);
x_118 = lean_ctor_get(x_117, 1);
lean_inc(x_118);
lean_dec(x_117);
x_21 = x_118;
goto block_110;
}
block_110:
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_22 = x_19;
x_23 = lean_unsigned_to_nat(0u);
lean_inc(x_17);
x_24 = lean_alloc_closure((void*)(l_Array_umapMAux___main___at___private_Lean_Elab_Match_39__elabMatchAux___spec__1), 10, 3);
lean_closure_set(x_24, 0, x_17);
lean_closure_set(x_24, 1, x_23);
lean_closure_set(x_24, 2, x_22);
x_25 = x_24;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_26 = lean_apply_7(x_25, x_5, x_6, x_7, x_8, x_9, x_10, x_21);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = x_27;
lean_inc(x_29);
x_30 = l_Array_umapMAux___main___at___private_Lean_Elab_Match_39__elabMatchAux___spec__2(x_23, x_29);
x_31 = x_30;
x_32 = l_Array_umapMAux___main___at___private_Lean_Elab_Match_39__elabMatchAux___spec__3(x_23, x_29);
x_33 = x_32;
x_34 = lean_array_get_size(x_16);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_34);
lean_inc(x_17);
x_35 = l_Lean_Elab_Term_mkMotiveType(x_17, x_34, x_5, x_6, x_7, x_8, x_9, x_10, x_28);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
lean_inc(x_34);
x_38 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_38, 0, x_34);
x_39 = l___private_Lean_Elab_Match_39__elabMatchAux___closed__1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_40 = l_Lean_Meta_forallBoundedTelescope___at___private_Lean_Elab_Match_14__getNumExplicitCtorParams___spec__2___rarg(x_17, x_38, x_39, x_5, x_6, x_7, x_8, x_9, x_10, x_37);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = l___private_Lean_Elab_Match_39__elabMatchAux___closed__2;
lean_inc(x_5);
x_44 = l_Lean_Elab_Term_mkAuxName(x_43, x_5, x_6, x_7, x_8, x_9, x_10, x_42);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = l_Array_toList___rarg(x_33);
lean_dec(x_33);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_48 = l_Lean_Meta_Match_mkMatcher(x_45, x_36, x_34, x_47, x_7, x_8, x_9, x_10, x_46);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
lean_inc(x_5);
lean_inc(x_49);
x_51 = l_Lean_Elab_Term_reportMatcherResultErrors(x_49, x_5, x_6, x_7, x_8, x_9, x_10, x_50);
if (lean_obj_tag(x_51) == 0)
{
uint8_t x_52; 
x_52 = !lean_is_exclusive(x_51);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; 
x_53 = lean_ctor_get(x_51, 1);
x_54 = lean_ctor_get(x_51, 0);
lean_dec(x_54);
x_55 = lean_ctor_get(x_49, 0);
lean_inc(x_55);
lean_dec(x_49);
x_56 = l_Lean_mkApp(x_55, x_41);
x_57 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_16, x_16, x_23, x_56);
lean_dec(x_16);
x_58 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_31, x_31, x_23, x_57);
lean_dec(x_31);
x_59 = lean_ctor_get(x_9, 0);
lean_inc(x_59);
x_60 = l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__10;
x_61 = l_Lean_checkTraceOption(x_59, x_60);
lean_dec(x_59);
if (x_61 == 0)
{
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_ctor_set(x_51, 0, x_58);
return x_51;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; 
lean_free_object(x_51);
lean_inc(x_58);
x_62 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_62, 0, x_58);
x_63 = l___private_Lean_Elab_Match_39__elabMatchAux___closed__5;
x_64 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_62);
x_65 = l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_60, x_64, x_5, x_6, x_7, x_8, x_9, x_10, x_53);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_66 = !lean_is_exclusive(x_65);
if (x_66 == 0)
{
lean_object* x_67; 
x_67 = lean_ctor_get(x_65, 0);
lean_dec(x_67);
lean_ctor_set(x_65, 0, x_58);
return x_65;
}
else
{
lean_object* x_68; lean_object* x_69; 
x_68 = lean_ctor_get(x_65, 1);
lean_inc(x_68);
lean_dec(x_65);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_58);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; 
x_70 = lean_ctor_get(x_51, 1);
lean_inc(x_70);
lean_dec(x_51);
x_71 = lean_ctor_get(x_49, 0);
lean_inc(x_71);
lean_dec(x_49);
x_72 = l_Lean_mkApp(x_71, x_41);
x_73 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_16, x_16, x_23, x_72);
lean_dec(x_16);
x_74 = l_Array_iterateMAux___main___at_Lean_mkAppN___spec__1(x_31, x_31, x_23, x_73);
lean_dec(x_31);
x_75 = lean_ctor_get(x_9, 0);
lean_inc(x_75);
x_76 = l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__10;
x_77 = l_Lean_checkTraceOption(x_75, x_76);
lean_dec(x_75);
if (x_77 == 0)
{
lean_object* x_78; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_74);
lean_ctor_set(x_78, 1, x_70);
return x_78;
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_inc(x_74);
x_79 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_79, 0, x_74);
x_80 = l___private_Lean_Elab_Match_39__elabMatchAux___closed__5;
x_81 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_79);
x_82 = l_Lean_Elab_logTrace___at_Lean_Elab_Term_traceAtCmdPos___spec__1(x_76, x_81, x_5, x_6, x_7, x_8, x_9, x_10, x_70);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_83 = lean_ctor_get(x_82, 1);
lean_inc(x_83);
if (lean_is_exclusive(x_82)) {
 lean_ctor_release(x_82, 0);
 lean_ctor_release(x_82, 1);
 x_84 = x_82;
} else {
 lean_dec_ref(x_82);
 x_84 = lean_box(0);
}
if (lean_is_scalar(x_84)) {
 x_85 = lean_alloc_ctor(0, 2, 0);
} else {
 x_85 = x_84;
}
lean_ctor_set(x_85, 0, x_74);
lean_ctor_set(x_85, 1, x_83);
return x_85;
}
}
}
else
{
uint8_t x_86; 
lean_dec(x_49);
lean_dec(x_41);
lean_dec(x_31);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_86 = !lean_is_exclusive(x_51);
if (x_86 == 0)
{
return x_51;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_51, 0);
x_88 = lean_ctor_get(x_51, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_51);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
return x_89;
}
}
}
else
{
uint8_t x_90; 
lean_dec(x_41);
lean_dec(x_31);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_90 = !lean_is_exclusive(x_48);
if (x_90 == 0)
{
return x_48;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_48, 0);
x_92 = lean_ctor_get(x_48, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_48);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
return x_93;
}
}
}
else
{
uint8_t x_94; 
lean_dec(x_41);
lean_dec(x_36);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_31);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_94 = !lean_is_exclusive(x_44);
if (x_94 == 0)
{
return x_44;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_95 = lean_ctor_get(x_44, 0);
x_96 = lean_ctor_get(x_44, 1);
lean_inc(x_96);
lean_inc(x_95);
lean_dec(x_44);
x_97 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set(x_97, 1, x_96);
return x_97;
}
}
}
else
{
uint8_t x_98; 
lean_dec(x_36);
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_31);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_98 = !lean_is_exclusive(x_40);
if (x_98 == 0)
{
return x_40;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_99 = lean_ctor_get(x_40, 0);
x_100 = lean_ctor_get(x_40, 1);
lean_inc(x_100);
lean_inc(x_99);
lean_dec(x_40);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set(x_101, 1, x_100);
return x_101;
}
}
}
else
{
uint8_t x_102; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_31);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_102 = !lean_is_exclusive(x_35);
if (x_102 == 0)
{
return x_35;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_103 = lean_ctor_get(x_35, 0);
x_104 = lean_ctor_get(x_35, 1);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_35);
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_103);
lean_ctor_set(x_105, 1, x_104);
return x_105;
}
}
}
else
{
uint8_t x_106; 
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_106 = !lean_is_exclusive(x_26);
if (x_106 == 0)
{
return x_26;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_107 = lean_ctor_get(x_26, 0);
x_108 = lean_ctor_get(x_26, 1);
lean_inc(x_108);
lean_inc(x_107);
lean_dec(x_26);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_107);
lean_ctor_set(x_109, 1, x_108);
return x_109;
}
}
}
}
}
else
{
uint8_t x_168; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_168 = !lean_is_exclusive(x_12);
if (x_168 == 0)
{
return x_12;
}
else
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; 
x_169 = lean_ctor_get(x_12, 0);
x_170 = lean_ctor_get(x_12, 1);
lean_inc(x_170);
lean_inc(x_169);
lean_dec(x_12);
x_171 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_171, 0, x_169);
lean_ctor_set(x_171, 1, x_170);
return x_171;
}
}
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Match_39__elabMatchAux___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_throwUnsupportedSyntax___at___private_Lean_Elab_Match_39__elabMatchAux___spec__4(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l___private_Lean_Elab_Match_39__elabMatchAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l___private_Lean_Elab_Match_39__elabMatchAux(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_3);
return x_12;
}
}
lean_object* l___private_Lean_Elab_Match_40__waitExpectedType(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_1);
x_9 = l_Lean_Elab_Term_tryPostponeIfNoneOrMVar(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = 0;
x_12 = lean_box(0);
x_13 = l_Lean_Meta_mkFreshTypeMVar___at___private_Lean_Elab_Term_6__exceptionToSorry___spec__2(x_11, x_12, x_2, x_3, x_4, x_5, x_6, x_7, x_10);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_4);
x_14 = !lean_is_exclusive(x_9);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_9, 0);
lean_dec(x_15);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
lean_ctor_set(x_9, 0, x_16);
return x_9;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_9, 1);
lean_inc(x_17);
lean_dec(x_9);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
lean_dec(x_1);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
}
else
{
uint8_t x_20; 
lean_dec(x_4);
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_9);
if (x_20 == 0)
{
return x_9;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_9, 0);
x_22 = lean_ctor_get(x_9, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_9);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
lean_object* l___private_Lean_Elab_Match_40__waitExpectedType___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l___private_Lean_Elab_Match_40__waitExpectedType(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Array_umapMAux___main___at___private_Lean_Elab_Match_41__elabMatchCore___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_nat_dec_lt(x_1, x_3);
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_1);
x_5 = x_2;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_6 = lean_array_fget(x_2, x_1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_array_fset(x_2, x_1, x_7);
x_9 = x_6;
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_nat_add(x_1, x_10);
x_12 = x_9;
x_13 = lean_array_fset(x_8, x_1, x_12);
lean_dec(x_1);
x_1 = x_11;
x_2 = x_13;
goto _start;
}
}
}
lean_object* l___private_Lean_Elab_Match_41__elabMatchCore(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_5);
x_10 = l___private_Lean_Elab_Match_40__waitExpectedType(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_unsigned_to_nat(1u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = l_Lean_Syntax_getArgs(x_14);
lean_dec(x_14);
x_16 = lean_unsigned_to_nat(2u);
x_17 = lean_unsigned_to_nat(0u);
x_18 = l_Array_empty___closed__1;
x_19 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_16, x_15, x_17, x_18);
lean_dec(x_15);
x_20 = x_19;
x_21 = l_Array_umapMAux___main___at___private_Lean_Elab_Match_41__elabMatchCore___spec__1(x_17, x_20);
x_22 = x_21;
x_23 = l___private_Lean_Elab_Match_9__getMatchAlts(x_1);
x_24 = l_Lean_Syntax_getArg(x_1, x_16);
x_25 = l___private_Lean_Elab_Match_39__elabMatchAux(x_22, x_23, x_24, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
lean_dec(x_24);
return x_25;
}
else
{
uint8_t x_26; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_26 = !lean_is_exclusive(x_10);
if (x_26 == 0)
{
return x_10;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_10, 0);
x_28 = lean_ctor_get(x_10, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_10);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
lean_object* l___private_Lean_Elab_Match_41__elabMatchCore___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_10;
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_7, x_8);
lean_dec(x_7);
x_10 = l_Lean_Syntax_isNone(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_4);
x_11 = 1;
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_4, x_12);
lean_dec(x_4);
x_4 = x_13;
goto _start;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_7, x_8);
lean_dec(x_7);
x_10 = l_Lean_Syntax_isNone(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_4);
x_11 = 1;
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_4, x_12);
lean_dec(x_4);
x_4 = x_13;
goto _start;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_7, x_8);
lean_dec(x_7);
x_10 = l_Lean_Syntax_isNone(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_4);
x_11 = 1;
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_4, x_12);
lean_dec(x_4);
x_4 = x_13;
goto _start;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_7, x_8);
lean_dec(x_7);
x_10 = l_Lean_Syntax_isNone(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_4);
x_11 = 1;
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_4, x_12);
lean_dec(x_4);
x_4 = x_13;
goto _start;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_7, x_8);
lean_dec(x_7);
x_10 = l_Lean_Syntax_isNone(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_4);
x_11 = 1;
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_4, x_12);
lean_dec(x_4);
x_4 = x_13;
goto _start;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_7, x_8);
lean_dec(x_7);
x_10 = l_Lean_Syntax_isNone(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_4);
x_11 = 1;
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_4, x_12);
lean_dec(x_4);
x_4 = x_13;
goto _start;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_7, x_8);
lean_dec(x_7);
x_10 = l_Lean_Syntax_isNone(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_4);
x_11 = 1;
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_4, x_12);
lean_dec(x_4);
x_4 = x_13;
goto _start;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_7, x_8);
lean_dec(x_7);
x_10 = l_Lean_Syntax_isNone(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_4);
x_11 = 1;
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_4, x_12);
lean_dec(x_4);
x_4 = x_13;
goto _start;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_7, x_8);
lean_dec(x_7);
x_10 = l_Lean_Syntax_isNone(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_4);
x_11 = 1;
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_4, x_12);
lean_dec(x_4);
x_4 = x_13;
goto _start;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_7, x_8);
lean_dec(x_7);
x_10 = l_Lean_Syntax_isNone(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_4);
x_11 = 1;
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_4, x_12);
lean_dec(x_4);
x_4 = x_13;
goto _start;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_7, x_8);
lean_dec(x_7);
x_10 = l_Lean_Syntax_isNone(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_4);
x_11 = 1;
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_4, x_12);
lean_dec(x_4);
x_4 = x_13;
goto _start;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_7, x_8);
lean_dec(x_7);
x_10 = l_Lean_Syntax_isNone(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_4);
x_11 = 1;
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_4, x_12);
lean_dec(x_4);
x_4 = x_13;
goto _start;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_7, x_8);
lean_dec(x_7);
x_10 = l_Lean_Syntax_isNone(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_4);
x_11 = 1;
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_4, x_12);
lean_dec(x_4);
x_4 = x_13;
goto _start;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_7, x_8);
lean_dec(x_7);
x_10 = l_Lean_Syntax_isNone(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_4);
x_11 = 1;
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_4, x_12);
lean_dec(x_4);
x_4 = x_13;
goto _start;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__15(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_7, x_8);
lean_dec(x_7);
x_10 = l_Lean_Syntax_isNone(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_4);
x_11 = 1;
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_4, x_12);
lean_dec(x_4);
x_4 = x_13;
goto _start;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__16(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_7, x_8);
lean_dec(x_7);
x_10 = l_Lean_Syntax_isNone(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_4);
x_11 = 1;
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_4, x_12);
lean_dec(x_4);
x_4 = x_13;
goto _start;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__17(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_7, x_8);
lean_dec(x_7);
x_10 = l_Lean_Syntax_isNone(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_4);
x_11 = 1;
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_4, x_12);
lean_dec(x_4);
x_4 = x_13;
goto _start;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__18(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_7, x_8);
lean_dec(x_7);
x_10 = l_Lean_Syntax_isNone(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_4);
x_11 = 1;
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_4, x_12);
lean_dec(x_4);
x_4 = x_13;
goto _start;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__19(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_7, x_8);
lean_dec(x_7);
x_10 = l_Lean_Syntax_isNone(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_4);
x_11 = 1;
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_4, x_12);
lean_dec(x_4);
x_4 = x_13;
goto _start;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__20(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_7, x_8);
lean_dec(x_7);
x_10 = l_Lean_Syntax_isNone(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_4);
x_11 = 1;
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_4, x_12);
lean_dec(x_4);
x_4 = x_13;
goto _start;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__21(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_7, x_8);
lean_dec(x_7);
x_10 = l_Lean_Syntax_isNone(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_4);
x_11 = 1;
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_4, x_12);
lean_dec(x_4);
x_4 = x_13;
goto _start;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__22(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_7, x_8);
lean_dec(x_7);
x_10 = l_Lean_Syntax_isNone(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_4);
x_11 = 1;
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_4, x_12);
lean_dec(x_4);
x_4 = x_13;
goto _start;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__23(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_7, x_8);
lean_dec(x_7);
x_10 = l_Lean_Syntax_isNone(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_4);
x_11 = 1;
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_4, x_12);
lean_dec(x_4);
x_4 = x_13;
goto _start;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__24(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_7, x_8);
lean_dec(x_7);
x_10 = l_Lean_Syntax_isNone(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_4);
x_11 = 1;
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_4, x_12);
lean_dec(x_4);
x_4 = x_13;
goto _start;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__25(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_7, x_8);
lean_dec(x_7);
x_10 = l_Lean_Syntax_isNone(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_4);
x_11 = 1;
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_4, x_12);
lean_dec(x_4);
x_4 = x_13;
goto _start;
}
}
}
}
uint8_t l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__26(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_7 = lean_array_fget(x_2, x_4);
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_7, x_8);
lean_dec(x_7);
x_10 = l_Lean_Syntax_isNone(x_9);
lean_dec(x_9);
if (x_10 == 0)
{
uint8_t x_11; 
lean_dec(x_4);
x_11 = 1;
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_4, x_12);
lean_dec(x_4);
x_4 = x_13;
goto _start;
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_elabMatch___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("match expected type should not be provided when discriminants with equality proofs are used");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_elabMatch___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabMatch___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* _init_l_Lean_Elab_Term_elabMatch___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Term_elabMatch___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Term_elabMatch(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_620; uint8_t x_621; 
x_620 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
lean_inc(x_1);
x_621 = l_Lean_Syntax_isOfKind(x_1, x_620);
if (x_621 == 0)
{
uint8_t x_622; 
x_622 = 0;
x_10 = x_622;
goto block_619;
}
else
{
lean_object* x_623; lean_object* x_624; lean_object* x_625; uint8_t x_626; 
x_623 = l_Lean_Syntax_getArgs(x_1);
x_624 = lean_array_get_size(x_623);
lean_dec(x_623);
x_625 = lean_unsigned_to_nat(5u);
x_626 = lean_nat_dec_eq(x_624, x_625);
lean_dec(x_624);
x_10 = x_626;
goto block_619;
}
block_619:
{
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
x_13 = l_Lean_Syntax_getArgs(x_12);
lean_dec(x_12);
x_14 = lean_unsigned_to_nat(2u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
x_16 = l_Lean_Syntax_isNone(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_17 = lean_unsigned_to_nat(0u);
x_18 = l_Array_empty___closed__1;
x_19 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_14, x_13, x_17, x_18);
lean_dec(x_13);
x_20 = lean_array_get_size(x_19);
x_21 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__1(x_1, x_19, x_20, x_17);
lean_dec(x_20);
lean_dec(x_19);
if (x_21 == 0)
{
lean_object* x_22; 
lean_dec(x_15);
x_22 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
lean_dec(x_2);
lean_dec(x_1);
x_23 = l_Lean_Elab_Term_elabMatch___closed__3;
x_24 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_15, x_23, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_15);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
return x_24;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_24, 0);
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_24);
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
return x_28;
}
}
}
else
{
lean_object* x_29; 
lean_dec(x_15);
lean_dec(x_13);
x_29 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_613; uint8_t x_614; 
x_30 = lean_unsigned_to_nat(1u);
x_31 = l_Lean_Syntax_getArg(x_1, x_30);
x_613 = l_Lean_nullKind___closed__2;
lean_inc(x_31);
x_614 = l_Lean_Syntax_isOfKind(x_31, x_613);
if (x_614 == 0)
{
uint8_t x_615; 
x_615 = 0;
x_32 = x_615;
goto block_612;
}
else
{
lean_object* x_616; lean_object* x_617; uint8_t x_618; 
x_616 = l_Lean_Syntax_getArgs(x_31);
x_617 = lean_array_get_size(x_616);
lean_dec(x_616);
x_618 = lean_nat_dec_eq(x_617, x_30);
lean_dec(x_617);
x_32 = x_618;
goto block_612;
}
block_612:
{
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_33 = l_Lean_Syntax_getArgs(x_31);
lean_dec(x_31);
x_34 = lean_unsigned_to_nat(2u);
x_35 = l_Lean_Syntax_getArg(x_1, x_34);
x_36 = l_Lean_Syntax_isNone(x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_37 = lean_unsigned_to_nat(0u);
x_38 = l_Array_empty___closed__1;
x_39 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_34, x_33, x_37, x_38);
lean_dec(x_33);
x_40 = lean_array_get_size(x_39);
x_41 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__2(x_1, x_39, x_40, x_37);
lean_dec(x_40);
lean_dec(x_39);
if (x_41 == 0)
{
lean_object* x_42; 
lean_dec(x_35);
x_42 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; uint8_t x_45; 
lean_dec(x_2);
lean_dec(x_1);
x_43 = l_Lean_Elab_Term_elabMatch___closed__3;
x_44 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_35, x_43, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_35);
x_45 = !lean_is_exclusive(x_44);
if (x_45 == 0)
{
return x_44;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_44, 0);
x_47 = lean_ctor_get(x_44, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_44);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
lean_object* x_49; 
lean_dec(x_35);
lean_dec(x_33);
x_49 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_49;
}
}
else
{
lean_object* x_50; lean_object* x_51; uint8_t x_52; lean_object* x_605; uint8_t x_606; 
x_50 = lean_unsigned_to_nat(0u);
x_51 = l_Lean_Syntax_getArg(x_31, x_50);
x_605 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__6;
lean_inc(x_51);
x_606 = l_Lean_Syntax_isOfKind(x_51, x_605);
if (x_606 == 0)
{
uint8_t x_607; 
x_607 = 0;
x_52 = x_607;
goto block_604;
}
else
{
lean_object* x_608; lean_object* x_609; lean_object* x_610; uint8_t x_611; 
x_608 = l_Lean_Syntax_getArgs(x_51);
x_609 = lean_array_get_size(x_608);
lean_dec(x_608);
x_610 = lean_unsigned_to_nat(2u);
x_611 = lean_nat_dec_eq(x_609, x_610);
lean_dec(x_609);
x_52 = x_611;
goto block_604;
}
block_604:
{
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
lean_dec(x_51);
x_53 = l_Lean_Syntax_getArgs(x_31);
lean_dec(x_31);
x_54 = lean_unsigned_to_nat(2u);
x_55 = l_Lean_Syntax_getArg(x_1, x_54);
x_56 = l_Lean_Syntax_isNone(x_55);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
x_57 = l_Array_empty___closed__1;
x_58 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_54, x_53, x_50, x_57);
lean_dec(x_53);
x_59 = lean_array_get_size(x_58);
x_60 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__3(x_1, x_58, x_59, x_50);
lean_dec(x_59);
lean_dec(x_58);
if (x_60 == 0)
{
lean_object* x_61; 
lean_dec(x_55);
x_61 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_61;
}
else
{
lean_object* x_62; lean_object* x_63; uint8_t x_64; 
lean_dec(x_2);
lean_dec(x_1);
x_62 = l_Lean_Elab_Term_elabMatch___closed__3;
x_63 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_55, x_62, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_55);
x_64 = !lean_is_exclusive(x_63);
if (x_64 == 0)
{
return x_63;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_63, 0);
x_66 = lean_ctor_get(x_63, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_63);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
else
{
lean_object* x_68; 
lean_dec(x_55);
lean_dec(x_53);
x_68 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_68;
}
}
else
{
lean_object* x_69; uint8_t x_70; lean_object* x_598; uint8_t x_599; 
x_69 = l_Lean_Syntax_getArg(x_51, x_50);
x_598 = l_Lean_nullKind___closed__2;
lean_inc(x_69);
x_599 = l_Lean_Syntax_isOfKind(x_69, x_598);
if (x_599 == 0)
{
uint8_t x_600; 
lean_dec(x_69);
x_600 = 0;
x_70 = x_600;
goto block_597;
}
else
{
lean_object* x_601; lean_object* x_602; uint8_t x_603; 
x_601 = l_Lean_Syntax_getArgs(x_69);
lean_dec(x_69);
x_602 = lean_array_get_size(x_601);
lean_dec(x_601);
x_603 = lean_nat_dec_eq(x_602, x_50);
lean_dec(x_602);
x_70 = x_603;
goto block_597;
}
block_597:
{
if (x_70 == 0)
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
lean_dec(x_51);
x_71 = l_Lean_Syntax_getArgs(x_31);
lean_dec(x_31);
x_72 = lean_unsigned_to_nat(2u);
x_73 = l_Lean_Syntax_getArg(x_1, x_72);
x_74 = l_Lean_Syntax_isNone(x_73);
if (x_74 == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; 
x_75 = l_Array_empty___closed__1;
x_76 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_72, x_71, x_50, x_75);
lean_dec(x_71);
x_77 = lean_array_get_size(x_76);
x_78 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__4(x_1, x_76, x_77, x_50);
lean_dec(x_77);
lean_dec(x_76);
if (x_78 == 0)
{
lean_object* x_79; 
lean_dec(x_73);
x_79 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_79;
}
else
{
lean_object* x_80; lean_object* x_81; uint8_t x_82; 
lean_dec(x_2);
lean_dec(x_1);
x_80 = l_Lean_Elab_Term_elabMatch___closed__3;
x_81 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_73, x_80, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_73);
x_82 = !lean_is_exclusive(x_81);
if (x_82 == 0)
{
return x_81;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_83 = lean_ctor_get(x_81, 0);
x_84 = lean_ctor_get(x_81, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_81);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
return x_85;
}
}
}
else
{
lean_object* x_86; 
lean_dec(x_73);
lean_dec(x_71);
x_86 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_86;
}
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; uint8_t x_90; lean_object* x_359; uint8_t x_360; uint8_t x_361; 
x_87 = l_Lean_Syntax_getArg(x_51, x_30);
lean_dec(x_51);
x_88 = lean_unsigned_to_nat(2u);
x_89 = l_Lean_Syntax_getArg(x_1, x_88);
x_359 = l_Lean_nullKind___closed__2;
lean_inc(x_89);
x_360 = l_Lean_Syntax_isOfKind(x_89, x_359);
if (x_360 == 0)
{
uint8_t x_593; 
x_593 = 0;
x_361 = x_593;
goto block_592;
}
else
{
lean_object* x_594; lean_object* x_595; uint8_t x_596; 
x_594 = l_Lean_Syntax_getArgs(x_89);
x_595 = lean_array_get_size(x_594);
lean_dec(x_594);
x_596 = lean_nat_dec_eq(x_595, x_50);
lean_dec(x_595);
x_361 = x_596;
goto block_592;
}
block_358:
{
if (x_90 == 0)
{
lean_object* x_91; uint8_t x_92; 
lean_dec(x_87);
x_91 = l_Lean_Syntax_getArgs(x_31);
lean_dec(x_31);
x_92 = l_Lean_Syntax_isNone(x_89);
if (x_92 == 0)
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; uint8_t x_96; 
x_93 = l_Array_empty___closed__1;
x_94 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_88, x_91, x_50, x_93);
lean_dec(x_91);
x_95 = lean_array_get_size(x_94);
x_96 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__5(x_1, x_94, x_95, x_50);
lean_dec(x_95);
lean_dec(x_94);
if (x_96 == 0)
{
lean_object* x_97; 
lean_dec(x_89);
x_97 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_97;
}
else
{
lean_object* x_98; lean_object* x_99; uint8_t x_100; 
lean_dec(x_2);
lean_dec(x_1);
x_98 = l_Lean_Elab_Term_elabMatch___closed__3;
x_99 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_89, x_98, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_89);
x_100 = !lean_is_exclusive(x_99);
if (x_100 == 0)
{
return x_99;
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_101 = lean_ctor_get(x_99, 0);
x_102 = lean_ctor_get(x_99, 1);
lean_inc(x_102);
lean_inc(x_101);
lean_dec(x_99);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_101);
lean_ctor_set(x_103, 1, x_102);
return x_103;
}
}
}
else
{
lean_object* x_104; 
lean_dec(x_91);
lean_dec(x_89);
x_104 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_104;
}
}
else
{
lean_object* x_105; uint8_t x_106; lean_object* x_352; uint8_t x_353; 
x_105 = l_Lean_Syntax_getArg(x_89, x_50);
x_352 = l_Lean_Elab_Term_elabLetDeclCore___closed__6;
lean_inc(x_105);
x_353 = l_Lean_Syntax_isOfKind(x_105, x_352);
if (x_353 == 0)
{
uint8_t x_354; 
x_354 = 0;
x_106 = x_354;
goto block_351;
}
else
{
lean_object* x_355; lean_object* x_356; uint8_t x_357; 
x_355 = l_Lean_Syntax_getArgs(x_105);
x_356 = lean_array_get_size(x_355);
lean_dec(x_355);
x_357 = lean_nat_dec_eq(x_356, x_88);
lean_dec(x_356);
x_106 = x_357;
goto block_351;
}
block_351:
{
if (x_106 == 0)
{
lean_object* x_107; uint8_t x_108; 
lean_dec(x_105);
lean_dec(x_87);
x_107 = l_Lean_Syntax_getArgs(x_31);
lean_dec(x_31);
x_108 = l_Lean_Syntax_isNone(x_89);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; uint8_t x_112; 
x_109 = l_Array_empty___closed__1;
x_110 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_88, x_107, x_50, x_109);
lean_dec(x_107);
x_111 = lean_array_get_size(x_110);
x_112 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__6(x_1, x_110, x_111, x_50);
lean_dec(x_111);
lean_dec(x_110);
if (x_112 == 0)
{
lean_object* x_113; 
lean_dec(x_89);
x_113 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_113;
}
else
{
lean_object* x_114; lean_object* x_115; uint8_t x_116; 
lean_dec(x_2);
lean_dec(x_1);
x_114 = l_Lean_Elab_Term_elabMatch___closed__3;
x_115 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_89, x_114, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_89);
x_116 = !lean_is_exclusive(x_115);
if (x_116 == 0)
{
return x_115;
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_117 = lean_ctor_get(x_115, 0);
x_118 = lean_ctor_get(x_115, 1);
lean_inc(x_118);
lean_inc(x_117);
lean_dec(x_115);
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_117);
lean_ctor_set(x_119, 1, x_118);
return x_119;
}
}
}
else
{
lean_object* x_120; 
lean_dec(x_107);
lean_dec(x_89);
x_120 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_120;
}
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; uint8_t x_124; lean_object* x_345; uint8_t x_346; 
x_121 = l_Lean_Syntax_getArg(x_105, x_30);
lean_dec(x_105);
x_122 = lean_unsigned_to_nat(4u);
x_123 = l_Lean_Syntax_getArg(x_1, x_122);
x_345 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__11;
lean_inc(x_123);
x_346 = l_Lean_Syntax_isOfKind(x_123, x_345);
if (x_346 == 0)
{
uint8_t x_347; 
x_347 = 0;
x_124 = x_347;
goto block_344;
}
else
{
lean_object* x_348; lean_object* x_349; uint8_t x_350; 
x_348 = l_Lean_Syntax_getArgs(x_123);
x_349 = lean_array_get_size(x_348);
lean_dec(x_348);
x_350 = lean_nat_dec_eq(x_349, x_88);
lean_dec(x_349);
x_124 = x_350;
goto block_344;
}
block_344:
{
if (x_124 == 0)
{
lean_object* x_125; uint8_t x_126; 
lean_dec(x_123);
lean_dec(x_121);
lean_dec(x_87);
x_125 = l_Lean_Syntax_getArgs(x_31);
lean_dec(x_31);
x_126 = l_Lean_Syntax_isNone(x_89);
if (x_126 == 0)
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; uint8_t x_130; 
x_127 = l_Array_empty___closed__1;
x_128 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_88, x_125, x_50, x_127);
lean_dec(x_125);
x_129 = lean_array_get_size(x_128);
x_130 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__7(x_1, x_128, x_129, x_50);
lean_dec(x_129);
lean_dec(x_128);
if (x_130 == 0)
{
lean_object* x_131; 
lean_dec(x_89);
x_131 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_131;
}
else
{
lean_object* x_132; lean_object* x_133; uint8_t x_134; 
lean_dec(x_2);
lean_dec(x_1);
x_132 = l_Lean_Elab_Term_elabMatch___closed__3;
x_133 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_89, x_132, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_89);
x_134 = !lean_is_exclusive(x_133);
if (x_134 == 0)
{
return x_133;
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; 
x_135 = lean_ctor_get(x_133, 0);
x_136 = lean_ctor_get(x_133, 1);
lean_inc(x_136);
lean_inc(x_135);
lean_dec(x_133);
x_137 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_137, 0, x_135);
lean_ctor_set(x_137, 1, x_136);
return x_137;
}
}
}
else
{
lean_object* x_138; 
lean_dec(x_125);
lean_dec(x_89);
x_138 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_138;
}
}
else
{
lean_object* x_139; uint8_t x_140; lean_object* x_245; uint8_t x_246; uint8_t x_247; 
x_139 = l_Lean_Syntax_getArg(x_123, x_50);
x_245 = l_Lean_nullKind___closed__2;
lean_inc(x_139);
x_246 = l_Lean_Syntax_isOfKind(x_139, x_245);
if (x_246 == 0)
{
uint8_t x_340; 
x_340 = 0;
x_247 = x_340;
goto block_339;
}
else
{
lean_object* x_341; lean_object* x_342; uint8_t x_343; 
x_341 = l_Lean_Syntax_getArgs(x_139);
x_342 = lean_array_get_size(x_341);
lean_dec(x_341);
x_343 = lean_nat_dec_eq(x_342, x_50);
lean_dec(x_342);
x_247 = x_343;
goto block_339;
}
block_244:
{
if (x_140 == 0)
{
lean_object* x_141; uint8_t x_142; 
lean_dec(x_123);
lean_dec(x_121);
lean_dec(x_87);
x_141 = l_Lean_Syntax_getArgs(x_31);
lean_dec(x_31);
x_142 = l_Lean_Syntax_isNone(x_89);
if (x_142 == 0)
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; uint8_t x_146; 
x_143 = l_Array_empty___closed__1;
x_144 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_88, x_141, x_50, x_143);
lean_dec(x_141);
x_145 = lean_array_get_size(x_144);
x_146 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__8(x_1, x_144, x_145, x_50);
lean_dec(x_145);
lean_dec(x_144);
if (x_146 == 0)
{
lean_object* x_147; 
lean_dec(x_89);
x_147 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_147;
}
else
{
lean_object* x_148; lean_object* x_149; uint8_t x_150; 
lean_dec(x_2);
lean_dec(x_1);
x_148 = l_Lean_Elab_Term_elabMatch___closed__3;
x_149 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_89, x_148, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_89);
x_150 = !lean_is_exclusive(x_149);
if (x_150 == 0)
{
return x_149;
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_151 = lean_ctor_get(x_149, 0);
x_152 = lean_ctor_get(x_149, 1);
lean_inc(x_152);
lean_inc(x_151);
lean_dec(x_149);
x_153 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_153, 0, x_151);
lean_ctor_set(x_153, 1, x_152);
return x_153;
}
}
}
else
{
lean_object* x_154; 
lean_dec(x_141);
lean_dec(x_89);
x_154 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_154;
}
}
else
{
lean_object* x_155; uint8_t x_156; lean_object* x_238; uint8_t x_239; 
x_155 = l_Lean_Syntax_getArg(x_123, x_30);
lean_dec(x_123);
x_238 = l_Lean_nullKind___closed__2;
lean_inc(x_155);
x_239 = l_Lean_Syntax_isOfKind(x_155, x_238);
if (x_239 == 0)
{
uint8_t x_240; 
x_240 = 0;
x_156 = x_240;
goto block_237;
}
else
{
lean_object* x_241; lean_object* x_242; uint8_t x_243; 
x_241 = l_Lean_Syntax_getArgs(x_155);
x_242 = lean_array_get_size(x_241);
lean_dec(x_241);
x_243 = lean_nat_dec_eq(x_242, x_30);
lean_dec(x_242);
x_156 = x_243;
goto block_237;
}
block_237:
{
if (x_156 == 0)
{
lean_object* x_157; uint8_t x_158; 
lean_dec(x_155);
lean_dec(x_121);
lean_dec(x_87);
x_157 = l_Lean_Syntax_getArgs(x_31);
lean_dec(x_31);
x_158 = l_Lean_Syntax_isNone(x_89);
if (x_158 == 0)
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; uint8_t x_162; 
x_159 = l_Array_empty___closed__1;
x_160 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_88, x_157, x_50, x_159);
lean_dec(x_157);
x_161 = lean_array_get_size(x_160);
x_162 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__9(x_1, x_160, x_161, x_50);
lean_dec(x_161);
lean_dec(x_160);
if (x_162 == 0)
{
lean_object* x_163; 
lean_dec(x_89);
x_163 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_163;
}
else
{
lean_object* x_164; lean_object* x_165; uint8_t x_166; 
lean_dec(x_2);
lean_dec(x_1);
x_164 = l_Lean_Elab_Term_elabMatch___closed__3;
x_165 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_89, x_164, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_89);
x_166 = !lean_is_exclusive(x_165);
if (x_166 == 0)
{
return x_165;
}
else
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_167 = lean_ctor_get(x_165, 0);
x_168 = lean_ctor_get(x_165, 1);
lean_inc(x_168);
lean_inc(x_167);
lean_dec(x_165);
x_169 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_169, 0, x_167);
lean_ctor_set(x_169, 1, x_168);
return x_169;
}
}
}
else
{
lean_object* x_170; 
lean_dec(x_157);
lean_dec(x_89);
x_170 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_170;
}
}
else
{
lean_object* x_171; uint8_t x_172; lean_object* x_230; uint8_t x_231; 
x_171 = l_Lean_Syntax_getArg(x_155, x_50);
lean_dec(x_155);
x_230 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__18;
lean_inc(x_171);
x_231 = l_Lean_Syntax_isOfKind(x_171, x_230);
if (x_231 == 0)
{
uint8_t x_232; 
x_232 = 0;
x_172 = x_232;
goto block_229;
}
else
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; uint8_t x_236; 
x_233 = l_Lean_Syntax_getArgs(x_171);
x_234 = lean_array_get_size(x_233);
lean_dec(x_233);
x_235 = lean_unsigned_to_nat(3u);
x_236 = lean_nat_dec_eq(x_234, x_235);
lean_dec(x_234);
x_172 = x_236;
goto block_229;
}
block_229:
{
if (x_172 == 0)
{
lean_object* x_173; uint8_t x_174; 
lean_dec(x_171);
lean_dec(x_121);
lean_dec(x_87);
x_173 = l_Lean_Syntax_getArgs(x_31);
lean_dec(x_31);
x_174 = l_Lean_Syntax_isNone(x_89);
if (x_174 == 0)
{
lean_object* x_175; lean_object* x_176; lean_object* x_177; uint8_t x_178; 
x_175 = l_Array_empty___closed__1;
x_176 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_88, x_173, x_50, x_175);
lean_dec(x_173);
x_177 = lean_array_get_size(x_176);
x_178 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__10(x_1, x_176, x_177, x_50);
lean_dec(x_177);
lean_dec(x_176);
if (x_178 == 0)
{
lean_object* x_179; 
lean_dec(x_89);
x_179 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_179;
}
else
{
lean_object* x_180; lean_object* x_181; uint8_t x_182; 
lean_dec(x_2);
lean_dec(x_1);
x_180 = l_Lean_Elab_Term_elabMatch___closed__3;
x_181 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_89, x_180, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_89);
x_182 = !lean_is_exclusive(x_181);
if (x_182 == 0)
{
return x_181;
}
else
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; 
x_183 = lean_ctor_get(x_181, 0);
x_184 = lean_ctor_get(x_181, 1);
lean_inc(x_184);
lean_inc(x_183);
lean_dec(x_181);
x_185 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_185, 0, x_183);
lean_ctor_set(x_185, 1, x_184);
return x_185;
}
}
}
else
{
lean_object* x_186; 
lean_dec(x_173);
lean_dec(x_89);
x_186 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_186;
}
}
else
{
lean_object* x_187; uint8_t x_188; lean_object* x_223; uint8_t x_224; 
x_187 = l_Lean_Syntax_getArg(x_171, x_50);
x_223 = l_Lean_nullKind___closed__2;
lean_inc(x_187);
x_224 = l_Lean_Syntax_isOfKind(x_187, x_223);
if (x_224 == 0)
{
uint8_t x_225; 
x_225 = 0;
x_188 = x_225;
goto block_222;
}
else
{
lean_object* x_226; lean_object* x_227; uint8_t x_228; 
x_226 = l_Lean_Syntax_getArgs(x_187);
x_227 = lean_array_get_size(x_226);
lean_dec(x_226);
x_228 = lean_nat_dec_eq(x_227, x_30);
lean_dec(x_227);
x_188 = x_228;
goto block_222;
}
block_222:
{
if (x_188 == 0)
{
lean_object* x_189; uint8_t x_190; 
lean_dec(x_187);
lean_dec(x_171);
lean_dec(x_121);
lean_dec(x_87);
x_189 = l_Lean_Syntax_getArgs(x_31);
lean_dec(x_31);
x_190 = l_Lean_Syntax_isNone(x_89);
if (x_190 == 0)
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; uint8_t x_194; 
x_191 = l_Array_empty___closed__1;
x_192 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_88, x_189, x_50, x_191);
lean_dec(x_189);
x_193 = lean_array_get_size(x_192);
x_194 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__11(x_1, x_192, x_193, x_50);
lean_dec(x_193);
lean_dec(x_192);
if (x_194 == 0)
{
lean_object* x_195; 
lean_dec(x_89);
x_195 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_195;
}
else
{
lean_object* x_196; lean_object* x_197; uint8_t x_198; 
lean_dec(x_2);
lean_dec(x_1);
x_196 = l_Lean_Elab_Term_elabMatch___closed__3;
x_197 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_89, x_196, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_89);
x_198 = !lean_is_exclusive(x_197);
if (x_198 == 0)
{
return x_197;
}
else
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; 
x_199 = lean_ctor_get(x_197, 0);
x_200 = lean_ctor_get(x_197, 1);
lean_inc(x_200);
lean_inc(x_199);
lean_dec(x_197);
x_201 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_201, 0, x_199);
lean_ctor_set(x_201, 1, x_200);
return x_201;
}
}
}
else
{
lean_object* x_202; 
lean_dec(x_189);
lean_dec(x_89);
x_202 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_202;
}
}
else
{
lean_object* x_203; lean_object* x_204; uint8_t x_205; 
x_203 = l_Lean_Syntax_getArg(x_187, x_50);
lean_dec(x_187);
x_204 = l_Lean_identKind___closed__2;
lean_inc(x_203);
x_205 = l_Lean_Syntax_isOfKind(x_203, x_204);
if (x_205 == 0)
{
lean_object* x_206; uint8_t x_207; 
lean_dec(x_203);
lean_dec(x_171);
lean_dec(x_121);
lean_dec(x_87);
x_206 = l_Lean_Syntax_getArgs(x_31);
lean_dec(x_31);
x_207 = l_Lean_Syntax_isNone(x_89);
if (x_207 == 0)
{
lean_object* x_208; lean_object* x_209; lean_object* x_210; uint8_t x_211; 
x_208 = l_Array_empty___closed__1;
x_209 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_88, x_206, x_50, x_208);
lean_dec(x_206);
x_210 = lean_array_get_size(x_209);
x_211 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__12(x_1, x_209, x_210, x_50);
lean_dec(x_210);
lean_dec(x_209);
if (x_211 == 0)
{
lean_object* x_212; 
lean_dec(x_89);
x_212 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_212;
}
else
{
lean_object* x_213; lean_object* x_214; uint8_t x_215; 
lean_dec(x_2);
lean_dec(x_1);
x_213 = l_Lean_Elab_Term_elabMatch___closed__3;
x_214 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_89, x_213, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_89);
x_215 = !lean_is_exclusive(x_214);
if (x_215 == 0)
{
return x_214;
}
else
{
lean_object* x_216; lean_object* x_217; lean_object* x_218; 
x_216 = lean_ctor_get(x_214, 0);
x_217 = lean_ctor_get(x_214, 1);
lean_inc(x_217);
lean_inc(x_216);
lean_dec(x_214);
x_218 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_218, 0, x_216);
lean_ctor_set(x_218, 1, x_217);
return x_218;
}
}
}
else
{
lean_object* x_219; 
lean_dec(x_206);
lean_dec(x_89);
x_219 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_219;
}
}
else
{
lean_object* x_220; lean_object* x_221; 
lean_dec(x_89);
lean_dec(x_31);
x_220 = l_Lean_Syntax_getArg(x_171, x_88);
lean_dec(x_171);
x_221 = l___private_Lean_Elab_Match_2__expandSimpleMatchWithType(x_1, x_87, x_203, x_121, x_220, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_221;
}
}
}
}
}
}
}
}
}
block_339:
{
if (x_247 == 0)
{
if (x_246 == 0)
{
uint8_t x_248; 
lean_dec(x_139);
x_248 = 0;
x_140 = x_248;
goto block_244;
}
else
{
lean_object* x_249; lean_object* x_250; uint8_t x_251; 
x_249 = l_Lean_Syntax_getArgs(x_139);
lean_dec(x_139);
x_250 = lean_array_get_size(x_249);
lean_dec(x_249);
x_251 = lean_nat_dec_eq(x_250, x_30);
lean_dec(x_250);
x_140 = x_251;
goto block_244;
}
}
else
{
lean_object* x_252; uint8_t x_253; uint8_t x_334; 
lean_dec(x_139);
x_252 = l_Lean_Syntax_getArg(x_123, x_30);
lean_dec(x_123);
lean_inc(x_252);
x_334 = l_Lean_Syntax_isOfKind(x_252, x_245);
if (x_334 == 0)
{
uint8_t x_335; 
x_335 = 0;
x_253 = x_335;
goto block_333;
}
else
{
lean_object* x_336; lean_object* x_337; uint8_t x_338; 
x_336 = l_Lean_Syntax_getArgs(x_252);
x_337 = lean_array_get_size(x_336);
lean_dec(x_336);
x_338 = lean_nat_dec_eq(x_337, x_30);
lean_dec(x_337);
x_253 = x_338;
goto block_333;
}
block_333:
{
if (x_253 == 0)
{
lean_object* x_254; uint8_t x_255; 
lean_dec(x_252);
lean_dec(x_121);
lean_dec(x_87);
x_254 = l_Lean_Syntax_getArgs(x_31);
lean_dec(x_31);
x_255 = l_Lean_Syntax_isNone(x_89);
if (x_255 == 0)
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; uint8_t x_259; 
x_256 = l_Array_empty___closed__1;
x_257 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_88, x_254, x_50, x_256);
lean_dec(x_254);
x_258 = lean_array_get_size(x_257);
x_259 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__13(x_1, x_257, x_258, x_50);
lean_dec(x_258);
lean_dec(x_257);
if (x_259 == 0)
{
lean_object* x_260; 
lean_dec(x_89);
x_260 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_260;
}
else
{
lean_object* x_261; lean_object* x_262; uint8_t x_263; 
lean_dec(x_2);
lean_dec(x_1);
x_261 = l_Lean_Elab_Term_elabMatch___closed__3;
x_262 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_89, x_261, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_89);
x_263 = !lean_is_exclusive(x_262);
if (x_263 == 0)
{
return x_262;
}
else
{
lean_object* x_264; lean_object* x_265; lean_object* x_266; 
x_264 = lean_ctor_get(x_262, 0);
x_265 = lean_ctor_get(x_262, 1);
lean_inc(x_265);
lean_inc(x_264);
lean_dec(x_262);
x_266 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_266, 0, x_264);
lean_ctor_set(x_266, 1, x_265);
return x_266;
}
}
}
else
{
lean_object* x_267; 
lean_dec(x_254);
lean_dec(x_89);
x_267 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_267;
}
}
else
{
lean_object* x_268; uint8_t x_269; lean_object* x_326; uint8_t x_327; 
x_268 = l_Lean_Syntax_getArg(x_252, x_50);
lean_dec(x_252);
x_326 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__18;
lean_inc(x_268);
x_327 = l_Lean_Syntax_isOfKind(x_268, x_326);
if (x_327 == 0)
{
uint8_t x_328; 
x_328 = 0;
x_269 = x_328;
goto block_325;
}
else
{
lean_object* x_329; lean_object* x_330; lean_object* x_331; uint8_t x_332; 
x_329 = l_Lean_Syntax_getArgs(x_268);
x_330 = lean_array_get_size(x_329);
lean_dec(x_329);
x_331 = lean_unsigned_to_nat(3u);
x_332 = lean_nat_dec_eq(x_330, x_331);
lean_dec(x_330);
x_269 = x_332;
goto block_325;
}
block_325:
{
if (x_269 == 0)
{
lean_object* x_270; uint8_t x_271; 
lean_dec(x_268);
lean_dec(x_121);
lean_dec(x_87);
x_270 = l_Lean_Syntax_getArgs(x_31);
lean_dec(x_31);
x_271 = l_Lean_Syntax_isNone(x_89);
if (x_271 == 0)
{
lean_object* x_272; lean_object* x_273; lean_object* x_274; uint8_t x_275; 
x_272 = l_Array_empty___closed__1;
x_273 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_88, x_270, x_50, x_272);
lean_dec(x_270);
x_274 = lean_array_get_size(x_273);
x_275 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__14(x_1, x_273, x_274, x_50);
lean_dec(x_274);
lean_dec(x_273);
if (x_275 == 0)
{
lean_object* x_276; 
lean_dec(x_89);
x_276 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_276;
}
else
{
lean_object* x_277; lean_object* x_278; uint8_t x_279; 
lean_dec(x_2);
lean_dec(x_1);
x_277 = l_Lean_Elab_Term_elabMatch___closed__3;
x_278 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_89, x_277, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_89);
x_279 = !lean_is_exclusive(x_278);
if (x_279 == 0)
{
return x_278;
}
else
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; 
x_280 = lean_ctor_get(x_278, 0);
x_281 = lean_ctor_get(x_278, 1);
lean_inc(x_281);
lean_inc(x_280);
lean_dec(x_278);
x_282 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_282, 0, x_280);
lean_ctor_set(x_282, 1, x_281);
return x_282;
}
}
}
else
{
lean_object* x_283; 
lean_dec(x_270);
lean_dec(x_89);
x_283 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_283;
}
}
else
{
lean_object* x_284; uint8_t x_285; uint8_t x_320; 
x_284 = l_Lean_Syntax_getArg(x_268, x_50);
lean_inc(x_284);
x_320 = l_Lean_Syntax_isOfKind(x_284, x_245);
if (x_320 == 0)
{
uint8_t x_321; 
x_321 = 0;
x_285 = x_321;
goto block_319;
}
else
{
lean_object* x_322; lean_object* x_323; uint8_t x_324; 
x_322 = l_Lean_Syntax_getArgs(x_284);
x_323 = lean_array_get_size(x_322);
lean_dec(x_322);
x_324 = lean_nat_dec_eq(x_323, x_30);
lean_dec(x_323);
x_285 = x_324;
goto block_319;
}
block_319:
{
if (x_285 == 0)
{
lean_object* x_286; uint8_t x_287; 
lean_dec(x_284);
lean_dec(x_268);
lean_dec(x_121);
lean_dec(x_87);
x_286 = l_Lean_Syntax_getArgs(x_31);
lean_dec(x_31);
x_287 = l_Lean_Syntax_isNone(x_89);
if (x_287 == 0)
{
lean_object* x_288; lean_object* x_289; lean_object* x_290; uint8_t x_291; 
x_288 = l_Array_empty___closed__1;
x_289 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_88, x_286, x_50, x_288);
lean_dec(x_286);
x_290 = lean_array_get_size(x_289);
x_291 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__15(x_1, x_289, x_290, x_50);
lean_dec(x_290);
lean_dec(x_289);
if (x_291 == 0)
{
lean_object* x_292; 
lean_dec(x_89);
x_292 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_292;
}
else
{
lean_object* x_293; lean_object* x_294; uint8_t x_295; 
lean_dec(x_2);
lean_dec(x_1);
x_293 = l_Lean_Elab_Term_elabMatch___closed__3;
x_294 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_89, x_293, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_89);
x_295 = !lean_is_exclusive(x_294);
if (x_295 == 0)
{
return x_294;
}
else
{
lean_object* x_296; lean_object* x_297; lean_object* x_298; 
x_296 = lean_ctor_get(x_294, 0);
x_297 = lean_ctor_get(x_294, 1);
lean_inc(x_297);
lean_inc(x_296);
lean_dec(x_294);
x_298 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_298, 0, x_296);
lean_ctor_set(x_298, 1, x_297);
return x_298;
}
}
}
else
{
lean_object* x_299; 
lean_dec(x_286);
lean_dec(x_89);
x_299 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_299;
}
}
else
{
lean_object* x_300; lean_object* x_301; uint8_t x_302; 
x_300 = l_Lean_Syntax_getArg(x_284, x_50);
lean_dec(x_284);
x_301 = l_Lean_identKind___closed__2;
lean_inc(x_300);
x_302 = l_Lean_Syntax_isOfKind(x_300, x_301);
if (x_302 == 0)
{
lean_object* x_303; uint8_t x_304; 
lean_dec(x_300);
lean_dec(x_268);
lean_dec(x_121);
lean_dec(x_87);
x_303 = l_Lean_Syntax_getArgs(x_31);
lean_dec(x_31);
x_304 = l_Lean_Syntax_isNone(x_89);
if (x_304 == 0)
{
lean_object* x_305; lean_object* x_306; lean_object* x_307; uint8_t x_308; 
x_305 = l_Array_empty___closed__1;
x_306 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_88, x_303, x_50, x_305);
lean_dec(x_303);
x_307 = lean_array_get_size(x_306);
x_308 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__16(x_1, x_306, x_307, x_50);
lean_dec(x_307);
lean_dec(x_306);
if (x_308 == 0)
{
lean_object* x_309; 
lean_dec(x_89);
x_309 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_309;
}
else
{
lean_object* x_310; lean_object* x_311; uint8_t x_312; 
lean_dec(x_2);
lean_dec(x_1);
x_310 = l_Lean_Elab_Term_elabMatch___closed__3;
x_311 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_89, x_310, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_89);
x_312 = !lean_is_exclusive(x_311);
if (x_312 == 0)
{
return x_311;
}
else
{
lean_object* x_313; lean_object* x_314; lean_object* x_315; 
x_313 = lean_ctor_get(x_311, 0);
x_314 = lean_ctor_get(x_311, 1);
lean_inc(x_314);
lean_inc(x_313);
lean_dec(x_311);
x_315 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_315, 0, x_313);
lean_ctor_set(x_315, 1, x_314);
return x_315;
}
}
}
else
{
lean_object* x_316; 
lean_dec(x_303);
lean_dec(x_89);
x_316 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_316;
}
}
else
{
lean_object* x_317; lean_object* x_318; 
lean_dec(x_89);
lean_dec(x_31);
x_317 = l_Lean_Syntax_getArg(x_268, x_88);
lean_dec(x_268);
x_318 = l___private_Lean_Elab_Match_2__expandSimpleMatchWithType(x_1, x_87, x_300, x_121, x_317, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_318;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
block_592:
{
if (x_361 == 0)
{
if (x_360 == 0)
{
uint8_t x_362; 
x_362 = 0;
x_90 = x_362;
goto block_358;
}
else
{
lean_object* x_363; lean_object* x_364; uint8_t x_365; 
x_363 = l_Lean_Syntax_getArgs(x_89);
x_364 = lean_array_get_size(x_363);
lean_dec(x_363);
x_365 = lean_nat_dec_eq(x_364, x_30);
lean_dec(x_364);
x_90 = x_365;
goto block_358;
}
}
else
{
lean_object* x_366; lean_object* x_367; uint8_t x_368; lean_object* x_586; uint8_t x_587; 
x_366 = lean_unsigned_to_nat(4u);
x_367 = l_Lean_Syntax_getArg(x_1, x_366);
x_586 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__11;
lean_inc(x_367);
x_587 = l_Lean_Syntax_isOfKind(x_367, x_586);
if (x_587 == 0)
{
uint8_t x_588; 
x_588 = 0;
x_368 = x_588;
goto block_585;
}
else
{
lean_object* x_589; lean_object* x_590; uint8_t x_591; 
x_589 = l_Lean_Syntax_getArgs(x_367);
x_590 = lean_array_get_size(x_589);
lean_dec(x_589);
x_591 = lean_nat_dec_eq(x_590, x_88);
lean_dec(x_590);
x_368 = x_591;
goto block_585;
}
block_585:
{
if (x_368 == 0)
{
lean_object* x_369; uint8_t x_370; 
lean_dec(x_367);
lean_dec(x_87);
x_369 = l_Lean_Syntax_getArgs(x_31);
lean_dec(x_31);
x_370 = l_Lean_Syntax_isNone(x_89);
if (x_370 == 0)
{
lean_object* x_371; lean_object* x_372; lean_object* x_373; uint8_t x_374; 
x_371 = l_Array_empty___closed__1;
x_372 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_88, x_369, x_50, x_371);
lean_dec(x_369);
x_373 = lean_array_get_size(x_372);
x_374 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__17(x_1, x_372, x_373, x_50);
lean_dec(x_373);
lean_dec(x_372);
if (x_374 == 0)
{
lean_object* x_375; 
lean_dec(x_89);
x_375 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_375;
}
else
{
lean_object* x_376; lean_object* x_377; uint8_t x_378; 
lean_dec(x_2);
lean_dec(x_1);
x_376 = l_Lean_Elab_Term_elabMatch___closed__3;
x_377 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_89, x_376, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_89);
x_378 = !lean_is_exclusive(x_377);
if (x_378 == 0)
{
return x_377;
}
else
{
lean_object* x_379; lean_object* x_380; lean_object* x_381; 
x_379 = lean_ctor_get(x_377, 0);
x_380 = lean_ctor_get(x_377, 1);
lean_inc(x_380);
lean_inc(x_379);
lean_dec(x_377);
x_381 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_381, 0, x_379);
lean_ctor_set(x_381, 1, x_380);
return x_381;
}
}
}
else
{
lean_object* x_382; 
lean_dec(x_369);
lean_dec(x_89);
x_382 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_382;
}
}
else
{
lean_object* x_383; uint8_t x_384; uint8_t x_487; uint8_t x_488; 
x_383 = l_Lean_Syntax_getArg(x_367, x_50);
lean_inc(x_383);
x_487 = l_Lean_Syntax_isOfKind(x_383, x_359);
if (x_487 == 0)
{
uint8_t x_581; 
x_581 = 0;
x_488 = x_581;
goto block_580;
}
else
{
lean_object* x_582; lean_object* x_583; uint8_t x_584; 
x_582 = l_Lean_Syntax_getArgs(x_383);
x_583 = lean_array_get_size(x_582);
lean_dec(x_582);
x_584 = lean_nat_dec_eq(x_583, x_50);
lean_dec(x_583);
x_488 = x_584;
goto block_580;
}
block_486:
{
if (x_384 == 0)
{
lean_object* x_385; uint8_t x_386; 
lean_dec(x_367);
lean_dec(x_87);
x_385 = l_Lean_Syntax_getArgs(x_31);
lean_dec(x_31);
x_386 = l_Lean_Syntax_isNone(x_89);
if (x_386 == 0)
{
lean_object* x_387; lean_object* x_388; lean_object* x_389; uint8_t x_390; 
x_387 = l_Array_empty___closed__1;
x_388 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_88, x_385, x_50, x_387);
lean_dec(x_385);
x_389 = lean_array_get_size(x_388);
x_390 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__18(x_1, x_388, x_389, x_50);
lean_dec(x_389);
lean_dec(x_388);
if (x_390 == 0)
{
lean_object* x_391; 
lean_dec(x_89);
x_391 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_391;
}
else
{
lean_object* x_392; lean_object* x_393; uint8_t x_394; 
lean_dec(x_2);
lean_dec(x_1);
x_392 = l_Lean_Elab_Term_elabMatch___closed__3;
x_393 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_89, x_392, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_89);
x_394 = !lean_is_exclusive(x_393);
if (x_394 == 0)
{
return x_393;
}
else
{
lean_object* x_395; lean_object* x_396; lean_object* x_397; 
x_395 = lean_ctor_get(x_393, 0);
x_396 = lean_ctor_get(x_393, 1);
lean_inc(x_396);
lean_inc(x_395);
lean_dec(x_393);
x_397 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_397, 0, x_395);
lean_ctor_set(x_397, 1, x_396);
return x_397;
}
}
}
else
{
lean_object* x_398; 
lean_dec(x_385);
lean_dec(x_89);
x_398 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_398;
}
}
else
{
lean_object* x_399; uint8_t x_400; uint8_t x_481; 
x_399 = l_Lean_Syntax_getArg(x_367, x_30);
lean_dec(x_367);
lean_inc(x_399);
x_481 = l_Lean_Syntax_isOfKind(x_399, x_359);
if (x_481 == 0)
{
uint8_t x_482; 
x_482 = 0;
x_400 = x_482;
goto block_480;
}
else
{
lean_object* x_483; lean_object* x_484; uint8_t x_485; 
x_483 = l_Lean_Syntax_getArgs(x_399);
x_484 = lean_array_get_size(x_483);
lean_dec(x_483);
x_485 = lean_nat_dec_eq(x_484, x_30);
lean_dec(x_484);
x_400 = x_485;
goto block_480;
}
block_480:
{
if (x_400 == 0)
{
lean_object* x_401; uint8_t x_402; 
lean_dec(x_399);
lean_dec(x_87);
x_401 = l_Lean_Syntax_getArgs(x_31);
lean_dec(x_31);
x_402 = l_Lean_Syntax_isNone(x_89);
if (x_402 == 0)
{
lean_object* x_403; lean_object* x_404; lean_object* x_405; uint8_t x_406; 
x_403 = l_Array_empty___closed__1;
x_404 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_88, x_401, x_50, x_403);
lean_dec(x_401);
x_405 = lean_array_get_size(x_404);
x_406 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__19(x_1, x_404, x_405, x_50);
lean_dec(x_405);
lean_dec(x_404);
if (x_406 == 0)
{
lean_object* x_407; 
lean_dec(x_89);
x_407 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_407;
}
else
{
lean_object* x_408; lean_object* x_409; uint8_t x_410; 
lean_dec(x_2);
lean_dec(x_1);
x_408 = l_Lean_Elab_Term_elabMatch___closed__3;
x_409 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_89, x_408, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_89);
x_410 = !lean_is_exclusive(x_409);
if (x_410 == 0)
{
return x_409;
}
else
{
lean_object* x_411; lean_object* x_412; lean_object* x_413; 
x_411 = lean_ctor_get(x_409, 0);
x_412 = lean_ctor_get(x_409, 1);
lean_inc(x_412);
lean_inc(x_411);
lean_dec(x_409);
x_413 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_413, 0, x_411);
lean_ctor_set(x_413, 1, x_412);
return x_413;
}
}
}
else
{
lean_object* x_414; 
lean_dec(x_401);
lean_dec(x_89);
x_414 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_414;
}
}
else
{
lean_object* x_415; uint8_t x_416; lean_object* x_473; uint8_t x_474; 
x_415 = l_Lean_Syntax_getArg(x_399, x_50);
lean_dec(x_399);
x_473 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__18;
lean_inc(x_415);
x_474 = l_Lean_Syntax_isOfKind(x_415, x_473);
if (x_474 == 0)
{
uint8_t x_475; 
x_475 = 0;
x_416 = x_475;
goto block_472;
}
else
{
lean_object* x_476; lean_object* x_477; lean_object* x_478; uint8_t x_479; 
x_476 = l_Lean_Syntax_getArgs(x_415);
x_477 = lean_array_get_size(x_476);
lean_dec(x_476);
x_478 = lean_unsigned_to_nat(3u);
x_479 = lean_nat_dec_eq(x_477, x_478);
lean_dec(x_477);
x_416 = x_479;
goto block_472;
}
block_472:
{
if (x_416 == 0)
{
lean_object* x_417; uint8_t x_418; 
lean_dec(x_415);
lean_dec(x_87);
x_417 = l_Lean_Syntax_getArgs(x_31);
lean_dec(x_31);
x_418 = l_Lean_Syntax_isNone(x_89);
if (x_418 == 0)
{
lean_object* x_419; lean_object* x_420; lean_object* x_421; uint8_t x_422; 
x_419 = l_Array_empty___closed__1;
x_420 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_88, x_417, x_50, x_419);
lean_dec(x_417);
x_421 = lean_array_get_size(x_420);
x_422 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__20(x_1, x_420, x_421, x_50);
lean_dec(x_421);
lean_dec(x_420);
if (x_422 == 0)
{
lean_object* x_423; 
lean_dec(x_89);
x_423 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_423;
}
else
{
lean_object* x_424; lean_object* x_425; uint8_t x_426; 
lean_dec(x_2);
lean_dec(x_1);
x_424 = l_Lean_Elab_Term_elabMatch___closed__3;
x_425 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_89, x_424, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_89);
x_426 = !lean_is_exclusive(x_425);
if (x_426 == 0)
{
return x_425;
}
else
{
lean_object* x_427; lean_object* x_428; lean_object* x_429; 
x_427 = lean_ctor_get(x_425, 0);
x_428 = lean_ctor_get(x_425, 1);
lean_inc(x_428);
lean_inc(x_427);
lean_dec(x_425);
x_429 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_429, 0, x_427);
lean_ctor_set(x_429, 1, x_428);
return x_429;
}
}
}
else
{
lean_object* x_430; 
lean_dec(x_417);
lean_dec(x_89);
x_430 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_430;
}
}
else
{
lean_object* x_431; uint8_t x_432; uint8_t x_467; 
x_431 = l_Lean_Syntax_getArg(x_415, x_50);
lean_inc(x_431);
x_467 = l_Lean_Syntax_isOfKind(x_431, x_359);
if (x_467 == 0)
{
uint8_t x_468; 
x_468 = 0;
x_432 = x_468;
goto block_466;
}
else
{
lean_object* x_469; lean_object* x_470; uint8_t x_471; 
x_469 = l_Lean_Syntax_getArgs(x_431);
x_470 = lean_array_get_size(x_469);
lean_dec(x_469);
x_471 = lean_nat_dec_eq(x_470, x_30);
lean_dec(x_470);
x_432 = x_471;
goto block_466;
}
block_466:
{
if (x_432 == 0)
{
lean_object* x_433; uint8_t x_434; 
lean_dec(x_431);
lean_dec(x_415);
lean_dec(x_87);
x_433 = l_Lean_Syntax_getArgs(x_31);
lean_dec(x_31);
x_434 = l_Lean_Syntax_isNone(x_89);
if (x_434 == 0)
{
lean_object* x_435; lean_object* x_436; lean_object* x_437; uint8_t x_438; 
x_435 = l_Array_empty___closed__1;
x_436 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_88, x_433, x_50, x_435);
lean_dec(x_433);
x_437 = lean_array_get_size(x_436);
x_438 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__21(x_1, x_436, x_437, x_50);
lean_dec(x_437);
lean_dec(x_436);
if (x_438 == 0)
{
lean_object* x_439; 
lean_dec(x_89);
x_439 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_439;
}
else
{
lean_object* x_440; lean_object* x_441; uint8_t x_442; 
lean_dec(x_2);
lean_dec(x_1);
x_440 = l_Lean_Elab_Term_elabMatch___closed__3;
x_441 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_89, x_440, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_89);
x_442 = !lean_is_exclusive(x_441);
if (x_442 == 0)
{
return x_441;
}
else
{
lean_object* x_443; lean_object* x_444; lean_object* x_445; 
x_443 = lean_ctor_get(x_441, 0);
x_444 = lean_ctor_get(x_441, 1);
lean_inc(x_444);
lean_inc(x_443);
lean_dec(x_441);
x_445 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_445, 0, x_443);
lean_ctor_set(x_445, 1, x_444);
return x_445;
}
}
}
else
{
lean_object* x_446; 
lean_dec(x_433);
lean_dec(x_89);
x_446 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_446;
}
}
else
{
lean_object* x_447; lean_object* x_448; uint8_t x_449; 
x_447 = l_Lean_Syntax_getArg(x_431, x_50);
lean_dec(x_431);
x_448 = l_Lean_identKind___closed__2;
lean_inc(x_447);
x_449 = l_Lean_Syntax_isOfKind(x_447, x_448);
if (x_449 == 0)
{
lean_object* x_450; uint8_t x_451; 
lean_dec(x_447);
lean_dec(x_415);
lean_dec(x_87);
x_450 = l_Lean_Syntax_getArgs(x_31);
lean_dec(x_31);
x_451 = l_Lean_Syntax_isNone(x_89);
if (x_451 == 0)
{
lean_object* x_452; lean_object* x_453; lean_object* x_454; uint8_t x_455; 
x_452 = l_Array_empty___closed__1;
x_453 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_88, x_450, x_50, x_452);
lean_dec(x_450);
x_454 = lean_array_get_size(x_453);
x_455 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__22(x_1, x_453, x_454, x_50);
lean_dec(x_454);
lean_dec(x_453);
if (x_455 == 0)
{
lean_object* x_456; 
lean_dec(x_89);
x_456 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_456;
}
else
{
lean_object* x_457; lean_object* x_458; uint8_t x_459; 
lean_dec(x_2);
lean_dec(x_1);
x_457 = l_Lean_Elab_Term_elabMatch___closed__3;
x_458 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_89, x_457, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_89);
x_459 = !lean_is_exclusive(x_458);
if (x_459 == 0)
{
return x_458;
}
else
{
lean_object* x_460; lean_object* x_461; lean_object* x_462; 
x_460 = lean_ctor_get(x_458, 0);
x_461 = lean_ctor_get(x_458, 1);
lean_inc(x_461);
lean_inc(x_460);
lean_dec(x_458);
x_462 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_462, 0, x_460);
lean_ctor_set(x_462, 1, x_461);
return x_462;
}
}
}
else
{
lean_object* x_463; 
lean_dec(x_450);
lean_dec(x_89);
x_463 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_463;
}
}
else
{
lean_object* x_464; lean_object* x_465; 
lean_dec(x_89);
lean_dec(x_31);
x_464 = l_Lean_Syntax_getArg(x_415, x_88);
lean_dec(x_415);
x_465 = l___private_Lean_Elab_Match_1__expandSimpleMatch(x_1, x_87, x_447, x_464, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_465;
}
}
}
}
}
}
}
}
}
block_580:
{
if (x_488 == 0)
{
if (x_487 == 0)
{
uint8_t x_489; 
lean_dec(x_383);
x_489 = 0;
x_384 = x_489;
goto block_486;
}
else
{
lean_object* x_490; lean_object* x_491; uint8_t x_492; 
x_490 = l_Lean_Syntax_getArgs(x_383);
lean_dec(x_383);
x_491 = lean_array_get_size(x_490);
lean_dec(x_490);
x_492 = lean_nat_dec_eq(x_491, x_30);
lean_dec(x_491);
x_384 = x_492;
goto block_486;
}
}
else
{
lean_object* x_493; uint8_t x_494; uint8_t x_575; 
lean_dec(x_383);
x_493 = l_Lean_Syntax_getArg(x_367, x_30);
lean_dec(x_367);
lean_inc(x_493);
x_575 = l_Lean_Syntax_isOfKind(x_493, x_359);
if (x_575 == 0)
{
uint8_t x_576; 
x_576 = 0;
x_494 = x_576;
goto block_574;
}
else
{
lean_object* x_577; lean_object* x_578; uint8_t x_579; 
x_577 = l_Lean_Syntax_getArgs(x_493);
x_578 = lean_array_get_size(x_577);
lean_dec(x_577);
x_579 = lean_nat_dec_eq(x_578, x_30);
lean_dec(x_578);
x_494 = x_579;
goto block_574;
}
block_574:
{
if (x_494 == 0)
{
lean_object* x_495; uint8_t x_496; 
lean_dec(x_493);
lean_dec(x_87);
x_495 = l_Lean_Syntax_getArgs(x_31);
lean_dec(x_31);
x_496 = l_Lean_Syntax_isNone(x_89);
if (x_496 == 0)
{
lean_object* x_497; lean_object* x_498; lean_object* x_499; uint8_t x_500; 
x_497 = l_Array_empty___closed__1;
x_498 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_88, x_495, x_50, x_497);
lean_dec(x_495);
x_499 = lean_array_get_size(x_498);
x_500 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__23(x_1, x_498, x_499, x_50);
lean_dec(x_499);
lean_dec(x_498);
if (x_500 == 0)
{
lean_object* x_501; 
lean_dec(x_89);
x_501 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_501;
}
else
{
lean_object* x_502; lean_object* x_503; uint8_t x_504; 
lean_dec(x_2);
lean_dec(x_1);
x_502 = l_Lean_Elab_Term_elabMatch___closed__3;
x_503 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_89, x_502, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_89);
x_504 = !lean_is_exclusive(x_503);
if (x_504 == 0)
{
return x_503;
}
else
{
lean_object* x_505; lean_object* x_506; lean_object* x_507; 
x_505 = lean_ctor_get(x_503, 0);
x_506 = lean_ctor_get(x_503, 1);
lean_inc(x_506);
lean_inc(x_505);
lean_dec(x_503);
x_507 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_507, 0, x_505);
lean_ctor_set(x_507, 1, x_506);
return x_507;
}
}
}
else
{
lean_object* x_508; 
lean_dec(x_495);
lean_dec(x_89);
x_508 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_508;
}
}
else
{
lean_object* x_509; uint8_t x_510; lean_object* x_567; uint8_t x_568; 
x_509 = l_Lean_Syntax_getArg(x_493, x_50);
lean_dec(x_493);
x_567 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__18;
lean_inc(x_509);
x_568 = l_Lean_Syntax_isOfKind(x_509, x_567);
if (x_568 == 0)
{
uint8_t x_569; 
x_569 = 0;
x_510 = x_569;
goto block_566;
}
else
{
lean_object* x_570; lean_object* x_571; lean_object* x_572; uint8_t x_573; 
x_570 = l_Lean_Syntax_getArgs(x_509);
x_571 = lean_array_get_size(x_570);
lean_dec(x_570);
x_572 = lean_unsigned_to_nat(3u);
x_573 = lean_nat_dec_eq(x_571, x_572);
lean_dec(x_571);
x_510 = x_573;
goto block_566;
}
block_566:
{
if (x_510 == 0)
{
lean_object* x_511; uint8_t x_512; 
lean_dec(x_509);
lean_dec(x_87);
x_511 = l_Lean_Syntax_getArgs(x_31);
lean_dec(x_31);
x_512 = l_Lean_Syntax_isNone(x_89);
if (x_512 == 0)
{
lean_object* x_513; lean_object* x_514; lean_object* x_515; uint8_t x_516; 
x_513 = l_Array_empty___closed__1;
x_514 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_88, x_511, x_50, x_513);
lean_dec(x_511);
x_515 = lean_array_get_size(x_514);
x_516 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__24(x_1, x_514, x_515, x_50);
lean_dec(x_515);
lean_dec(x_514);
if (x_516 == 0)
{
lean_object* x_517; 
lean_dec(x_89);
x_517 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_517;
}
else
{
lean_object* x_518; lean_object* x_519; uint8_t x_520; 
lean_dec(x_2);
lean_dec(x_1);
x_518 = l_Lean_Elab_Term_elabMatch___closed__3;
x_519 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_89, x_518, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_89);
x_520 = !lean_is_exclusive(x_519);
if (x_520 == 0)
{
return x_519;
}
else
{
lean_object* x_521; lean_object* x_522; lean_object* x_523; 
x_521 = lean_ctor_get(x_519, 0);
x_522 = lean_ctor_get(x_519, 1);
lean_inc(x_522);
lean_inc(x_521);
lean_dec(x_519);
x_523 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_523, 0, x_521);
lean_ctor_set(x_523, 1, x_522);
return x_523;
}
}
}
else
{
lean_object* x_524; 
lean_dec(x_511);
lean_dec(x_89);
x_524 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_524;
}
}
else
{
lean_object* x_525; uint8_t x_526; uint8_t x_561; 
x_525 = l_Lean_Syntax_getArg(x_509, x_50);
lean_inc(x_525);
x_561 = l_Lean_Syntax_isOfKind(x_525, x_359);
if (x_561 == 0)
{
uint8_t x_562; 
x_562 = 0;
x_526 = x_562;
goto block_560;
}
else
{
lean_object* x_563; lean_object* x_564; uint8_t x_565; 
x_563 = l_Lean_Syntax_getArgs(x_525);
x_564 = lean_array_get_size(x_563);
lean_dec(x_563);
x_565 = lean_nat_dec_eq(x_564, x_30);
lean_dec(x_564);
x_526 = x_565;
goto block_560;
}
block_560:
{
if (x_526 == 0)
{
lean_object* x_527; uint8_t x_528; 
lean_dec(x_525);
lean_dec(x_509);
lean_dec(x_87);
x_527 = l_Lean_Syntax_getArgs(x_31);
lean_dec(x_31);
x_528 = l_Lean_Syntax_isNone(x_89);
if (x_528 == 0)
{
lean_object* x_529; lean_object* x_530; lean_object* x_531; uint8_t x_532; 
x_529 = l_Array_empty___closed__1;
x_530 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_88, x_527, x_50, x_529);
lean_dec(x_527);
x_531 = lean_array_get_size(x_530);
x_532 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__25(x_1, x_530, x_531, x_50);
lean_dec(x_531);
lean_dec(x_530);
if (x_532 == 0)
{
lean_object* x_533; 
lean_dec(x_89);
x_533 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_533;
}
else
{
lean_object* x_534; lean_object* x_535; uint8_t x_536; 
lean_dec(x_2);
lean_dec(x_1);
x_534 = l_Lean_Elab_Term_elabMatch___closed__3;
x_535 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_89, x_534, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_89);
x_536 = !lean_is_exclusive(x_535);
if (x_536 == 0)
{
return x_535;
}
else
{
lean_object* x_537; lean_object* x_538; lean_object* x_539; 
x_537 = lean_ctor_get(x_535, 0);
x_538 = lean_ctor_get(x_535, 1);
lean_inc(x_538);
lean_inc(x_537);
lean_dec(x_535);
x_539 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_539, 0, x_537);
lean_ctor_set(x_539, 1, x_538);
return x_539;
}
}
}
else
{
lean_object* x_540; 
lean_dec(x_527);
lean_dec(x_89);
x_540 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_540;
}
}
else
{
lean_object* x_541; lean_object* x_542; uint8_t x_543; 
x_541 = l_Lean_Syntax_getArg(x_525, x_50);
lean_dec(x_525);
x_542 = l_Lean_identKind___closed__2;
lean_inc(x_541);
x_543 = l_Lean_Syntax_isOfKind(x_541, x_542);
if (x_543 == 0)
{
lean_object* x_544; uint8_t x_545; 
lean_dec(x_541);
lean_dec(x_509);
lean_dec(x_87);
x_544 = l_Lean_Syntax_getArgs(x_31);
lean_dec(x_31);
x_545 = l_Lean_Syntax_isNone(x_89);
if (x_545 == 0)
{
lean_object* x_546; lean_object* x_547; lean_object* x_548; uint8_t x_549; 
x_546 = l_Array_empty___closed__1;
x_547 = l_Array_foldlStepMAux___main___at_Lean_Elab_Term_elabParen___spec__1(x_88, x_544, x_50, x_546);
lean_dec(x_544);
x_548 = lean_array_get_size(x_547);
x_549 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__26(x_1, x_547, x_548, x_50);
lean_dec(x_548);
lean_dec(x_547);
if (x_549 == 0)
{
lean_object* x_550; 
lean_dec(x_89);
x_550 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_550;
}
else
{
lean_object* x_551; lean_object* x_552; uint8_t x_553; 
lean_dec(x_2);
lean_dec(x_1);
x_551 = l_Lean_Elab_Term_elabMatch___closed__3;
x_552 = l_Lean_throwErrorAt___at___private_Lean_Elab_Term_17__elabTermAux___main___spec__1___rarg(x_89, x_551, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_89);
x_553 = !lean_is_exclusive(x_552);
if (x_553 == 0)
{
return x_552;
}
else
{
lean_object* x_554; lean_object* x_555; lean_object* x_556; 
x_554 = lean_ctor_get(x_552, 0);
x_555 = lean_ctor_get(x_552, 1);
lean_inc(x_555);
lean_inc(x_554);
lean_dec(x_552);
x_556 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_556, 0, x_554);
lean_ctor_set(x_556, 1, x_555);
return x_556;
}
}
}
else
{
lean_object* x_557; 
lean_dec(x_544);
lean_dec(x_89);
x_557 = l___private_Lean_Elab_Match_41__elabMatchCore(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_1);
return x_557;
}
}
else
{
lean_object* x_558; lean_object* x_559; 
lean_dec(x_89);
lean_dec(x_31);
x_558 = l_Lean_Syntax_getArg(x_509, x_88);
lean_dec(x_509);
x_559 = l___private_Lean_Elab_Match_1__expandSimpleMatch(x_1, x_87, x_541, x_558, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_559;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__3(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__4(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__5(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__6(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__7(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__8(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__9(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__10(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__11(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__12(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__13(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__14(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__15___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__15(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__16___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__16(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__17___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__17(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__18___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__18(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__19___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__19(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__20___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__20(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__21___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__21(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__22___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__22(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__23___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__23(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__24___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__24(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__25___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__25(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__26___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Array_anyRangeMAux___main___at_Lean_Elab_Term_elabMatch___spec__26(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabMatch___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabMatch), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabMatch(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabMatch___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Match_42__regTraceClasses(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__10;
x_3 = l_Lean_registerTraceClass(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
lean_dec(x_5);
x_6 = lean_box(0);
lean_ctor_set(x_3, 0, x_6);
return x_3;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_3);
if (x_10 == 0)
{
return x_3;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* _init_l_Lean_Elab_Term_elabNoMatch___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("nomatch");
return x_1;
}
}
lean_object* _init_l_Lean_Elab_Term_elabNoMatch___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_mkAppStx___closed__6;
x_2 = l_Lean_Elab_Term_elabNoMatch___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Term_elabNoMatch(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; lean_object* x_31; uint8_t x_32; 
x_31 = l_Lean_Elab_Term_elabNoMatch___closed__2;
lean_inc(x_1);
x_32 = l_Lean_Syntax_isOfKind(x_1, x_31);
if (x_32 == 0)
{
uint8_t x_33; 
x_33 = 0;
x_10 = x_33;
goto block_30;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_34 = l_Lean_Syntax_getArgs(x_1);
x_35 = lean_array_get_size(x_34);
lean_dec(x_34);
x_36 = lean_unsigned_to_nat(2u);
x_37 = lean_nat_dec_eq(x_35, x_36);
lean_dec(x_35);
x_10 = x_37;
goto block_30;
}
block_30:
{
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_11 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Term_elabForall___spec__1___rarg(x_9);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
lean_dec(x_1);
lean_inc(x_5);
x_14 = l___private_Lean_Elab_Match_40__waitExpectedType(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l___private_Lean_Elab_Binders_16__expandMatchAltsIntoMatchAux___main___closed__3;
x_18 = lean_array_push(x_17, x_13);
x_19 = l___private_Lean_Elab_Binders_11__expandFunBindersAux___main___closed__6;
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
x_21 = l_Lean_mkOptionalNode___closed__2;
x_22 = lean_array_push(x_21, x_20);
x_23 = l_Array_empty___closed__1;
x_24 = l_Lean_mkOptionalNode___closed__1;
x_25 = l___private_Lean_Elab_Match_39__elabMatchAux(x_22, x_23, x_24, x_15, x_3, x_4, x_5, x_6, x_7, x_8, x_16);
return x_25;
}
else
{
uint8_t x_26; 
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_26 = !lean_is_exclusive(x_14);
if (x_26 == 0)
{
return x_14;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_14, 0);
x_28 = lean_ctor_get(x_14, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_14);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
}
}
lean_object* _init_l___regBuiltin_Lean_Elab_Term_elabNoMatch___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabNoMatch), 9, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Term_elabNoMatch(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Term_termElabAttribute;
x_3 = l_Lean_Elab_Term_elabNoMatch___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Term_elabNoMatch___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Meta_Match_MatchPatternAttr(lean_object*);
lean_object* initialize_Lean_Meta_Match_Match(lean_object*);
lean_object* initialize_Lean_Elab_SyntheticMVars(lean_object*);
lean_object* initialize_Lean_Elab_App(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_Match(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MatchPatternAttr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_Match(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_SyntheticMVars(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_App(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__1 = _init_l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__1);
l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__2 = _init_l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__2);
l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__3 = _init_l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__3);
l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__4 = _init_l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__4);
l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__5 = _init_l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__5);
l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__6 = _init_l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__6();
lean_mark_persistent(l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__6);
l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__7 = _init_l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__7();
lean_mark_persistent(l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__7);
l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__8 = _init_l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__8();
lean_mark_persistent(l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__8);
l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__9 = _init_l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__9();
lean_mark_persistent(l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__9);
l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__10 = _init_l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__10();
lean_mark_persistent(l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__10);
l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__11 = _init_l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__11();
lean_mark_persistent(l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__11);
l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__12 = _init_l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__12();
lean_mark_persistent(l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__12);
l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__13 = _init_l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__13();
lean_mark_persistent(l___private_Lean_Elab_Match_3__elabDiscrsWitMatchTypeAux___main___closed__13);
l_Lean_Elab_Term_PatternVar_hasToString___closed__1 = _init_l_Lean_Elab_Term_PatternVar_hasToString___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_PatternVar_hasToString___closed__1);
l___private_Lean_Elab_Match_10__registerAuxiliaryNodeKind___closed__1 = _init_l___private_Lean_Elab_Match_10__registerAuxiliaryNodeKind___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_10__registerAuxiliaryNodeKind___closed__1);
l___private_Lean_Elab_Match_10__registerAuxiliaryNodeKind___closed__2 = _init_l___private_Lean_Elab_Match_10__registerAuxiliaryNodeKind___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Match_10__registerAuxiliaryNodeKind___closed__2);
res = l___private_Lean_Elab_Match_10__registerAuxiliaryNodeKind(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabMVarWithIdKind___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabMVarWithIdKind___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabMVarWithIdKind___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabMVarWithIdKind(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Term_elabInaccessible___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabInaccessible___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabInaccessible___closed__1);
l___regBuiltin_Lean_Elab_Term_elabInaccessible___closed__2 = _init_l___regBuiltin_Lean_Elab_Term_elabInaccessible___closed__2();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabInaccessible___closed__2);
l___regBuiltin_Lean_Elab_Term_elabInaccessible___closed__3 = _init_l___regBuiltin_Lean_Elab_Term_elabInaccessible___closed__3();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabInaccessible___closed__3);
res = l___regBuiltin_Lean_Elab_Term_elabInaccessible(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Elab_Match_13__throwCtorExpected___rarg___closed__1 = _init_l___private_Lean_Elab_Match_13__throwCtorExpected___rarg___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_13__throwCtorExpected___rarg___closed__1);
l___private_Lean_Elab_Match_13__throwCtorExpected___rarg___closed__2 = _init_l___private_Lean_Elab_Match_13__throwCtorExpected___rarg___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Match_13__throwCtorExpected___rarg___closed__2);
l___private_Lean_Elab_Match_13__throwCtorExpected___rarg___closed__3 = _init_l___private_Lean_Elab_Match_13__throwCtorExpected___rarg___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Match_13__throwCtorExpected___rarg___closed__3);
l___private_Lean_Elab_Match_14__getNumExplicitCtorParams___closed__1 = _init_l___private_Lean_Elab_Match_14__getNumExplicitCtorParams___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_14__getNumExplicitCtorParams___closed__1);
l___private_Lean_Elab_Match_15__throwAmbiguous___rarg___closed__1 = _init_l___private_Lean_Elab_Match_15__throwAmbiguous___rarg___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_15__throwAmbiguous___rarg___closed__1);
l___private_Lean_Elab_Match_15__throwAmbiguous___rarg___closed__2 = _init_l___private_Lean_Elab_Match_15__throwAmbiguous___rarg___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Match_15__throwAmbiguous___rarg___closed__2);
l___private_Lean_Elab_Match_15__throwAmbiguous___rarg___closed__3 = _init_l___private_Lean_Elab_Match_15__throwAmbiguous___rarg___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Match_15__throwAmbiguous___rarg___closed__3);
l_Lean_Elab_Term_CollectPatternVars_resolveId_x3f___closed__1 = _init_l_Lean_Elab_Term_CollectPatternVars_resolveId_x3f___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_CollectPatternVars_resolveId_x3f___closed__1);
l_Lean_Elab_Term_CollectPatternVars_resolveId_x3f___closed__2 = _init_l_Lean_Elab_Term_CollectPatternVars_resolveId_x3f___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_CollectPatternVars_resolveId_x3f___closed__2);
l___private_Lean_Elab_Match_16__throwInvalidPattern___rarg___closed__1 = _init_l___private_Lean_Elab_Match_16__throwInvalidPattern___rarg___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_16__throwInvalidPattern___rarg___closed__1);
l___private_Lean_Elab_Match_16__throwInvalidPattern___rarg___closed__2 = _init_l___private_Lean_Elab_Match_16__throwInvalidPattern___rarg___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Match_16__throwInvalidPattern___rarg___closed__2);
l___private_Lean_Elab_Match_16__throwInvalidPattern___rarg___closed__3 = _init_l___private_Lean_Elab_Match_16__throwInvalidPattern___rarg___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Match_16__throwInvalidPattern___rarg___closed__3);
l_Lean_Elab_Term_CollectPatternVars_CtorApp_Context_inhabited___closed__1 = _init_l_Lean_Elab_Term_CollectPatternVars_CtorApp_Context_inhabited___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_CollectPatternVars_CtorApp_Context_inhabited___closed__1);
l_Lean_Elab_Term_CollectPatternVars_CtorApp_Context_inhabited = _init_l_Lean_Elab_Term_CollectPatternVars_CtorApp_Context_inhabited();
lean_mark_persistent(l_Lean_Elab_Term_CollectPatternVars_CtorApp_Context_inhabited);
l___private_Lean_Elab_Match_18__finalize___closed__1 = _init_l___private_Lean_Elab_Match_18__finalize___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_18__finalize___closed__1);
l___private_Lean_Elab_Match_18__finalize___closed__2 = _init_l___private_Lean_Elab_Match_18__finalize___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Match_18__finalize___closed__2);
l___private_Lean_Elab_Match_18__finalize___closed__3 = _init_l___private_Lean_Elab_Match_18__finalize___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Match_18__finalize___closed__3);
l___private_Lean_Elab_Match_21__pushNewArg___closed__1 = _init_l___private_Lean_Elab_Match_21__pushNewArg___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_21__pushNewArg___closed__1);
l___private_Lean_Elab_Match_22__processExplicitArg___closed__1 = _init_l___private_Lean_Elab_Match_22__processExplicitArg___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_22__processExplicitArg___closed__1);
l___private_Lean_Elab_Match_22__processExplicitArg___closed__2 = _init_l___private_Lean_Elab_Match_22__processExplicitArg___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Match_22__processExplicitArg___closed__2);
l___private_Lean_Elab_Match_22__processExplicitArg___closed__3 = _init_l___private_Lean_Elab_Match_22__processExplicitArg___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Match_22__processExplicitArg___closed__3);
l___private_Lean_Elab_Match_22__processExplicitArg___closed__4 = _init_l___private_Lean_Elab_Match_22__processExplicitArg___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Match_22__processExplicitArg___closed__4);
l___private_Lean_Elab_Match_25__processVar___closed__1 = _init_l___private_Lean_Elab_Match_25__processVar___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_25__processVar___closed__1);
l___private_Lean_Elab_Match_25__processVar___closed__2 = _init_l___private_Lean_Elab_Match_25__processVar___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Match_25__processVar___closed__2);
l___private_Lean_Elab_Match_25__processVar___closed__3 = _init_l___private_Lean_Elab_Match_25__processVar___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Match_25__processVar___closed__3);
l___private_Lean_Elab_Match_25__processVar___closed__4 = _init_l___private_Lean_Elab_Match_25__processVar___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Match_25__processVar___closed__4);
l___private_Lean_Elab_Match_25__processVar___closed__5 = _init_l___private_Lean_Elab_Match_25__processVar___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Match_25__processVar___closed__5);
l___private_Lean_Elab_Match_25__processVar___closed__6 = _init_l___private_Lean_Elab_Match_25__processVar___closed__6();
lean_mark_persistent(l___private_Lean_Elab_Match_25__processVar___closed__6);
l___private_Lean_Elab_Match_25__processVar___closed__7 = _init_l___private_Lean_Elab_Match_25__processVar___closed__7();
lean_mark_persistent(l___private_Lean_Elab_Match_25__processVar___closed__7);
l___private_Lean_Elab_Match_25__processVar___closed__8 = _init_l___private_Lean_Elab_Match_25__processVar___closed__8();
lean_mark_persistent(l___private_Lean_Elab_Match_25__processVar___closed__8);
l___private_Lean_Elab_Match_25__processVar___closed__9 = _init_l___private_Lean_Elab_Match_25__processVar___closed__9();
lean_mark_persistent(l___private_Lean_Elab_Match_25__processVar___closed__9);
l___private_Lean_Elab_Match_27__nameToPattern___main___closed__1 = _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_27__nameToPattern___main___closed__1);
l___private_Lean_Elab_Match_27__nameToPattern___main___closed__2 = _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Match_27__nameToPattern___main___closed__2);
l___private_Lean_Elab_Match_27__nameToPattern___main___closed__3 = _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Match_27__nameToPattern___main___closed__3);
l___private_Lean_Elab_Match_27__nameToPattern___main___closed__4 = _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Match_27__nameToPattern___main___closed__4);
l___private_Lean_Elab_Match_27__nameToPattern___main___closed__5 = _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Match_27__nameToPattern___main___closed__5);
l___private_Lean_Elab_Match_27__nameToPattern___main___closed__6 = _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__6();
lean_mark_persistent(l___private_Lean_Elab_Match_27__nameToPattern___main___closed__6);
l___private_Lean_Elab_Match_27__nameToPattern___main___closed__7 = _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__7();
lean_mark_persistent(l___private_Lean_Elab_Match_27__nameToPattern___main___closed__7);
l___private_Lean_Elab_Match_27__nameToPattern___main___closed__8 = _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__8();
lean_mark_persistent(l___private_Lean_Elab_Match_27__nameToPattern___main___closed__8);
l___private_Lean_Elab_Match_27__nameToPattern___main___closed__9 = _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__9();
lean_mark_persistent(l___private_Lean_Elab_Match_27__nameToPattern___main___closed__9);
l___private_Lean_Elab_Match_27__nameToPattern___main___closed__10 = _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__10();
lean_mark_persistent(l___private_Lean_Elab_Match_27__nameToPattern___main___closed__10);
l___private_Lean_Elab_Match_27__nameToPattern___main___closed__11 = _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__11();
lean_mark_persistent(l___private_Lean_Elab_Match_27__nameToPattern___main___closed__11);
l___private_Lean_Elab_Match_27__nameToPattern___main___closed__12 = _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__12();
lean_mark_persistent(l___private_Lean_Elab_Match_27__nameToPattern___main___closed__12);
l___private_Lean_Elab_Match_27__nameToPattern___main___closed__13 = _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__13();
lean_mark_persistent(l___private_Lean_Elab_Match_27__nameToPattern___main___closed__13);
l___private_Lean_Elab_Match_27__nameToPattern___main___closed__14 = _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__14();
lean_mark_persistent(l___private_Lean_Elab_Match_27__nameToPattern___main___closed__14);
l___private_Lean_Elab_Match_27__nameToPattern___main___closed__15 = _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__15();
lean_mark_persistent(l___private_Lean_Elab_Match_27__nameToPattern___main___closed__15);
l___private_Lean_Elab_Match_27__nameToPattern___main___closed__16 = _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__16();
lean_mark_persistent(l___private_Lean_Elab_Match_27__nameToPattern___main___closed__16);
l___private_Lean_Elab_Match_27__nameToPattern___main___closed__17 = _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__17();
lean_mark_persistent(l___private_Lean_Elab_Match_27__nameToPattern___main___closed__17);
l___private_Lean_Elab_Match_27__nameToPattern___main___closed__18 = _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__18();
lean_mark_persistent(l___private_Lean_Elab_Match_27__nameToPattern___main___closed__18);
l___private_Lean_Elab_Match_27__nameToPattern___main___closed__19 = _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__19();
lean_mark_persistent(l___private_Lean_Elab_Match_27__nameToPattern___main___closed__19);
l___private_Lean_Elab_Match_27__nameToPattern___main___closed__20 = _init_l___private_Lean_Elab_Match_27__nameToPattern___main___closed__20();
lean_mark_persistent(l___private_Lean_Elab_Match_27__nameToPattern___main___closed__20);
l___private_Lean_Elab_Match_29__collect___main___closed__1 = _init_l___private_Lean_Elab_Match_29__collect___main___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_29__collect___main___closed__1);
l___private_Lean_Elab_Match_29__collect___main___closed__2 = _init_l___private_Lean_Elab_Match_29__collect___main___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Match_29__collect___main___closed__2);
l___private_Lean_Elab_Match_29__collect___main___closed__3 = _init_l___private_Lean_Elab_Match_29__collect___main___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Match_29__collect___main___closed__3);
l___private_Lean_Elab_Match_29__collect___main___closed__4 = _init_l___private_Lean_Elab_Match_29__collect___main___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Match_29__collect___main___closed__4);
l___private_Lean_Elab_Match_29__collect___main___closed__5 = _init_l___private_Lean_Elab_Match_29__collect___main___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Match_29__collect___main___closed__5);
l___private_Lean_Elab_Match_29__collect___main___closed__6 = _init_l___private_Lean_Elab_Match_29__collect___main___closed__6();
lean_mark_persistent(l___private_Lean_Elab_Match_29__collect___main___closed__6);
l___private_Lean_Elab_Match_29__collect___main___closed__7 = _init_l___private_Lean_Elab_Match_29__collect___main___closed__7();
lean_mark_persistent(l___private_Lean_Elab_Match_29__collect___main___closed__7);
l___private_Lean_Elab_Match_29__collect___main___closed__8 = _init_l___private_Lean_Elab_Match_29__collect___main___closed__8();
lean_mark_persistent(l___private_Lean_Elab_Match_29__collect___main___closed__8);
l___private_Lean_Elab_Match_29__collect___main___closed__9 = _init_l___private_Lean_Elab_Match_29__collect___main___closed__9();
lean_mark_persistent(l___private_Lean_Elab_Match_29__collect___main___closed__9);
l___private_Lean_Elab_Match_29__collect___main___closed__10 = _init_l___private_Lean_Elab_Match_29__collect___main___closed__10();
lean_mark_persistent(l___private_Lean_Elab_Match_29__collect___main___closed__10);
l___private_Lean_Elab_Match_29__collect___main___closed__11 = _init_l___private_Lean_Elab_Match_29__collect___main___closed__11();
lean_mark_persistent(l___private_Lean_Elab_Match_29__collect___main___closed__11);
l___private_Lean_Elab_Match_29__collect___main___closed__12 = _init_l___private_Lean_Elab_Match_29__collect___main___closed__12();
lean_mark_persistent(l___private_Lean_Elab_Match_29__collect___main___closed__12);
l___private_Lean_Elab_Match_29__collect___main___closed__13 = _init_l___private_Lean_Elab_Match_29__collect___main___closed__13();
lean_mark_persistent(l___private_Lean_Elab_Match_29__collect___main___closed__13);
l___private_Lean_Elab_Match_29__collect___main___closed__14 = _init_l___private_Lean_Elab_Match_29__collect___main___closed__14();
lean_mark_persistent(l___private_Lean_Elab_Match_29__collect___main___closed__14);
l___private_Lean_Elab_Match_29__collect___main___closed__15 = _init_l___private_Lean_Elab_Match_29__collect___main___closed__15();
lean_mark_persistent(l___private_Lean_Elab_Match_29__collect___main___closed__15);
l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__4___closed__1 = _init_l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__4___closed__1();
lean_mark_persistent(l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__4___closed__1);
l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__4___closed__2 = _init_l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__4___closed__2();
lean_mark_persistent(l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__4___closed__2);
l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__4___closed__3 = _init_l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__4___closed__3();
lean_mark_persistent(l_Array_umapMAux___main___at_Lean_Elab_Term_CollectPatternVars_main___spec__4___closed__3);
l___private_Lean_Elab_Match_30__collectPatternVars___closed__1 = _init_l___private_Lean_Elab_Match_30__collectPatternVars___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_30__collectPatternVars___closed__1);
l___private_Lean_Elab_Match_33__elabPatternsAux___main___closed__1 = _init_l___private_Lean_Elab_Match_33__elabPatternsAux___main___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_33__elabPatternsAux___main___closed__1);
l___private_Lean_Elab_Match_33__elabPatternsAux___main___closed__2 = _init_l___private_Lean_Elab_Match_33__elabPatternsAux___main___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Match_33__elabPatternsAux___main___closed__2);
l___private_Lean_Elab_Match_33__elabPatternsAux___main___closed__3 = _init_l___private_Lean_Elab_Match_33__elabPatternsAux___main___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Match_33__elabPatternsAux___main___closed__3);
l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__1 = _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__1();
lean_mark_persistent(l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__1);
l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__2 = _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__2();
lean_mark_persistent(l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__2);
l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__3 = _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__3();
lean_mark_persistent(l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__3);
l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__4 = _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__4();
lean_mark_persistent(l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__4);
l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__5 = _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__5();
lean_mark_persistent(l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__5);
l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__6 = _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__6();
lean_mark_persistent(l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__6);
l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__7 = _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__7();
lean_mark_persistent(l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__7);
l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__8 = _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__8();
lean_mark_persistent(l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__8);
l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__9 = _init_l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__9();
lean_mark_persistent(l_Array_iterateMAux___main___at_Lean_Elab_Term_finalizePatternDecls___spec__2___closed__9);
l___private_Lean_Elab_Match_36__throwInvalidPattern___rarg___closed__1 = _init_l___private_Lean_Elab_Match_36__throwInvalidPattern___rarg___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_36__throwInvalidPattern___rarg___closed__1);
l___private_Lean_Elab_Match_36__throwInvalidPattern___rarg___closed__2 = _init_l___private_Lean_Elab_Match_36__throwInvalidPattern___rarg___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Match_36__throwInvalidPattern___rarg___closed__2);
l___private_Lean_Elab_Match_36__throwInvalidPattern___rarg___closed__3 = _init_l___private_Lean_Elab_Match_36__throwInvalidPattern___rarg___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Match_36__throwInvalidPattern___rarg___closed__3);
l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__1 = _init_l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__1);
l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__2 = _init_l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__2);
l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__3 = _init_l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_ToDepElimPattern_main___main___closed__3);
l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__1 = _init_l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__1);
l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__2 = _init_l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__2);
l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__3 = _init_l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_elabMatchAltView___lambda__1___closed__3);
l_Lean_Elab_Term_elabMatchAltView___closed__1 = _init_l_Lean_Elab_Term_elabMatchAltView___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabMatchAltView___closed__1);
l_Lean_Elab_Term_elabMatchAltView___closed__2 = _init_l_Lean_Elab_Term_elabMatchAltView___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabMatchAltView___closed__2);
l_Lean_Elab_Term_elabMatchAltView___closed__3 = _init_l_Lean_Elab_Term_elabMatchAltView___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_elabMatchAltView___closed__3);
l_Lean_Elab_Term_mkMotiveType___closed__1 = _init_l_Lean_Elab_Term_mkMotiveType___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_mkMotiveType___closed__1);
l_Lean_Elab_Term_reportMatcherResultErrors___closed__1 = _init_l_Lean_Elab_Term_reportMatcherResultErrors___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_reportMatcherResultErrors___closed__1);
l_Lean_Elab_Term_reportMatcherResultErrors___closed__2 = _init_l_Lean_Elab_Term_reportMatcherResultErrors___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_reportMatcherResultErrors___closed__2);
l_Lean_Elab_Term_reportMatcherResultErrors___closed__3 = _init_l_Lean_Elab_Term_reportMatcherResultErrors___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_reportMatcherResultErrors___closed__3);
l_Lean_Elab_Term_reportMatcherResultErrors___closed__4 = _init_l_Lean_Elab_Term_reportMatcherResultErrors___closed__4();
lean_mark_persistent(l_Lean_Elab_Term_reportMatcherResultErrors___closed__4);
l_Lean_Elab_Term_reportMatcherResultErrors___closed__5 = _init_l_Lean_Elab_Term_reportMatcherResultErrors___closed__5();
lean_mark_persistent(l_Lean_Elab_Term_reportMatcherResultErrors___closed__5);
l_Lean_Elab_Term_reportMatcherResultErrors___closed__6 = _init_l_Lean_Elab_Term_reportMatcherResultErrors___closed__6();
lean_mark_persistent(l_Lean_Elab_Term_reportMatcherResultErrors___closed__6);
l_Lean_Elab_Term_reportMatcherResultErrors___closed__7 = _init_l_Lean_Elab_Term_reportMatcherResultErrors___closed__7();
lean_mark_persistent(l_Lean_Elab_Term_reportMatcherResultErrors___closed__7);
l___private_Lean_Elab_Match_39__elabMatchAux___closed__1 = _init_l___private_Lean_Elab_Match_39__elabMatchAux___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Match_39__elabMatchAux___closed__1);
l___private_Lean_Elab_Match_39__elabMatchAux___closed__2 = _init_l___private_Lean_Elab_Match_39__elabMatchAux___closed__2();
lean_mark_persistent(l___private_Lean_Elab_Match_39__elabMatchAux___closed__2);
l___private_Lean_Elab_Match_39__elabMatchAux___closed__3 = _init_l___private_Lean_Elab_Match_39__elabMatchAux___closed__3();
lean_mark_persistent(l___private_Lean_Elab_Match_39__elabMatchAux___closed__3);
l___private_Lean_Elab_Match_39__elabMatchAux___closed__4 = _init_l___private_Lean_Elab_Match_39__elabMatchAux___closed__4();
lean_mark_persistent(l___private_Lean_Elab_Match_39__elabMatchAux___closed__4);
l___private_Lean_Elab_Match_39__elabMatchAux___closed__5 = _init_l___private_Lean_Elab_Match_39__elabMatchAux___closed__5();
lean_mark_persistent(l___private_Lean_Elab_Match_39__elabMatchAux___closed__5);
l___private_Lean_Elab_Match_39__elabMatchAux___closed__6 = _init_l___private_Lean_Elab_Match_39__elabMatchAux___closed__6();
lean_mark_persistent(l___private_Lean_Elab_Match_39__elabMatchAux___closed__6);
l___private_Lean_Elab_Match_39__elabMatchAux___closed__7 = _init_l___private_Lean_Elab_Match_39__elabMatchAux___closed__7();
lean_mark_persistent(l___private_Lean_Elab_Match_39__elabMatchAux___closed__7);
l___private_Lean_Elab_Match_39__elabMatchAux___closed__8 = _init_l___private_Lean_Elab_Match_39__elabMatchAux___closed__8();
lean_mark_persistent(l___private_Lean_Elab_Match_39__elabMatchAux___closed__8);
l_Lean_Elab_Term_elabMatch___closed__1 = _init_l_Lean_Elab_Term_elabMatch___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabMatch___closed__1);
l_Lean_Elab_Term_elabMatch___closed__2 = _init_l_Lean_Elab_Term_elabMatch___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabMatch___closed__2);
l_Lean_Elab_Term_elabMatch___closed__3 = _init_l_Lean_Elab_Term_elabMatch___closed__3();
lean_mark_persistent(l_Lean_Elab_Term_elabMatch___closed__3);
l___regBuiltin_Lean_Elab_Term_elabMatch___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabMatch___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabMatch___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabMatch(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Match_42__regTraceClasses(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Term_elabNoMatch___closed__1 = _init_l_Lean_Elab_Term_elabNoMatch___closed__1();
lean_mark_persistent(l_Lean_Elab_Term_elabNoMatch___closed__1);
l_Lean_Elab_Term_elabNoMatch___closed__2 = _init_l_Lean_Elab_Term_elabNoMatch___closed__2();
lean_mark_persistent(l_Lean_Elab_Term_elabNoMatch___closed__2);
l___regBuiltin_Lean_Elab_Term_elabNoMatch___closed__1 = _init_l___regBuiltin_Lean_Elab_Term_elabNoMatch___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Term_elabNoMatch___closed__1);
res = l___regBuiltin_Lean_Elab_Term_elabNoMatch(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
