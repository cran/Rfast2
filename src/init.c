#include <Rinternals.h>
#include <R_ext/Rdynload.h>

// Manos
SEXP Rfast2_bessel(SEXP, SEXP, SEXP, SEXP);
SEXP Rfast2_benchmark(SEXP, SEXP, SEXP, SEXP);
SEXP Rfast2_col_group(SEXP, SEXP, SEXP, SEXP);
SEXP Rfast2_colQuantile(SEXP, SEXP, SEXP, SEXP);
SEXP Rfast2_kernel(SEXP, SEXP,SEXP, SEXP);
SEXP Rfast2_is_upper_tri(SEXP, SEXP);
SEXP Rfast2_is_lower_tri(SEXP, SEXP);
SEXP Rfast2_is_skew_symmetric(SEXP);
SEXP Rfast2_lud(SEXP);
SEXP Rfast2_merge(SEXP, SEXP);
SEXP Rfast2_mmpc2(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
SEXP Rfast2_Quantile(SEXP, SEXP, SEXP);
SEXP Rfast2_rowQuantile(SEXP, SEXP, SEXP, SEXP);
SEXP Rfast2_colTrimMean(SEXP, SEXP, SEXP, SEXP);
SEXP Rfast2_rowTrimMean(SEXP, SEXP, SEXP, SEXP);
SEXP Rfast2_Runif(SEXP, SEXP, SEXP);
SEXP Rfast2_Rcauchy(SEXP, SEXP, SEXP);
SEXP Rfast2_Rgeom(SEXP, SEXP);
SEXP Rfast2_Rbeta(SEXP, SEXP, SEXP);
SEXP Rfast2_Rexp(SEXP, SEXP);
SEXP Rfast2_Rchisq(SEXP, SEXP);
SEXP Rfast2_Rgamma(SEXP, SEXP, SEXP);
SEXP Rfast2_Rt(SEXP, SEXP, SEXP);
SEXP Rfast2_Sample_int(SEXP, SEXP, SEXP);
SEXP Rfast2_Sample(SEXP, SEXP, SEXP);
SEXP Rfast2_trimmean(SEXP, SEXP, SEXP);

// Manos

// Marios

SEXP Rfast2_inter(SEXP, SEXP);
SEXP Rfast2_mmp_c(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);

// Marios

// Stefanos

SEXP Rfast2_add_term(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
SEXP Rfast2_colspml_mle(SEXP, SEXP, SEXP, SEXP);
SEXP Rfast2_colcauchy_mle(SEXP, SEXP, SEXP, SEXP);
SEXP Rfast2_colbeta_mle(SEXP, SEXP, SEXP, SEXP);
SEXP Rfast2_censweib_reg(SEXP, SEXP, SEXP, SEXP, SEXP);
SEXP Rfast2_fbed_reg(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
SEXP Rfast2_fedhc_skeleton(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
SEXP Rfast2_multinom_reg(SEXP, SEXP, SEXP, SEXP);
SEXP Rfast2_weib_regs(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
SEXP Rfast2_welch_tests(SEXP, SEXP, SEXP, SEXP);
SEXP Rfast2_wild_boot(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
SEXP Rfast2_mmhc_skeleton(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
SEXP Rfast2_negbin_reg(SEXP, SEXP, SEXP, SEXP);
SEXP Rfast2_negbin_regs(SEXP, SEXP, SEXP, SEXP, SEXP);
SEXP Rfast2_gamma_regs(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
SEXP Rfast2_gamma_reg(SEXP, SEXP, SEXP, SEXP, SEXP);

// Stefanos

// Lasithiotakis

SEXP Rfast2_colhalfcauchy_mle(SEXP, SEXP, SEXP, SEXP);
SEXP Rfast2_halfcauchy_mle(SEXP, SEXP);
SEXP Rfast2_colcenspois_mle(SEXP, SEXP, SEXP, SEXP);
SEXP Rfast2_censpois_mle(SEXP, SEXP);
SEXP Rfast2_colcensweibull_mle(SEXP, SEXP, SEXP, SEXP, SEXP);
SEXP Rfast2_censweibull_mle(SEXP, SEXP, SEXP);
SEXP Rfast2_frechet_nn(SEXP , SEXP , SEXP , SEXP , SEXP , SEXP);

// Lasithiotakis

static const R_CallMethodDef CallEntries[] = {
    {"Rfast2_bessel", (DL_FUNC)&Rfast2_bessel, 4},
    {"Rfast2_benchmark", (DL_FUNC)&Rfast2_benchmark, 4},
    {"Rfast2_col_group", (DL_FUNC)&Rfast2_col_group, 4},
    {"Rfast2_colQuantile", (DL_FUNC)&Rfast2_colQuantile, 4},
    {"Rfast2_is_upper_tri", (DL_FUNC)&Rfast2_is_upper_tri, 2},
    {"Rfast2_is_lower_tri", (DL_FUNC)&Rfast2_is_lower_tri, 2},
    {"Rfast2_is_skew_symmetric", (DL_FUNC)&Rfast2_is_skew_symmetric, 1},
    {"Rfast2_lud", (DL_FUNC)&Rfast2_lud, 1},
    {"Rfast2_merge", (DL_FUNC)&Rfast2_merge, 2},
    {"Rfast2_Quantile", (DL_FUNC)&Rfast2_Quantile, 3},
    {"Rfast2_mmpc2", (DL_FUNC)&Rfast2_mmpc2, 10},
    {"Rfast2_rowQuantile", (DL_FUNC)&Rfast2_rowQuantile, 4},
    {"Rfast2_rowTrimMean", (DL_FUNC)&Rfast2_rowTrimMean, 4},
    {"Rfast2_colTrimMean", (DL_FUNC)&Rfast2_colTrimMean, 4},
	  {"Rfast2_kernel", (DL_FUNC)&Rfast2_kernel, 4},
    {"Rfast2_Runif", (DL_FUNC)&Rfast2_Runif, 3},
    {"Rfast2_Rbeta", (DL_FUNC)&Rfast2_Rbeta, 3},
    {"Rfast2_Rexp", (DL_FUNC)&Rfast2_Rexp, 2},
    {"Rfast2_Rchisq", (DL_FUNC)&Rfast2_Rchisq, 2},
    {"Rfast2_Rgeom", (DL_FUNC)&Rfast2_Rgeom, 2},
    {"Rfast2_Rcauchy", (DL_FUNC)&Rfast2_Rcauchy, 3},
    {"Rfast2_Rgamma", (DL_FUNC)&Rfast2_Rgamma, 3},
    {"Rfast2_Rt", (DL_FUNC)&Rfast2_Rt, 3},
    {"Rfast2_Sample_int", (DL_FUNC)&Rfast2_Sample_int, 3},
    {"Rfast2_Sample", (DL_FUNC)&Rfast2_Sample, 3},
    {"Rfast2_trimmean", (DL_FUNC)&Rfast2_trimmean, 3},

    {"Rfast2_inter", (DL_FUNC)&Rfast2_inter, 2},
    {"Rfast2_mmp_c", (DL_FUNC)&Rfast2_mmp_c, 10},

    {"Rfast2_add_term", (DL_FUNC)&Rfast2_add_term, 9},
    {"Rfast2_colspml_mle", (DL_FUNC)&Rfast2_colspml_mle, 4},
    {"Rfast2_colcauchy_mle", (DL_FUNC)&Rfast2_colcauchy_mle, 4},
    {"Rfast2_colbeta_mle", (DL_FUNC)&Rfast2_colbeta_mle, 4},
    {"Rfast2_censweib_reg", (DL_FUNC)&Rfast2_censweib_reg, 5},
    {"Rfast2_fbed_reg", (DL_FUNC)&Rfast2_fbed_reg, 10},
    {"Rfast2_fedhc_skeleton", (DL_FUNC)&Rfast2_fedhc_skeleton, 7},
    {"Rfast2_multinom_reg", (DL_FUNC)&Rfast2_multinom_reg, 4},
    {"Rfast2_weib_regs", (DL_FUNC)&Rfast2_weib_regs, 6},
    {"Rfast2_welch_tests", (DL_FUNC)&Rfast2_welch_tests, 4},
    {"Rfast2_wild_boot", (DL_FUNC)&Rfast2_wild_boot, 7},
    {"Rfast2_mmhc_skeleton", (DL_FUNC)&Rfast2_mmhc_skeleton, 8},
    {"Rfast2_negbin_reg", (DL_FUNC)&Rfast2_negbin_reg, 4},
    {"Rfast2_negbin_regs", (DL_FUNC)&Rfast2_negbin_regs, 5},
    {"Rfast2_gamma_regs", (DL_FUNC)&Rfast2_gamma_regs, 6},
    {"Rfast2_gamma_reg", (DL_FUNC)&Rfast2_gamma_reg, 5},

    {"Rfast2_colhalfcauchy_mle", (DL_FUNC)&Rfast2_colhalfcauchy_mle, 4},
    {"Rfast2_halfcauchy_mle", (DL_FUNC)&Rfast2_halfcauchy_mle, 2},
    {"Rfast2_colcenspois_mle", (DL_FUNC)&Rfast2_colcenspois_mle, 4},
    {"Rfast2_censpois_mle", (DL_FUNC)&Rfast2_censpois_mle, 2},
    {"Rfast2_colcensweibull_mle", (DL_FUNC)&Rfast2_colcensweibull_mle, 5},
    {"Rfast2_censweibull_mle", (DL_FUNC)&Rfast2_censweibull_mle, 3},
    {"Rfast2_frechet_nn", (DL_FUNC)&Rfast2_frechet_nn, 6},
    {NULL, NULL, 0}};

void R_init_Rfast2(DllInfo *info)
{
  R_registerRoutines(info, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(info, FALSE);
}
