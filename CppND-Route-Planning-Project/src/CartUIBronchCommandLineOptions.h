//======================================================================
// Auris Surgical Robotics, Inc.
// (C) Copyright 2015. All Rights Reserved.
//
//
//! \file     CartUIBronchCommandLineOptions.h
//! \brief    Some command line options that CartUIBronch supports
//!
//! \details
//!
//! \date     February 2019
//!
//! \author   Zach Myers <zachmyers@aurishealth.com>
//!
//======================================================================
#pragma once

#include "CommandLineOption.h"
#include <ostream>

namespace Asr {

    //----------------------------------------------------------------------
    //! CL option to set the number of arms
    class NumberOfArmsOption : public CommandLineOptionWithValue
    {
    public:
        NumberOfArmsOption()
            : CommandLineOptionWithValue("", "--arms")
        {
        }

        //--------------------------------------------------
        void PrintHelp(std::ostream& os) const override
        {
            os << "     --arms <Number of Arms>  : "
                "The number of arms on the system, 2 or 3."
               << std::endl;
        }
    };
} // namespace Asr
