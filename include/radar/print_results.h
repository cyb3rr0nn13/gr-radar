/* -*- c++ -*- */
/* 
 * Copyright 2014 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */
 
#ifndef INCLUDED_RADAR_PRINT_RESULTS_H
#define INCLUDED_RADAR_PRINT_RESULTS_H

#include <radar/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace radar {

    /*!
     * \brief <+description of block+>
     * \ingroup radar
     *
     */
    class RADAR_API print_results : virtual public gr::block
    {
     public:
      typedef boost::shared_ptr<print_results> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of radar::print_results.
       *
       * To avoid accidental use of raw pointers, radar::print_results's
       * constructor is in a private implementation
       * class. radar::print_results::make is the public interface for
       * creating new instances.
       */
      static sptr make(bool store_msg=false, const std::string filename="");
    };

  } // namespace radar
} // namespace gr

#endif /* INCLUDED_RADAR_PRINT_RESULTS_H */

