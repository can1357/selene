#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PS_CREATE_INFO.Size", size, 0x0, 0x40, true, 0xe3adf51ccaef4793)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum ps::create_state_t), "_PS_CREATE_INFO.State", state, 0x40, 0x20, true, 0xea631090325af337)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PS_CREATE_INFO.InitState.InitFlags", init_flags, 0x0, 0x20, true, 0xafda939d3f6b42a)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PS_CREATE_INFO.InitState.WriteOutputOnExit", write_output_on_exit, 0x0, 0x1, true, 0xc79148a8cee49d53, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PS_CREATE_INFO.InitState.DetectManifest", detect_manifest, 0x1, 0x1, true, 0xfc7541cb841ae715, 1, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PS_CREATE_INFO.InitState.IFEODoNotPropagateKeyState", ifeo_do_not_propagate_key_state, 0x3, 0x1, true, 0x9fd0c7788c46b665, 1, uint8_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_PS_CREATE_INFO.InitState.ProhibitedImageCharacteristics", prohibited_image_characteristics, 0x10, 0x10, true, 0x391db0f4927eb3c0, 16, uint16_t)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PS_CREATE_INFO.InitState.AdditionalFileAccess", additional_file_access, 0x20, 0x20, true, 0xa4e3c4f5db4211d0)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PS_CREATE_INFO.InitState.IFEOSkipDebugger", ifeo_skip_debugger, 0x2, 0x1, true, 0xe1379246b542c51b, 1, uint8_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PS_CREATE_INFO.InitState.IFEOSkipRedirects", ifeo_skip_redirects, 0x2, 0x1, true, 0x3b6569128259883f, 1, uint8_t)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_init_state_t), "_PS_CREATE_INFO.InitState", init_state, 0x80, 0x40, true, 0x43127bdccd37b3b2)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PS_CREATE_INFO.FailSection.FileHandle", file_handle, 0x0, 0x40, true, 0xe05ae8aa40312be4)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_fail_section_t), "_PS_CREATE_INFO.FailSection", fail_section, 0x80, 0x40, true, 0xc8d9a255ce3d5f03)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PS_CREATE_INFO.ExeFormat.DllCharacteristics", dll_characteristics, 0x0, 0x10, true, 0x3261c12c6c38fae3)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u10_exe_format_t), "_PS_CREATE_INFO.ExeFormat", exe_format, 0x80, 0x10, true, 0x58b70a1f1c55ee8c)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PS_CREATE_INFO.ExeName.IFEOKey", ifeo_key, 0x0, 0x40, true, 0x26078c37721fb8ea)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u15_exe_name_t), "_PS_CREATE_INFO.ExeName", exe_name, 0x80, 0x40, true, 0x5f5618e573b73d00)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PS_CREATE_INFO.SuccessState.OutputFlags", output_flags, 0x0, 0x20, true, 0xbf82bdc7b660078e)
#define _m18 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PS_CREATE_INFO.SuccessState.ProtectedProcess", protected_process, 0x0, 0x1, true, 0x59e22ac0db00afe2, 1, uint8_t)
#define _m19 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PS_CREATE_INFO.SuccessState.AddressSpaceOverride", address_space_override, 0x1, 0x1, true, 0xfbcb41d8cdedfa9c, 1, uint8_t)
#define _m20 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PS_CREATE_INFO.SuccessState.DevOverrideEnabled", dev_override_enabled, 0x2, 0x1, true, 0x52fd05037820ef8, 1, uint8_t)
#define _m21 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PS_CREATE_INFO.SuccessState.ManifestDetected", manifest_detected, 0x3, 0x1, true, 0x7282ece4ff50907f, 1, uint8_t)
#define _m22 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PS_CREATE_INFO.SuccessState.ProtectedProcessLight", protected_process_light, 0x4, 0x1, true, 0x33a028be00ef8651, 1, uint8_t)
#define _m23 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PS_CREATE_INFO.SuccessState.FileHandle", file_handle, 0x40, 0x40, true, 0xd6b2442e522d0a79)
#define _m24 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PS_CREATE_INFO.SuccessState.SectionHandle", section_handle, 0x80, 0x40, true, 0xe7ff598683238888)
#define _m25 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PS_CREATE_INFO.SuccessState.UserProcessParametersNative", user_process_parameters_native, 0xc0, 0x40, true, 0x2ecaca939286ce9a)
#define _m26 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PS_CREATE_INFO.SuccessState.UserProcessParametersWow64", user_process_parameters_wow64, 0x100, 0x20, true, 0xcb60a7fc4109c0a5)
#define _m27 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PS_CREATE_INFO.SuccessState.CurrentParameterFlags", current_parameter_flags, 0x120, 0x20, true, 0xfeb9327ab752459e)
#define _m28 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PS_CREATE_INFO.SuccessState.PebAddressNative", peb_address_native, 0x140, 0x40, true, 0x7700af9b76d35ed)
#define _m29 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PS_CREATE_INFO.SuccessState.PebAddressWow64", peb_address_wow64, 0x180, 0x20, true, 0x9ae65f98e68ffc1e)
#define _m30 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_PS_CREATE_INFO.SuccessState.ManifestAddress", manifest_address, 0x1c0, 0x40, true, 0x545420bcd918d765)
#define _m31 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PS_CREATE_INFO.SuccessState.ManifestSize", manifest_size, 0x200, 0x20, true, 0x7f5870bb72a30a3)
#define _m32 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u20_success_state_t), "_PS_CREATE_INFO.SuccessState", success_state, 0x80, 0x40, true, 0x4a07e108587390af)
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
#define _m29
#define _m30
#define _m31
#define _m32
#endif