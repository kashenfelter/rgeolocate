// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// maxmind_
List maxmind_(std::vector < std::string > ips, const char* file, std::vector < std::string > fields);
RcppExport SEXP rgeolocate_maxmind_(SEXP ipsSEXP, SEXP fileSEXP, SEXP fieldsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector < std::string > >::type ips(ipsSEXP);
    Rcpp::traits::input_parameter< const char* >::type file(fileSEXP);
    Rcpp::traits::input_parameter< std::vector < std::string > >::type fields(fieldsSEXP);
    __result = Rcpp::wrap(maxmind_(ips, file, fields));
    return __result;
END_RCPP
}
