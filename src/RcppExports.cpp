// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/ggum.h"
#include <Rcpp.h>

using namespace Rcpp;

// init_thetas
NumericVector init_thetas(int n, double mean, double sd);
RcppExport SEXP _ggum_init_thetas(SEXP nSEXP, SEXP meanSEXP, SEXP sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< double >::type sd(sdSEXP);
    rcpp_result_gen = Rcpp::wrap(init_thetas(n, mean, sd));
    return rcpp_result_gen;
END_RCPP
}
// init_alphas
NumericVector init_alphas(int m, double shape1, double shape2, double a, double b);
RcppExport SEXP _ggum_init_alphas(SEXP mSEXP, SEXP shape1SEXP, SEXP shape2SEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< double >::type shape1(shape1SEXP);
    Rcpp::traits::input_parameter< double >::type shape2(shape2SEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(init_alphas(m, shape1, shape2, a, b));
    return rcpp_result_gen;
END_RCPP
}
// init_deltas
NumericVector init_deltas(int m, double shape1, double shape2, double a, double b);
RcppExport SEXP _ggum_init_deltas(SEXP mSEXP, SEXP shape1SEXP, SEXP shape2SEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< double >::type shape1(shape1SEXP);
    Rcpp::traits::input_parameter< double >::type shape2(shape2SEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(init_deltas(m, shape1, shape2, a, b));
    return rcpp_result_gen;
END_RCPP
}
// init_taus
List init_taus(int m, double shape1, double shape2, double a, double b, IntegerVector K);
RcppExport SEXP _ggum_init_taus(SEXP mSEXP, SEXP shape1SEXP, SEXP shape2SEXP, SEXP aSEXP, SEXP bSEXP, SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< double >::type shape1(shape1SEXP);
    Rcpp::traits::input_parameter< double >::type shape2(shape2SEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type K(KSEXP);
    rcpp_result_gen = Rcpp::wrap(init_taus(m, shape1, shape2, a, b, K));
    return rcpp_result_gen;
END_RCPP
}
// ggumMC3
NumericMatrix ggumMC3(IntegerMatrix data, int iters, int burn_iters, int N, int W, int flip_interval, NumericVector temps, NumericMatrix thetas, NumericMatrix alphas, NumericMatrix deltas, List taus, int n, int m, IntegerVector K, List SDs, double th_prior_mean, double th_prior_sd, double a_shape1, double a_shape2, double a_a, double a_b, double d_shape1, double d_shape2, double d_a, double d_b, double t_shape1, double t_shape2, double t_a, double t_b);
RcppExport SEXP _ggum_ggumMC3(SEXP dataSEXP, SEXP itersSEXP, SEXP burn_itersSEXP, SEXP NSEXP, SEXP WSEXP, SEXP flip_intervalSEXP, SEXP tempsSEXP, SEXP thetasSEXP, SEXP alphasSEXP, SEXP deltasSEXP, SEXP tausSEXP, SEXP nSEXP, SEXP mSEXP, SEXP KSEXP, SEXP SDsSEXP, SEXP th_prior_meanSEXP, SEXP th_prior_sdSEXP, SEXP a_shape1SEXP, SEXP a_shape2SEXP, SEXP a_aSEXP, SEXP a_bSEXP, SEXP d_shape1SEXP, SEXP d_shape2SEXP, SEXP d_aSEXP, SEXP d_bSEXP, SEXP t_shape1SEXP, SEXP t_shape2SEXP, SEXP t_aSEXP, SEXP t_bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type iters(itersSEXP);
    Rcpp::traits::input_parameter< int >::type burn_iters(burn_itersSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type W(WSEXP);
    Rcpp::traits::input_parameter< int >::type flip_interval(flip_intervalSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type temps(tempsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type thetas(thetasSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type alphas(alphasSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type deltas(deltasSEXP);
    Rcpp::traits::input_parameter< List >::type taus(tausSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type K(KSEXP);
    Rcpp::traits::input_parameter< List >::type SDs(SDsSEXP);
    Rcpp::traits::input_parameter< double >::type th_prior_mean(th_prior_meanSEXP);
    Rcpp::traits::input_parameter< double >::type th_prior_sd(th_prior_sdSEXP);
    Rcpp::traits::input_parameter< double >::type a_shape1(a_shape1SEXP);
    Rcpp::traits::input_parameter< double >::type a_shape2(a_shape2SEXP);
    Rcpp::traits::input_parameter< double >::type a_a(a_aSEXP);
    Rcpp::traits::input_parameter< double >::type a_b(a_bSEXP);
    Rcpp::traits::input_parameter< double >::type d_shape1(d_shape1SEXP);
    Rcpp::traits::input_parameter< double >::type d_shape2(d_shape2SEXP);
    Rcpp::traits::input_parameter< double >::type d_a(d_aSEXP);
    Rcpp::traits::input_parameter< double >::type d_b(d_bSEXP);
    Rcpp::traits::input_parameter< double >::type t_shape1(t_shape1SEXP);
    Rcpp::traits::input_parameter< double >::type t_shape2(t_shape2SEXP);
    Rcpp::traits::input_parameter< double >::type t_a(t_aSEXP);
    Rcpp::traits::input_parameter< double >::type t_b(t_bSEXP);
    rcpp_result_gen = Rcpp::wrap(ggumMC3(data, iters, burn_iters, N, W, flip_interval, temps, thetas, alphas, deltas, taus, n, m, K, SDs, th_prior_mean, th_prior_sd, a_shape1, a_shape2, a_a, a_b, d_shape1, d_shape2, d_a, d_b, t_shape1, t_shape2, t_a, t_b));
    return rcpp_result_gen;
END_RCPP
}
// ggumMCMC
NumericMatrix ggumMCMC(IntegerMatrix data, int n, int m, int iterations, int burn_iterations, int flip_interval, NumericVector thetas, NumericVector alphas, NumericVector deltas, List taus, IntegerVector K, double th_prior_mean, double th_prior_sd, double a_shape1, double a_shape2, double a_a, double a_b, double d_shape1, double d_shape2, double d_a, double d_b, double t_shape1, double t_shape2, double t_a, double t_b, List SDs);
RcppExport SEXP _ggum_ggumMCMC(SEXP dataSEXP, SEXP nSEXP, SEXP mSEXP, SEXP iterationsSEXP, SEXP burn_iterationsSEXP, SEXP flip_intervalSEXP, SEXP thetasSEXP, SEXP alphasSEXP, SEXP deltasSEXP, SEXP tausSEXP, SEXP KSEXP, SEXP th_prior_meanSEXP, SEXP th_prior_sdSEXP, SEXP a_shape1SEXP, SEXP a_shape2SEXP, SEXP a_aSEXP, SEXP a_bSEXP, SEXP d_shape1SEXP, SEXP d_shape2SEXP, SEXP d_aSEXP, SEXP d_bSEXP, SEXP t_shape1SEXP, SEXP t_shape2SEXP, SEXP t_aSEXP, SEXP t_bSEXP, SEXP SDsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type iterations(iterationsSEXP);
    Rcpp::traits::input_parameter< int >::type burn_iterations(burn_iterationsSEXP);
    Rcpp::traits::input_parameter< int >::type flip_interval(flip_intervalSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type thetas(thetasSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alphas(alphasSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type deltas(deltasSEXP);
    Rcpp::traits::input_parameter< List >::type taus(tausSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type K(KSEXP);
    Rcpp::traits::input_parameter< double >::type th_prior_mean(th_prior_meanSEXP);
    Rcpp::traits::input_parameter< double >::type th_prior_sd(th_prior_sdSEXP);
    Rcpp::traits::input_parameter< double >::type a_shape1(a_shape1SEXP);
    Rcpp::traits::input_parameter< double >::type a_shape2(a_shape2SEXP);
    Rcpp::traits::input_parameter< double >::type a_a(a_aSEXP);
    Rcpp::traits::input_parameter< double >::type a_b(a_bSEXP);
    Rcpp::traits::input_parameter< double >::type d_shape1(d_shape1SEXP);
    Rcpp::traits::input_parameter< double >::type d_shape2(d_shape2SEXP);
    Rcpp::traits::input_parameter< double >::type d_a(d_aSEXP);
    Rcpp::traits::input_parameter< double >::type d_b(d_bSEXP);
    Rcpp::traits::input_parameter< double >::type t_shape1(t_shape1SEXP);
    Rcpp::traits::input_parameter< double >::type t_shape2(t_shape2SEXP);
    Rcpp::traits::input_parameter< double >::type t_a(t_aSEXP);
    Rcpp::traits::input_parameter< double >::type t_b(t_bSEXP);
    Rcpp::traits::input_parameter< List >::type SDs(SDsSEXP);
    rcpp_result_gen = Rcpp::wrap(ggumMCMC(data, n, m, iterations, burn_iterations, flip_interval, thetas, alphas, deltas, taus, K, th_prior_mean, th_prior_sd, a_shape1, a_shape2, a_a, a_b, d_shape1, d_shape2, d_a, d_b, t_shape1, t_shape2, t_a, t_b, SDs));
    return rcpp_result_gen;
END_RCPP
}
// prob
double prob(const int choice, const double th, const double a, const double d, const NumericVector& t);
RcppExport SEXP _ggum_prob(SEXP choiceSEXP, SEXP thSEXP, SEXP aSEXP, SEXP dSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type choice(choiceSEXP);
    Rcpp::traits::input_parameter< const double >::type th(thSEXP);
    Rcpp::traits::input_parameter< const double >::type a(aSEXP);
    Rcpp::traits::input_parameter< const double >::type d(dSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(prob(choice, th, a, d, t));
    return rcpp_result_gen;
END_RCPP
}
// probCol
NumericVector probCol(const IntegerVector& choices, const NumericVector& thetas, const double a, const double d, const NumericVector& t);
RcppExport SEXP _ggum_probCol(SEXP choicesSEXP, SEXP thetasSEXP, SEXP aSEXP, SEXP dSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector& >::type choices(choicesSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type thetas(thetasSEXP);
    Rcpp::traits::input_parameter< const double >::type a(aSEXP);
    Rcpp::traits::input_parameter< const double >::type d(dSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(probCol(choices, thetas, a, d, t));
    return rcpp_result_gen;
END_RCPP
}
// probRow
NumericVector probRow(const IntegerVector& choices, const double th, const NumericVector& a, const NumericVector& d, const List& t);
RcppExport SEXP _ggum_probRow(SEXP choicesSEXP, SEXP thSEXP, SEXP aSEXP, SEXP dSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector& >::type choices(choicesSEXP);
    Rcpp::traits::input_parameter< const double >::type th(thSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type a(aSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type d(dSEXP);
    Rcpp::traits::input_parameter< const List& >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(probRow(choices, th, a, d, t));
    return rcpp_result_gen;
END_RCPP
}
// log_prob
double log_prob(const int choice, const double th, const double a, const double d, const NumericVector& t);
RcppExport SEXP _ggum_log_prob(SEXP choiceSEXP, SEXP thSEXP, SEXP aSEXP, SEXP dSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type choice(choiceSEXP);
    Rcpp::traits::input_parameter< const double >::type th(thSEXP);
    Rcpp::traits::input_parameter< const double >::type a(aSEXP);
    Rcpp::traits::input_parameter< const double >::type d(dSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(log_prob(choice, th, a, d, t));
    return rcpp_result_gen;
END_RCPP
}
// log_probCol
NumericVector log_probCol(const IntegerVector& choices, const NumericVector& thetas, const double a, const double d, const NumericVector& t);
RcppExport SEXP _ggum_log_probCol(SEXP choicesSEXP, SEXP thetasSEXP, SEXP aSEXP, SEXP dSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector& >::type choices(choicesSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type thetas(thetasSEXP);
    Rcpp::traits::input_parameter< const double >::type a(aSEXP);
    Rcpp::traits::input_parameter< const double >::type d(dSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(log_probCol(choices, thetas, a, d, t));
    return rcpp_result_gen;
END_RCPP
}
// log_probRow
NumericVector log_probRow(const IntegerVector& choices, const double th, const NumericVector& a, const NumericVector& d, const List& t);
RcppExport SEXP _ggum_log_probRow(SEXP choicesSEXP, SEXP thSEXP, SEXP aSEXP, SEXP dSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector& >::type choices(choicesSEXP);
    Rcpp::traits::input_parameter< const double >::type th(thSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type a(aSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type d(dSEXP);
    Rcpp::traits::input_parameter< const List& >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(log_probRow(choices, th, a, d, t));
    return rcpp_result_gen;
END_RCPP
}
// tune_proposals
List tune_proposals(const IntegerMatrix& responseMatrix, NumericVector& thetas, NumericVector& alphas, NumericVector& deltas, List& taus, const IntegerVector& K, const int tune_iters, int n, int m, double th_prior_mean, double th_prior_sd, double a_shape1, double a_shape2, double a_a, double a_b, double d_shape1, double d_shape2, double d_a, double d_b, double t_shape1, double t_shape2, double t_a, double t_b);
RcppExport SEXP _ggum_tune_proposals(SEXP responseMatrixSEXP, SEXP thetasSEXP, SEXP alphasSEXP, SEXP deltasSEXP, SEXP tausSEXP, SEXP KSEXP, SEXP tune_itersSEXP, SEXP nSEXP, SEXP mSEXP, SEXP th_prior_meanSEXP, SEXP th_prior_sdSEXP, SEXP a_shape1SEXP, SEXP a_shape2SEXP, SEXP a_aSEXP, SEXP a_bSEXP, SEXP d_shape1SEXP, SEXP d_shape2SEXP, SEXP d_aSEXP, SEXP d_bSEXP, SEXP t_shape1SEXP, SEXP t_shape2SEXP, SEXP t_aSEXP, SEXP t_bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type responseMatrix(responseMatrixSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type thetas(thetasSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type alphas(alphasSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type deltas(deltasSEXP);
    Rcpp::traits::input_parameter< List& >::type taus(tausSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type K(KSEXP);
    Rcpp::traits::input_parameter< const int >::type tune_iters(tune_itersSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< double >::type th_prior_mean(th_prior_meanSEXP);
    Rcpp::traits::input_parameter< double >::type th_prior_sd(th_prior_sdSEXP);
    Rcpp::traits::input_parameter< double >::type a_shape1(a_shape1SEXP);
    Rcpp::traits::input_parameter< double >::type a_shape2(a_shape2SEXP);
    Rcpp::traits::input_parameter< double >::type a_a(a_aSEXP);
    Rcpp::traits::input_parameter< double >::type a_b(a_bSEXP);
    Rcpp::traits::input_parameter< double >::type d_shape1(d_shape1SEXP);
    Rcpp::traits::input_parameter< double >::type d_shape2(d_shape2SEXP);
    Rcpp::traits::input_parameter< double >::type d_a(d_aSEXP);
    Rcpp::traits::input_parameter< double >::type d_b(d_bSEXP);
    Rcpp::traits::input_parameter< double >::type t_shape1(t_shape1SEXP);
    Rcpp::traits::input_parameter< double >::type t_shape2(t_shape2SEXP);
    Rcpp::traits::input_parameter< double >::type t_a(t_aSEXP);
    Rcpp::traits::input_parameter< double >::type t_b(t_bSEXP);
    rcpp_result_gen = Rcpp::wrap(tune_proposals(responseMatrix, thetas, alphas, deltas, taus, K, tune_iters, n, m, th_prior_mean, th_prior_sd, a_shape1, a_shape2, a_a, a_b, d_shape1, d_shape2, d_a, d_b, t_shape1, t_shape2, t_a, t_b));
    return rcpp_result_gen;
END_RCPP
}
// tune_temps
NumericVector tune_temps(IntegerMatrix data, int n_temps, int temp_tune_iters, int n_draws, int n, int m, IntegerVector K, List SDs, double th_prior_mean, double th_prior_sd, double a_shape1, double a_shape2, double a_a, double a_b, double d_shape1, double d_shape2, double d_a, double d_b, double t_shape1, double t_shape2, double t_a, double t_b);
RcppExport SEXP _ggum_tune_temps(SEXP dataSEXP, SEXP n_tempsSEXP, SEXP temp_tune_itersSEXP, SEXP n_drawsSEXP, SEXP nSEXP, SEXP mSEXP, SEXP KSEXP, SEXP SDsSEXP, SEXP th_prior_meanSEXP, SEXP th_prior_sdSEXP, SEXP a_shape1SEXP, SEXP a_shape2SEXP, SEXP a_aSEXP, SEXP a_bSEXP, SEXP d_shape1SEXP, SEXP d_shape2SEXP, SEXP d_aSEXP, SEXP d_bSEXP, SEXP t_shape1SEXP, SEXP t_shape2SEXP, SEXP t_aSEXP, SEXP t_bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type n_temps(n_tempsSEXP);
    Rcpp::traits::input_parameter< int >::type temp_tune_iters(temp_tune_itersSEXP);
    Rcpp::traits::input_parameter< int >::type n_draws(n_drawsSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type K(KSEXP);
    Rcpp::traits::input_parameter< List >::type SDs(SDsSEXP);
    Rcpp::traits::input_parameter< double >::type th_prior_mean(th_prior_meanSEXP);
    Rcpp::traits::input_parameter< double >::type th_prior_sd(th_prior_sdSEXP);
    Rcpp::traits::input_parameter< double >::type a_shape1(a_shape1SEXP);
    Rcpp::traits::input_parameter< double >::type a_shape2(a_shape2SEXP);
    Rcpp::traits::input_parameter< double >::type a_a(a_aSEXP);
    Rcpp::traits::input_parameter< double >::type a_b(a_bSEXP);
    Rcpp::traits::input_parameter< double >::type d_shape1(d_shape1SEXP);
    Rcpp::traits::input_parameter< double >::type d_shape2(d_shape2SEXP);
    Rcpp::traits::input_parameter< double >::type d_a(d_aSEXP);
    Rcpp::traits::input_parameter< double >::type d_b(d_bSEXP);
    Rcpp::traits::input_parameter< double >::type t_shape1(t_shape1SEXP);
    Rcpp::traits::input_parameter< double >::type t_shape2(t_shape2SEXP);
    Rcpp::traits::input_parameter< double >::type t_a(t_aSEXP);
    Rcpp::traits::input_parameter< double >::type t_b(t_bSEXP);
    rcpp_result_gen = Rcpp::wrap(tune_temps(data, n_temps, temp_tune_iters, n_draws, n, m, K, SDs, th_prior_mean, th_prior_sd, a_shape1, a_shape2, a_a, a_b, d_shape1, d_shape2, d_a, d_b, t_shape1, t_shape2, t_a, t_b));
    return rcpp_result_gen;
END_RCPP
}
// update_alpha_MCMC
double update_alpha_MCMC(const IntegerVector& responses, const NumericVector& thetas, const double cv, const double delta, const NumericVector& taus, const double proposal_sd, const double shape1, const double shape2, const double a, const double b);
RcppExport SEXP _ggum_update_alpha_MCMC(SEXP responsesSEXP, SEXP thetasSEXP, SEXP cvSEXP, SEXP deltaSEXP, SEXP tausSEXP, SEXP proposal_sdSEXP, SEXP shape1SEXP, SEXP shape2SEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector& >::type responses(responsesSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type thetas(thetasSEXP);
    Rcpp::traits::input_parameter< const double >::type cv(cvSEXP);
    Rcpp::traits::input_parameter< const double >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type taus(tausSEXP);
    Rcpp::traits::input_parameter< const double >::type proposal_sd(proposal_sdSEXP);
    Rcpp::traits::input_parameter< const double >::type shape1(shape1SEXP);
    Rcpp::traits::input_parameter< const double >::type shape2(shape2SEXP);
    Rcpp::traits::input_parameter< const double >::type a(aSEXP);
    Rcpp::traits::input_parameter< const double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(update_alpha_MCMC(responses, thetas, cv, delta, taus, proposal_sd, shape1, shape2, a, b));
    return rcpp_result_gen;
END_RCPP
}
// update_delta_MCMC
double update_delta_MCMC(const IntegerVector& responses, const NumericVector& thetas, const double alpha, const double cv, const NumericVector& taus, const double proposal_sd, const double shape1, const double shape2, const double a, const double b);
RcppExport SEXP _ggum_update_delta_MCMC(SEXP responsesSEXP, SEXP thetasSEXP, SEXP alphaSEXP, SEXP cvSEXP, SEXP tausSEXP, SEXP proposal_sdSEXP, SEXP shape1SEXP, SEXP shape2SEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector& >::type responses(responsesSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type thetas(thetasSEXP);
    Rcpp::traits::input_parameter< const double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< const double >::type cv(cvSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type taus(tausSEXP);
    Rcpp::traits::input_parameter< const double >::type proposal_sd(proposal_sdSEXP);
    Rcpp::traits::input_parameter< const double >::type shape1(shape1SEXP);
    Rcpp::traits::input_parameter< const double >::type shape2(shape2SEXP);
    Rcpp::traits::input_parameter< const double >::type a(aSEXP);
    Rcpp::traits::input_parameter< const double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(update_delta_MCMC(responses, thetas, alpha, cv, taus, proposal_sd, shape1, shape2, a, b));
    return rcpp_result_gen;
END_RCPP
}
// update_tau_MCMC
double update_tau_MCMC(const int k, const IntegerVector& responses, const NumericVector& thetas, const double alpha, const double delta, const NumericVector& taus, const double proposal_sd, const double shape1, const double shape2, const double a, const double b);
RcppExport SEXP _ggum_update_tau_MCMC(SEXP kSEXP, SEXP responsesSEXP, SEXP thetasSEXP, SEXP alphaSEXP, SEXP deltaSEXP, SEXP tausSEXP, SEXP proposal_sdSEXP, SEXP shape1SEXP, SEXP shape2SEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type k(kSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type responses(responsesSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type thetas(thetasSEXP);
    Rcpp::traits::input_parameter< const double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< const double >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type taus(tausSEXP);
    Rcpp::traits::input_parameter< const double >::type proposal_sd(proposal_sdSEXP);
    Rcpp::traits::input_parameter< const double >::type shape1(shape1SEXP);
    Rcpp::traits::input_parameter< const double >::type shape2(shape2SEXP);
    Rcpp::traits::input_parameter< const double >::type a(aSEXP);
    Rcpp::traits::input_parameter< const double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(update_tau_MCMC(k, responses, thetas, alpha, delta, taus, proposal_sd, shape1, shape2, a, b));
    return rcpp_result_gen;
END_RCPP
}
// update_theta_MC3
double update_theta_MC3(const double cv, const IntegerVector& choices, const NumericVector& a, const NumericVector& d, const List& t, const double temp, const double proposal_sd, const double prior_mean, const double prior_sd);
RcppExport SEXP _ggum_update_theta_MC3(SEXP cvSEXP, SEXP choicesSEXP, SEXP aSEXP, SEXP dSEXP, SEXP tSEXP, SEXP tempSEXP, SEXP proposal_sdSEXP, SEXP prior_meanSEXP, SEXP prior_sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type cv(cvSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type choices(choicesSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type a(aSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type d(dSEXP);
    Rcpp::traits::input_parameter< const List& >::type t(tSEXP);
    Rcpp::traits::input_parameter< const double >::type temp(tempSEXP);
    Rcpp::traits::input_parameter< const double >::type proposal_sd(proposal_sdSEXP);
    Rcpp::traits::input_parameter< const double >::type prior_mean(prior_meanSEXP);
    Rcpp::traits::input_parameter< const double >::type prior_sd(prior_sdSEXP);
    rcpp_result_gen = Rcpp::wrap(update_theta_MC3(cv, choices, a, d, t, temp, proposal_sd, prior_mean, prior_sd));
    return rcpp_result_gen;
END_RCPP
}
// update_alpha_MC3
double update_alpha_MC3(const double cv, const IntegerVector& choices, const NumericVector& th, const double d, const NumericVector& t, const double temp, const double proposal_sd, const double shape1, const double shape2, const double a, const double b);
RcppExport SEXP _ggum_update_alpha_MC3(SEXP cvSEXP, SEXP choicesSEXP, SEXP thSEXP, SEXP dSEXP, SEXP tSEXP, SEXP tempSEXP, SEXP proposal_sdSEXP, SEXP shape1SEXP, SEXP shape2SEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type cv(cvSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type choices(choicesSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type th(thSEXP);
    Rcpp::traits::input_parameter< const double >::type d(dSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type t(tSEXP);
    Rcpp::traits::input_parameter< const double >::type temp(tempSEXP);
    Rcpp::traits::input_parameter< const double >::type proposal_sd(proposal_sdSEXP);
    Rcpp::traits::input_parameter< const double >::type shape1(shape1SEXP);
    Rcpp::traits::input_parameter< const double >::type shape2(shape2SEXP);
    Rcpp::traits::input_parameter< const double >::type a(aSEXP);
    Rcpp::traits::input_parameter< const double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(update_alpha_MC3(cv, choices, th, d, t, temp, proposal_sd, shape1, shape2, a, b));
    return rcpp_result_gen;
END_RCPP
}
// update_delta_MC3
double update_delta_MC3(const double cv, const IntegerVector& choices, const NumericVector& th, const double a, const NumericVector& t, const double temp, const double proposal_sd, const double shape1, const double shape2, const double low, const double high);
RcppExport SEXP _ggum_update_delta_MC3(SEXP cvSEXP, SEXP choicesSEXP, SEXP thSEXP, SEXP aSEXP, SEXP tSEXP, SEXP tempSEXP, SEXP proposal_sdSEXP, SEXP shape1SEXP, SEXP shape2SEXP, SEXP lowSEXP, SEXP highSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type cv(cvSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type choices(choicesSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type th(thSEXP);
    Rcpp::traits::input_parameter< const double >::type a(aSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type t(tSEXP);
    Rcpp::traits::input_parameter< const double >::type temp(tempSEXP);
    Rcpp::traits::input_parameter< const double >::type proposal_sd(proposal_sdSEXP);
    Rcpp::traits::input_parameter< const double >::type shape1(shape1SEXP);
    Rcpp::traits::input_parameter< const double >::type shape2(shape2SEXP);
    Rcpp::traits::input_parameter< const double >::type low(lowSEXP);
    Rcpp::traits::input_parameter< const double >::type high(highSEXP);
    rcpp_result_gen = Rcpp::wrap(update_delta_MC3(cv, choices, th, a, t, temp, proposal_sd, shape1, shape2, low, high));
    return rcpp_result_gen;
END_RCPP
}
// update_tau_MC3
double update_tau_MC3(const int k, const IntegerVector& choices, const NumericVector& th, const double a, const double d, const NumericVector& t, const double temp, const double proposal_sd, const double shape1, const double shape2, const double low, const double high);
RcppExport SEXP _ggum_update_tau_MC3(SEXP kSEXP, SEXP choicesSEXP, SEXP thSEXP, SEXP aSEXP, SEXP dSEXP, SEXP tSEXP, SEXP tempSEXP, SEXP proposal_sdSEXP, SEXP shape1SEXP, SEXP shape2SEXP, SEXP lowSEXP, SEXP highSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type k(kSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type choices(choicesSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type th(thSEXP);
    Rcpp::traits::input_parameter< const double >::type a(aSEXP);
    Rcpp::traits::input_parameter< const double >::type d(dSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type t(tSEXP);
    Rcpp::traits::input_parameter< const double >::type temp(tempSEXP);
    Rcpp::traits::input_parameter< const double >::type proposal_sd(proposal_sdSEXP);
    Rcpp::traits::input_parameter< const double >::type shape1(shape1SEXP);
    Rcpp::traits::input_parameter< const double >::type shape2(shape2SEXP);
    Rcpp::traits::input_parameter< const double >::type low(lowSEXP);
    Rcpp::traits::input_parameter< const double >::type high(highSEXP);
    rcpp_result_gen = Rcpp::wrap(update_tau_MC3(k, choices, th, a, d, t, temp, proposal_sd, shape1, shape2, low, high));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ggum_init_thetas", (DL_FUNC) &_ggum_init_thetas, 3},
    {"_ggum_init_alphas", (DL_FUNC) &_ggum_init_alphas, 5},
    {"_ggum_init_deltas", (DL_FUNC) &_ggum_init_deltas, 5},
    {"_ggum_init_taus", (DL_FUNC) &_ggum_init_taus, 6},
    {"_ggum_ggumMC3", (DL_FUNC) &_ggum_ggumMC3, 29},
    {"_ggum_ggumMCMC", (DL_FUNC) &_ggum_ggumMCMC, 26},
    {"_ggum_prob", (DL_FUNC) &_ggum_prob, 5},
    {"_ggum_probCol", (DL_FUNC) &_ggum_probCol, 5},
    {"_ggum_probRow", (DL_FUNC) &_ggum_probRow, 5},
    {"_ggum_log_prob", (DL_FUNC) &_ggum_log_prob, 5},
    {"_ggum_log_probCol", (DL_FUNC) &_ggum_log_probCol, 5},
    {"_ggum_log_probRow", (DL_FUNC) &_ggum_log_probRow, 5},
    {"_ggum_tune_proposals", (DL_FUNC) &_ggum_tune_proposals, 23},
    {"_ggum_tune_temps", (DL_FUNC) &_ggum_tune_temps, 22},
    {"_ggum_update_alpha_MCMC", (DL_FUNC) &_ggum_update_alpha_MCMC, 10},
    {"_ggum_update_delta_MCMC", (DL_FUNC) &_ggum_update_delta_MCMC, 10},
    {"_ggum_update_tau_MCMC", (DL_FUNC) &_ggum_update_tau_MCMC, 11},
    {"_ggum_update_theta_MC3", (DL_FUNC) &_ggum_update_theta_MC3, 9},
    {"_ggum_update_alpha_MC3", (DL_FUNC) &_ggum_update_alpha_MC3, 11},
    {"_ggum_update_delta_MC3", (DL_FUNC) &_ggum_update_delta_MC3, 11},
    {"_ggum_update_tau_MC3", (DL_FUNC) &_ggum_update_tau_MC3, 12},
    {NULL, NULL, 0}
};

RcppExport void R_init_ggum(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
