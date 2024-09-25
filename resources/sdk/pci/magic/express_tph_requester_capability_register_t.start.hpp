#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_TPH_REQUESTER_CAPABILITY_REGISTER.NoStModeSupported", no_st_mode_supported, 0x0, 0x1, true, 0xae79d4e8af4b2775, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_TPH_REQUESTER_CAPABILITY_REGISTER.InteruptVectorModeSupported", interupt_vector_mode_supported, 0x1, 0x1, true, 0xb64aa71ba76505d7, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_TPH_REQUESTER_CAPABILITY_REGISTER.DeviceSpecificModeSupported", device_specific_mode_supported, 0x2, 0x1, true, 0xb11e1bcd164ea33b, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PCI_EXPRESS_TPH_REQUESTER_CAPABILITY_REGISTER.Rsvd", rsvd, 0x3, 0x5, true, 0x456a251f2b868702, 5, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_TPH_REQUESTER_CAPABILITY_REGISTER.ExtendedTPHRequesterSupported", extended_tph_requester_supported, 0x8, 0x1, true, 0xaeab27867b410f69, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_EXPRESS_TPH_REQUESTER_CAPABILITY_REGISTER.StTableLocation", st_table_location, 0x9, 0x2, true, 0x714969fda757931, 2, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PCI_EXPRESS_TPH_REQUESTER_CAPABILITY_REGISTER.Rsvd2", rsvd2, 0xb, 0x5, true, 0x9e60f92c8799d486, 5, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint11_t), "_PCI_EXPRESS_TPH_REQUESTER_CAPABILITY_REGISTER.StTableSize", st_table_size, 0x10, 0xb, true, 0x62d6d077a32dc2c, 11, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PCI_EXPRESS_TPH_REQUESTER_CAPABILITY_REGISTER.Rsvd3", rsvd3, 0x1b, 0x5, true, 0xbc42856128bc2d95, 5, uint32_t)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_TPH_REQUESTER_CAPABILITY_REGISTER.AsULONG", as_ulong, 0x0, 0x20, true, 0x8dcc71a215b9215c)
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
#endif