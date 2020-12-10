if(getRversion() < "3.3.0") setInternet2()
VERSION <- commandArgs(TRUE)
if(!file.exists(sprintf("../windows/icu-%s/include/unicode/uvernum.h", VERSION))){
  download.file(sprintf("https://github.com/rwinlib/icu/archive/v%s.zip", VERSION), "lib.zip", quiet = TRUE)
  dir.create("../windows", showWarnings = FALSE)
  unzip("lib.zip", exdir = "../windows")
  unlink("lib.zip")
}
