/*
 *  table-t03g.h - Wacom G5 Digitizer Controller (I2C bus)
 *
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

short TblX_CCW_LLeft_44[] = {
#include "table/t0chnduos/wacom_i2c_tblX_CCW_LLeft_T0.h"
};
short TblY_CCW_LLeft_44[] = {
#include "table/t0chnduos/wacom_i2c_tblY_CCW_LLeft_T0.h"
};

short TblX_CW_LRight_44[] = {
#include "table/t0chnduos/wacom_i2c_tblX_CW_LRight_T0.h"
};
short TblY_CW_LRight_44[] = {
#include "table/t0chnduos/wacom_i2c_tblY_CW_LRight_T0.h"
};

short TblX_PLeft_44[] = {
#include "table/t0chnduos/wacom_i2c_tblX_PLeft_T0.h"
};
short TblY_PLeft_44[] = {
#include "table/t0chnduos/wacom_i2c_tblY_PLeft_T0.h"
};

short TblX_PRight_44[] = {
#include "table/t0chnduos/wacom_i2c_tblX_PRight_T0.h"
};
short TblY_PRight_44[] = {
#include "table/t0chnduos/wacom_i2c_tblY_PRight_T0.h"
};

/* Tilt offset */
/* 0: Left, 1: Right */
/* 0: Portrait 0, 1: Landscape 90, 2: Portrait 180 3: Landscape 270*/
short tilt_offsetX[MAX_HAND][MAX_ROTATION] = \
	{{-10, -55, 0, 30, }, {30, -10, -55, 0, } };
short tilt_offsetY[MAX_HAND][MAX_ROTATION] = \
	{{0, -40, -60, 0, }, {0, 0, -40, -60, }};

char *tuning_version = "1016";
char *tuning_model = "N7102";

/* Distance Offset Table
short *tableX[MAX_HAND][MAX_ROTATION] = \
	{{TblX_PLeft_44, TblX_CCW_LLeft_44, TblX_CW_LRight_44, TblX_PRight_44},
	{TblX_PRight_44, TblX_PLeft_44, TblX_CCW_LLeft_44, TblX_CW_LRight_44} };

short *tableY[MAX_HAND][MAX_ROTATION] = \
	{{TblY_PLeft_44, TblY_CCW_LLeft_44, TblY_CW_LRight_44, TblY_PRight_44},
	{TblY_PRight_44, TblY_PLeft_44, TblY_CCW_LLeft_44, TblY_CW_LRight_44} }; */
