// ------------------------------------------------------------------------------
// Copyright (c) 2012 GeometryFactory (FRANCE)
// SPDX-License-Identifier: GPL-3.0-or-later OR LicenseRef-Commercial
// ------------------------------------------------------------------------------ 


#ifndef SWIG_CGAL_COMMON_WRAPPER_ITERATOR_HELPER_H
#define SWIG_CGAL_COMMON_WRAPPER_ITERATOR_HELPER_H

#if !SWIG_CGAL_NON_SUPPORTED_TARGET_LANGUAGE

#include <SWIG_CGAL/Common/Input_iterator_wrapper.h>
#include <SWIG_CGAL/Common/Output_iterator_wrapper.h>
#include <CGAL/Iterator_range.h>

template <class Wrapper>
struct Wrapper_iterator_helper{
  typedef typename internal::Converter<Wrapper>::result_type Base;
  typedef CGAL::Iterator_range<Input_iterator_wrapper<Wrapper,Base> > input;
  typedef boost::function_output_iterator< Container_writer<Wrapper,Base> >                                       output;
};
#else
template <class Wrapper>
struct Wrapper_iterator_helper{
  typedef Generic_input_iterator<Wrapper>  input;
  typedef Generic_output_iterator<Wrapper>  output;
};
#endif


#endif //SWIG_CGAL_COMMON_WRAPPER_ITERATOR_HELPER_H
