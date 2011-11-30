/*
Copyright Redshift Software, Inc. 2008-2011
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE_1_0.txt or copy at
http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef BOOST_PREDEF_COMPILER_DIGITALMARS_H
#define BOOST_PREDEF_COMPILER_DIGITALMARS_H

#include <boost/predef/version_number.h>
#include <boost/predef/make.h>

/*`
[heading `BOOST_CXX_DMC`]

[@http://en.wikipedia.org/wiki/XXX Digital Mars] compiler.
Version number available as major, minor, and patch.
 */

#define BOOST_CXX_DMC BOOST_VERSION_NUMBER(0,0,0)

#if defined(__DMC__)
    #undef BOOST_CXX_DMC
    #define BOOST_CXX_DMC BOOST_PREDEF_MAKE_F_F_F(__DMC__)
#endif

#include <boost/predef/detail/test.h>
BOOST_PREDEF_DECLARE_TEST(BOOST_CXX_DMC,"Digital Mars")

#endif
