/*
* Copyright (C) TuxSH 2015
* This file is part of LibPkmGC.
*
* LibPkmGC is free software: you can redistribute it and/or modify
* it under the terms of the GNU Lesser General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* LibPkmGC is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public License
* along with LibPkmGC.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _LIBPKMGC_COLOSSEUM_BAG_DATA_H
#define _LIBPKMGC_COLOSSEUM_BAG_DATA_H

#include <LibPkmGC/GC/Common/BagData.h>

namespace LibPkmGC {
namespace Colosseum {

class LIBPKMGC_DECL BagData :
	public GC::BagData
{
public:
	static const size_t size = 0x300;
	BagData(void);
	BagData(BagData const& other);
	BagData(const u8* inData);
	~BagData();

	void swap(BagData& other);

	BagData* clone(void) const;
	BagData* create(void) const;


private:
	BagData(XD::BagData const&);
};

}
}

#endif