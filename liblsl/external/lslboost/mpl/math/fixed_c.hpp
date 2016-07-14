
#ifndef BOOST_MPL_FIXED_C_HPP_INCLUDED
#define BOOST_MPL_FIXED_C_HPP_INCLUDED

// Copyright Aleksey Gurtovoy 2000-2004
//
// Distributed under the Boost Software License, Version 1.0. 
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.lslboost.org/LICENSE_1_0.txt)
//
// See http://www.lslboost.org/libs/mpl for documentation.

// $Id: fixed_c.hpp 49267 2008-10-11 06:19:02Z agurtovoy $
// $Date: 2008-10-10 23:19:02 -0700 (Fri, 10 Oct 2008) $
// $Revision: 49267 $

#include <lslboost/mpl/aux_/config/static_constant.hpp>

namespace lslboost { namespace mpl {

template<
      long IntegerPart
    , unsigned long FractionPart
    >
struct fixed_c
{
    BOOST_STATIC_CONSTANT(long, integer_part = IntegerPart);
    BOOST_STATIC_CONSTANT(unsigned long, fraction_part = FractionPart);
    typedef fixed_c<IntegerPart, FractionPart> type;
    
    fixed_c() {}
};

}}

#endif // BOOST_MPL_FIXED_C_HPP_INCLUDED
