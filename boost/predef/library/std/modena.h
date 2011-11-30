/*
Copyright Redshift Software, Inc. 2008-2011
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_LIBRARY_STD_MODENA_H
#define BOOST_PREDEF_LIBRARY_STD_MODENA_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_LIBSTD_MSIPL`]

[@http://modena.us/ Modena Software Lib++] Standard C++ Library.
 */

#define BOOST_LIBSTD_MSIPL BOOST_VERSION_NUMBER(0,0,0)

#if defined(MSIPL_COMPILE_H) || defined(__MSIPL_COMPILE_H)
    #undef BOOST_LIBSTD_MSIPL
    #define BOOST_LIBSTD_MSIPL BOOST_VERSION_NUMBER(0,0,1)
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_LIBSTD_MSIPL,"Modena Software Lib++")

#endif
