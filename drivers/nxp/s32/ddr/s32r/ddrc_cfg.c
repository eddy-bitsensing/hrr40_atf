/*
 * Copyright 2022 NXP
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 * contributors may be used to endorse or promote products derived from this
 * software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#include <ddr/ddr_init.h>

struct regconf ddrc_cfg[] = {
	{0x4007c604, 0x00000000U},
#if (S32GEN1_DRAM_INLINE_ECC == 1)
	{0x4007c608, 0x37ffffffU},
#else
	{0x4007c608, 0x00000000U},
#endif
	{0x403c0000, 0x83080020U},
	{0x403c0010, 0x00000030U},
	{0x403c0014, 0x00000000U},
	{0x403c001c, 0x00000000U},
	{0x403c0020, 0x00000202U},
	{0x403c0024, 0x0186a000U},
	{0x403c002c, 0x00000001U},
	{0x403c0030, 0x00000020U},
	{0x403c0034, 0x00402010U},
	{0x403c0038, 0x00000000U},
	{0x403c0050, 0x00210040U},
	{0x403c0054, 0x00000000U},
	{0x403c0060, 0x00000000U},
	{0x403c0064, 0x006100e0U},
	{0x403c0068, 0x008c0000U},
#if (S32GEN1_DRAM_INLINE_ECC == 1)
	{0x403c0070, 0x033f7f54U},
	{0x403c0074, 0x00000780U},
#else
	{0x403c0070, 0x033f7f40U},
	{0x403c0074, 0x000007b0U},
#endif
	{0x403c007c, 0x00000700U},
	{0x403c00b8, 0x00000000U},
	{0x403c00bc, 0x00000000U},
	{0x403c00c0, 0x00000000U},
	{0x403c00c4, 0x00001000U},
	{0x403c00d0, 0xc003061cU},
	{0x403c00d4, 0x009e0000U},
	{0x403c00d8, 0x00000d05U},
	{0x403c00dc, 0x0054002dU},
	{0x403c00e0, 0x00330008U},
	{0x403c00e4, 0x00100004U},
	{0x403c00e8, 0x0066004dU},
	{0x403c00ec, 0x0004004fU},
	{0x403c00f0, 0x00000000U},
	{0x403c00f4, 0x00000779U},
	{0x403c0100, 0x1a201b22U},
	{0x403c0104, 0x00060633U},
	{0x403c0108, 0x070e1517U},
	{0x403c010c, 0x00c0c000U},
	{0x403c0110, 0x0f04080fU},
	{0x403c0114, 0x02040c0cU},
	{0x403c0118, 0x01010007U},
	{0x403c011c, 0x00000401U},
	{0x403c0120, 0x03034405U},
	{0x403c0124, 0x0004040dU},
	{0x403c0128, 0x001c180aU},
	{0x403c012c, 0x440c021cU},
	{0x403c0130, 0x00020000U},
	{0x403c0134, 0x0c100002U},
	{0x403c0138, 0x000000e6U},
	{0x403c013c, 0x00000000U},
	{0x403c0180, 0x03200018U},
	{0x403c0184, 0x028061a8U},
	{0x403c0188, 0x00000000U},
	{0x403c0190, 0x0497820aU},
	{0x403c0194, 0x00080303U},
	{0x403c0198, 0x07000000U},
	{0x403c019c, 0x00000000U},
	{0x403c01a0, 0xe0400018U},
	{0x403c01a4, 0x00df00e4U},
	{0x403c01a8, 0x80000000U},
	{0x403c01b0, 0x00000051U},
	{0x403c01b4, 0x0000170aU},
	{0x403c01b8, 0x00000000U},
	{0x403c01c0, 0x00000001U},
	{0x403c01c4, 0x00000001U},
#if (S32GEN1_DRAM_INLINE_ECC == 1)
	{0x403c0200, 0x00000014U},
	{0x403c0204, 0x00050505U},
#else
	{0x403c0200, 0x00000017U},
	{0x403c0204, 0x00080808U},
#endif
	{0x403c0208, 0x00000000U},
#if (S32GEN1_DRAM_INLINE_ECC == 1)
	{0x403c020c, 0x14141400U},
#else
	{0x403c020c, 0x00000000U},
#endif
	{0x403c0210, 0x00001f1fU},
#if (S32GEN1_DRAM_INLINE_ECC == 1)
	{0x403c0214, 0x04040404U},
	{0x403c0218, 0x04040404U},
#else
	{0x403c0214, 0x07070707U},
	{0x403c0218, 0x07070707U},
#endif
	{0x403c021c, 0x00000f0fU},
	{0x403c0220, 0x00003f3fU},
	{0x403c0224, 0x00000000U},
	{0x403c0228, 0x00000000U},
	{0x403c022c, 0x00000000U},
	{0x403c0240, 0x04000400U},
	{0x403c0244, 0x00000000U},
	{0x403c0250, 0x00001f01U},
	{0x403c0254, 0x00000000U},
	{0x403c025c, 0x10002200U},
	{0x403c0264, 0x90000096U},
	{0x403c026c, 0x1000012cU},
	{0x403c0300, 0x00000000U},
	{0x403c0304, 0x00000000U},
	{0x403c030c, 0x00000000U},
	{0x403c0320, 0x00000001U},
	{0x403c0330, 0x00b03033U},
	{0x403c0334, 0x00000000U},
	{0x403c036c, 0x00000011U},
	{0x403c0374, 0x00000000U},
	{0x403c037c, 0x00000000U},
	{0x403c0384, 0x00000000U},
	{0x403c03c0, 0x00000003U},
	{0x403c03e0, 0x00010001U},
	{0x403c03e8, 0x00010001U},
	{0x403c0400, 0x00000011U},
	{0x403c0404, 0x00005193U},
	{0x403c0408, 0x00001196U},
	{0x403c0490, 0x00000000U},
	{0x403c0494, 0x02000e00U},
	{0x403c0498, 0x003c0200U},
	{0x403c049c, 0x00000e00U},
	{0x403c04a0, 0x003c0200U},
	{0x403c04b4, 0x00015193U},
	{0x403c04b8, 0x00001196U},
	{0x403c0540, 0x00000000U},
	{0x403c0544, 0x02000e00U},
	{0x403c0548, 0x003c0200U},
	{0x403c054c, 0x00000e00U},
	{0x403c0550, 0x003c0200U},
	{0x403c0564, 0x00015193U},
	{0x403c0568, 0x00001196U},
	{0x403c05f0, 0x00000000U},
	{0x403c05f4, 0x02000e00U},
	{0x403c05f8, 0x003c0200U},
	{0x403c05fc, 0x00000e00U},
	{0x403c0600, 0x003c0200U},
	{0x403c0f24, 0x0000ff10U},
	{0x403c0f2c, 0x00000000U},
};

size_t ddrc_cfg_size = ARRAY_SIZE(ddrc_cfg);
