//******************************************************************************
///
/// @file frontend/defaultplatformbase.h
///
/// This module contains all defines, typedefs, and prototypes for the
/// C++ interface of the DefaultPlatformBase class.
///
/// @copyright
/// @parblock
///
/// Persistence of Vision Ray Tracer ('POV-Ray') version 3.7.
/// Copyright 1991-2015 Persistence of Vision Raytracer Pty. Ltd.
///
/// POV-Ray is free software: you can redistribute it and/or modify
/// it under the terms of the GNU Affero General Public License as
/// published by the Free Software Foundation, either version 3 of the
/// License, or (at your option) any later version.
///
/// POV-Ray is distributed in the hope that it will be useful,
/// but WITHOUT ANY WARRANTY; without even the implied warranty of
/// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
/// GNU Affero General Public License for more details.
///
/// You should have received a copy of the GNU Affero General Public License
/// along with this program.  If not, see <http://www.gnu.org/licenses/>.
///
/// ----------------------------------------------------------------------------
///
/// POV-Ray is based on the popular DKB raytracer version 2.12.
/// DKBTrace was originally written by David K. Buck.
/// DKBTrace Ver 2.0-2.12 were written by David K. Buck & Aaron A. Collins.
///
/// @endparblock
///
//******************************************************************************

#ifndef DEFAULTPLATFORMBASE_H
#define DEFAULTPLATFORMBASE_H

#include "configbase.h"

#include "platformbase.h"

namespace pov_base
{

class DefaultPlatformBase : public PlatformBase
{
    public:
        DefaultPlatformBase();
        ~DefaultPlatformBase();

        virtual IStream *CreateIStream(const unsigned int stype);
        virtual OStream *CreateOStream(const unsigned int stype);

        virtual UCS2String GetTemporaryPath();
        virtual UCS2String CreateTemporaryFile();
        virtual void DeleteTemporaryFile(const UCS2String& filename);

        virtual bool ReadFileFromURL(OStream *file, const UCS2String& url, const UCS2String& referrer = UCS2String());
};

}

#endif
