#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_VXD_HEADER.e32_magic", e32_magic, 0x0, 0x10, true, 0x9e9fec9975de99ae)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IMAGE_VXD_HEADER.e32_border", e32_border, 0x10, 0x8, true, 0xa4acd798f1fb2b6b)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IMAGE_VXD_HEADER.e32_worder", e32_worder, 0x18, 0x8, true, 0xfc0fd7bde6462c82)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_level", e32_level, 0x20, 0x20, true, 0x5ad8db9e0af8e445)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_VXD_HEADER.e32_cpu", e32_cpu, 0x40, 0x10, true, 0x15f028fc0a475201)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_VXD_HEADER.e32_os", e32_os, 0x50, 0x10, true, 0x869fb4e1e3c6a990)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_ver", e32_ver, 0x60, 0x20, true, 0xf8ccd53d2932be83)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_mflags", e32_mflags, 0x80, 0x20, true, 0xca128424d3006c16)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_mpages", e32_mpages, 0xa0, 0x20, true, 0xeaf2ffb93694cf5c)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_startobj", e32_startobj, 0xc0, 0x20, true, 0x317ee7f9aa4fdf19)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_eip", e32_eip, 0xe0, 0x20, true, 0x7cdd0f010e3f86cd)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_stackobj", e32_stackobj, 0x100, 0x20, true, 0x13197f635a7c95b1)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_esp", e32_esp, 0x120, 0x20, true, 0xd98e851a9609ccf1)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_pagesize", e32_pagesize, 0x140, 0x20, true, 0xfe2a7061e9e20a53)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_lastpagesize", e32_lastpagesize, 0x160, 0x20, true, 0xc5bbbaa301ba5203)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_fixupsize", e32_fixupsize, 0x180, 0x20, true, 0x86cb5ec743b76b99)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_fixupsum", e32_fixupsum, 0x1a0, 0x20, true, 0xb0808be75f4a74f2)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_ldrsize", e32_ldrsize, 0x1c0, 0x20, true, 0xa8993ed62fb07420)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_ldrsum", e32_ldrsum, 0x1e0, 0x20, true, 0xbfe1e0aa4adc012c)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_objtab", e32_objtab, 0x200, 0x20, true, 0x4f99e2db2864c02b)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_objcnt", e32_objcnt, 0x220, 0x20, true, 0xc4ab838ad5f1c32a)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_objmap", e32_objmap, 0x240, 0x20, true, 0x241ab555d2e1f414)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_itermap", e32_itermap, 0x260, 0x20, true, 0x55fd51564b1c9fd5)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_rsrctab", e32_rsrctab, 0x280, 0x20, true, 0xf7c227cfafa9906)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_rsrccnt", e32_rsrccnt, 0x2a0, 0x20, true, 0x690fa49411321fe)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_restab", e32_restab, 0x2c0, 0x20, true, 0x99f4bc47584eff50)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_enttab", e32_enttab, 0x2e0, 0x20, true, 0xb256102fae532103)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_dirtab", e32_dirtab, 0x300, 0x20, true, 0x649153f2c3fcc4f9)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_dircnt", e32_dircnt, 0x320, 0x20, true, 0x6766c70d7ec690d)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_fpagetab", e32_fpagetab, 0x340, 0x20, true, 0x17c5c93375ce9a2f)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_frectab", e32_frectab, 0x360, 0x20, true, 0x2a98639a8eb5c8e4)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_impmod", e32_impmod, 0x380, 0x20, true, 0xb09624b0af742257)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_impmodcnt", e32_impmodcnt, 0x3a0, 0x20, true, 0x4cb78f899f4d7713)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_impproc", e32_impproc, 0x3c0, 0x20, true, 0xea86140b522e195e)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_pagesum", e32_pagesum, 0x3e0, 0x20, true, 0xb0d3828b9e10328a)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_datapage", e32_datapage, 0x400, 0x20, true, 0x94a16570ffa5999)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_preload", e32_preload, 0x420, 0x20, true, 0xeadc09bdf9494de9)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_nrestab", e32_nrestab, 0x440, 0x20, true, 0x176ce21d4daff123)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_cbnrestab", e32_cbnrestab, 0x460, 0x20, true, 0x4b4f2f8bd1e14f74)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_nressum", e32_nressum, 0x480, 0x20, true, 0xb8ba0587e8c1f9c0)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_autodata", e32_autodata, 0x4a0, 0x20, true, 0x9e1b479b9ce56777)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_debuginfo", e32_debuginfo, 0x4c0, 0x20, true, 0x13367258b9167585)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_debuglen", e32_debuglen, 0x4e0, 0x20, true, 0x922a90257bfaf407)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_instpreload", e32_instpreload, 0x500, 0x20, true, 0x3fed7f275635294a)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_instdemand", e32_instdemand, 0x520, 0x20, true, 0x6686d6a6e7da9ceb)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_heapsize", e32_heapsize, 0x540, 0x20, true, 0x879361a9250e82f2)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 12>), "_IMAGE_VXD_HEADER.e32_res3", e32_res3, 0x560, 0x60, true, 0x82b04a93ed13055a)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_winresoff", e32_winresoff, 0x5c0, 0x20, true, 0x3bc346c178f416d5)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_VXD_HEADER.e32_winreslen", e32_winreslen, 0x5e0, 0x20, true, 0xfbd1108777a36f43)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_VXD_HEADER.e32_devid", e32_devid, 0x600, 0x10, true, 0x537c1f9a862df517)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_VXD_HEADER.e32_ddkver", e32_ddkver, 0x610, 0x10, true, 0x54b5d5afa20e98b6)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#define _m047
#define _m048
#define _m049
#define _m050
#endif