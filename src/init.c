#include <Rinternals.h>
#include <R_ext/Rdynload.h>

//Manos

SEXP Rfast2_benchmark(SEXP exprsSEXP,SEXP envSEXP,SEXP timSEXP,SEXP indicesSEXP);
SEXP Rfast2_col_group(SEXP x,SEXP y,SEXP length_uniqueSEXP,SEXP methodSEXP);
SEXP Rfast2_col_Quantile(SEXP xSEXP,SEXP ProbsSEXP,SEXP parallelSEXP);
SEXP Rfast2_is_upper_tri(SEXP xSEXP,SEXP dgSEXP);
SEXP Rfast2_is_lower_tri(SEXP xSEXP,SEXP dgSEXP);
SEXP Rfast2_lud(SEXP xSEXP);
SEXP Rfast2_merge(SEXP xSEXP,SEXP ySEXP);
SEXP Rfast2_Quantile(SEXP xSEXP,SEXP ProbsSEXP);
SEXP Rfast2_row_Quantile(SEXP xSEXP,SEXP ProbsSEXP,SEXP parallelSEXP);
SEXP Rfast2_colTrimMean(SEXP xSEXP,SEXP ProbsSEXP,SEXP parallelSEXP);
SEXP Rfast2_rowTrimMean(SEXP xSEXP,SEXP ProbsSEXP,SEXP parallelSEXP);
SEXP Rfast2_trimmean(SEXP xSEXP,SEXP aSEXP);

//Manos

//Marios

SEXP Rfast2_inter(SEXP xSEXP,SEXP ySEXP);
SEXP Rfast2_mmp_c(SEXP target_varsSEXP,SEXP dsSEXP,SEXP max_kSEXP,SEXP thresSEXP,SEXP methodSEXP,SEXP initsSEXP,SEXP hash_onSEXP,SEXP stats_kvSEXP,SEXP pvalues_kvSEXP,SEXP bws_onSEXP);

//Marios

//Stefanos

SEXP Rfast2_add_term(SEXP YSEXP, SEXP XincSEXP, SEXP XoutSEXP, SEXP devi_0SEXP,SEXP typeSEXP,SEXP tolSEXP,SEXP logged,SEXP parallel,SEXP maxiters);

//Stefanos

static const R_CallMethodDef CallEntries[] = {
  {"Rfast2_benchmark", (DL_FUNC) &Rfast2_benchmark, 4},
  {"Rfast2_col_group", (DL_FUNC) &Rfast2_col_group, 4},
  {"Rfast2_col_Quantile", (DL_FUNC) &Rfast2_col_Quantile, 3},
  {"Rfast2_is_upper_tri", (DL_FUNC) &Rfast2_is_upper_tri, 2},
  {"Rfast2_is_lower_tri", (DL_FUNC) &Rfast2_is_lower_tri, 2},
  {"Rfast2_lud", (DL_FUNC) &Rfast2_lud, 1},
  {"Rfast2_merge", (DL_FUNC) &Rfast2_merge, 2},
  {"Rfast2_Quantile", (DL_FUNC) &Rfast2_Quantile, 2},
  {"Rfast2_row_Quantile", (DL_FUNC) &Rfast2_row_Quantile, 3},
  {"Rfast2_rowTrimMean", (DL_FUNC) &Rfast2_rowTrimMean, 3},
  {"Rfast2_colTrimMean", (DL_FUNC) &Rfast2_colTrimMean, 3},
  {"Rfast2_trimmean", (DL_FUNC) &Rfast2_trimmean, 2},

  {"Rfast2_inter", (DL_FUNC) &Rfast2_inter, 2},
  {"Rfast2_mmp_c", (DL_FUNC) &Rfast2_mmp_c, 10},

  {"Rfast2_add_term", (DL_FUNC) &Rfast2_add_term, 9},
  {NULL, NULL, 0}
};


void R_init_Rfast2(DllInfo *info)
{
  R_registerRoutines(info, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(info, FALSE);
}

