/*
 *  test-decode.h - Test GstVaapiDecoder
 *
 *  gstreamer-vaapi (C) 2010-2011 Splitted-Desktop Systems
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
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA
 */

#ifndef TEST_DECODE_H
#define TEST_DECODE_H

#include <gst/vaapi/gstvaapidisplay.h>
#include <gst/vaapi/gstvaapiprofile.h>

typedef struct _VideoDecodeInfo VideoDecodeInfo;
struct _VideoDecodeInfo {
    GstVaapiProfile     profile;
    guint               width;
    guint               height;
    const guchar       *data;
    guint               data_size;
};

#endif /* TEST_DECODE_H */
