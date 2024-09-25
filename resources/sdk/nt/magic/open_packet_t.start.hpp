#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_OPEN_PACKET.Type", type, 0x0, 0x10, true, 0xea11662a70a926b6)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_OPEN_PACKET.Size", size, 0x10, 0x10, true, 0x33fc9ba109165c8d)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_OPEN_PACKET.FileObject", file_object, 0x40, 0x40, true, 0xad393a729661e229)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_OPEN_PACKET.FinalStatus", final_status, 0x80, 0x20, true, 0xbcc3753cb865f0ab)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_OPEN_PACKET.Information", information, 0xc0, 0x40, true, 0x8ba3b3a08b2de74b)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OPEN_PACKET.ParseCheck", parse_check, 0x100, 0x20, true, 0xd83e786a0a830c7a)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_OPEN_PACKET.RelatedFileObject", related_file_object, 0x140, 0x40, true, 0xfa030baa534b6881)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_OPEN_PACKET.ReferencedDeviceObject", referenced_device_object, 0x140, 0x40, true, 0xfc3b99e70504bed1)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::object_attributes_t*), "_OPEN_PACKET.OriginalAttributes", original_attributes, 0x180, 0x40, true, 0xbac799c82ed69c6a)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_OPEN_PACKET.AllocationSize", allocation_size, 0x1c0, 0x40, true, 0x5e672bd66a031838)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OPEN_PACKET.CreateOptions", create_options, 0x200, 0x20, true, 0x5c48dc7ef5e58b0e)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OPEN_PACKET.FileAttributes", file_attributes, 0x220, 0x10, true, 0x641f583b88b2f9c3)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_OPEN_PACKET.ShareAccess", share_access, 0x230, 0x10, true, 0x9bc42da7c5f53b75)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_OPEN_PACKET.EaBuffer", ea_buffer, 0x240, 0x40, true, 0x9f02a9e797332c4)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OPEN_PACKET.EaLength", ea_length, 0x280, 0x20, true, 0xe34b6ff00e987298)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OPEN_PACKET.Options", options, 0x2a0, 0x20, true, 0x9d75e371f08385eb)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OPEN_PACKET.Disposition", disposition, 0x2c0, 0x20, true, 0x8465bdee535cbdcf)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_basic_information_t*), "_OPEN_PACKET.BasicInformation", basic_information, 0x300, 0x40, true, 0x74525b5829384222)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_network_open_information_t*), "_OPEN_PACKET.NetworkInformation", network_information, 0x340, 0x40, true, 0x1a9502b94867e723)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::create_file_type_t), "_OPEN_PACKET.CreateFileType", create_file_type, 0x3c0, 0x20, true, 0xf7b0e1abce4d5ada)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_OPEN_PACKET.MailslotOrPipeParameters", mailslot_or_pipe_parameters, 0x400, 0x40, true, 0xa2e08f842e564a41)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OPEN_PACKET.Override", override, 0x440, 0x8, true, 0x89850ee1f24b8421)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OPEN_PACKET.QueryOnly", query_only, 0x448, 0x8, true, 0xb9af108263d0418e)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OPEN_PACKET.DeleteOnly", delete_only, 0x450, 0x8, true, 0x414e397e5a12c4c2)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OPEN_PACKET.FullAttributes", full_attributes, 0x458, 0x8, true, 0x3f28293de7bfaf28)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::dummy_file_object_t*), "_OPEN_PACKET.LocalFileObject", local_file_object, 0x480, 0x40, true, 0x1f12c9f674e3e1b4)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OPEN_PACKET.InternalFlags", internal_flags, 0x4c0, 0x20, true, 0x32712e81a8c95bde)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_OPEN_PACKET.AccessMode", access_mode, 0x4e0, 0x8, true, 0x62d9895374bfb012)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::driver_create_context_t), "_OPEN_PACKET.DriverCreateContext", driver_create_context, 0x500, 0x40, true, 0xd9e05892154d950d)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_OPEN_PACKET.FileInformation", file_information, 0x380, 0x40, true, 0xec8f4dce6979985d)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::file_information_class_t), "_OPEN_PACKET.FileInformationClass", file_information_class, 0x640, 0x20, true, 0x862e086ec02549ba)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_OPEN_PACKET.FileInformationLength", file_information_length, 0x660, 0x20, true, 0x77f4d87620f5c81b)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OPEN_PACKET.FilterQuery", filter_query, 0x680, 0x8, true, 0x65835002028bb09d)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_OPEN_PACKET.ExtendedCreateFlags", extended_create_flags, 0x0, 0x0, false, 0xdfc98c617cb931c0)
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
#endif