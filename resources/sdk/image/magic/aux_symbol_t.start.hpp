#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_AUX_SYMBOL.Sym.TagIndex", tag_index, 0x0, 0x20, true, 0x2575b05ebac9fe05)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_AUX_SYMBOL.Sym.Misc.LnSz.Linenumber", linenumber, 0x0, 0x10, true, 0xc8e72747293b8bee)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_AUX_SYMBOL.Sym.Misc.LnSz.Size", size, 0x10, 0x10, true, 0x554aad28d4e6b424)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u8_ln_sz_t), "_IMAGE_AUX_SYMBOL.Sym.Misc.LnSz", ln_sz, 0x0, 0x20, true, 0xdce8f7e8a4691823)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_AUX_SYMBOL.Sym.Misc.TotalSize", total_size, 0x0, 0x20, true, 0x1dab370e15defce)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_misc_t), "_IMAGE_AUX_SYMBOL.Sym.Misc", misc, 0x20, 0x20, true, 0x75e70dc70dd28141)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_AUX_SYMBOL.Sym.FcnAry.Function.PointerToLinenumber", pointer_to_linenumber, 0x0, 0x20, true, 0x5581687bb8cf277c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_AUX_SYMBOL.Sym.FcnAry.Function.PointerToNextFunction", pointer_to_next_function, 0x20, 0x20, true, 0xdebcf49019203bb1)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u16_function_t), "_IMAGE_AUX_SYMBOL.Sym.FcnAry.Function", function, 0x0, 0x40, true, 0x10e89b35a3657f96)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 4>), "_IMAGE_AUX_SYMBOL.Sym.FcnAry.Array.Dimension", dimension, 0x0, 0x40, true, 0x2c6751b6d2e347d5)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u20_array_t), "_IMAGE_AUX_SYMBOL.Sym.FcnAry.Array", array, 0x0, 0x40, true, 0x8e5a48297f610e64)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u12_fcn_ary_t), "_IMAGE_AUX_SYMBOL.Sym.FcnAry", fcn_ary, 0x40, 0x40, true, 0xac3e9681dc52b256)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_AUX_SYMBOL.Sym.TvIndex", tv_index, 0x80, 0x10, true, 0x342968afa63feabe)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_sym_t), "_IMAGE_AUX_SYMBOL.Sym", sym, 0x0, 0x90, true, 0xe4accedd3058a214)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 18>), "_IMAGE_AUX_SYMBOL.File.Name", name, 0x0, 0x90, true, 0x11ae4f7a742c5bbe)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u24_file_t), "_IMAGE_AUX_SYMBOL.File", file, 0x0, 0x90, true, 0xcf71367fae6ae3f2)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_AUX_SYMBOL.Section.Length", length, 0x0, 0x20, true, 0xbe64b341cf9419fe)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_AUX_SYMBOL.Section.NumberOfRelocations", number_of_relocations, 0x20, 0x10, true, 0x20181c07e37b7777)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_IMAGE_AUX_SYMBOL.Section.NumberOfLinenumbers", number_of_linenumbers, 0x30, 0x10, true, 0x6a4a5306aa0c6510)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_AUX_SYMBOL.Section.CheckSum", check_sum, 0x40, 0x20, true, 0x7f3e9bbca59e21cb)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_IMAGE_AUX_SYMBOL.Section.Number", number, 0x60, 0x10, true, 0x9f67381c5c6ff436)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IMAGE_AUX_SYMBOL.Section.Selection", selection, 0x70, 0x8, true, 0x42bad6e2b3004672)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IMAGE_AUX_SYMBOL.Section.bReserved", b_reserved, 0x78, 0x8, true, 0xa1bb38fbe52c61af)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_IMAGE_AUX_SYMBOL.Section.HighNumber", high_number, 0x80, 0x10, true, 0x5098543e06f9984f)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u28_section_t), "_IMAGE_AUX_SYMBOL.Section", section, 0x0, 0x90, true, 0xac35bed0ed204a8d)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct image::aux_symbol_token_def_t), "_IMAGE_AUX_SYMBOL.TokenDef", token_def, 0x0, 0x90, true, 0x86b57a3a39057351)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_AUX_SYMBOL.CRC.crc", crc, 0x0, 0x20, true, 0xf769af1bfd735942)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 14>), "_IMAGE_AUX_SYMBOL.CRC.rgbReserved", rgb_reserved, 0x20, 0x70, true, 0xaa0a25a8b45ba3af)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u32_crc_t), "_IMAGE_AUX_SYMBOL.CRC", crc, 0x0, 0x90, true, 0x8cf83371916e4a6c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#define _m24
#define _m25
#define _m26
#define _m27
#define _m28
#endif