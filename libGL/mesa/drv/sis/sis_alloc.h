/**************************************************************************

Copyright 2003 Eric Anholt
All Rights Reserved.

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the "Software"),
to deal in the Software without restriction, including without limitation
on the rights to use, copy, modify, merge, publish, distribute, sub
license, and/or sell copies of the Software, and to permit persons to whom
the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice (including the next
paragraph) shall be included in all copies or substantial portions of the
Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. IN NO EVENT SHALL
ERIC ANHOLT BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

**************************************************************************/
/* $XFree86: xc/lib/GL/mesa/src/drv/sis/sis_alloc.h,v 1.2 2003/12/09 00:15:21 alanh Exp $ */

/*
 * Authors:
 *    Eric Anholt <anholt@FreeBSD.org>
 */

enum {
   VIDEO_TYPE,
   AGP_TYPE
};

void sisAllocZStencilBuffer( sisContextPtr smesa );
void sisFreeZStencilBuffer( sisContextPtr smesa );
void sisAllocBackbuffer( sisContextPtr smesa );
void sisFreeBackbuffer ( sisContextPtr smesa );
void *sisAllocFB( sisContextPtr smesa, GLuint size, void **handle );
void sisFreeFB( sisContextPtr smesa, void *handle );
void *sisAllocAGP( sisContextPtr smesa, GLuint size, void **handle );
void sisFreeAGP( sisContextPtr smesa, void *handle );