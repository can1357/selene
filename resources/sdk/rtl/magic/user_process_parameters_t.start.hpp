#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_USER_PROCESS_PARAMETERS.MaximumLength", maximum_length, 0x0, 0x20, true, 0x726d6e8e4d40874e)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_USER_PROCESS_PARAMETERS.Length", length, 0x20, 0x20, true, 0xba98973eb3791287)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_USER_PROCESS_PARAMETERS.Flags", flags, 0x40, 0x20, true, 0x9a8dc36d5d41d6e9)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_USER_PROCESS_PARAMETERS.DebugFlags", debug_flags, 0x60, 0x20, true, 0xc6a033de69c3149e)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_USER_PROCESS_PARAMETERS.ConsoleHandle", console_handle, 0x80, 0x40, true, 0x3bc74393c06cb160)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_USER_PROCESS_PARAMETERS.ConsoleFlags", console_flags, 0xc0, 0x20, true, 0xa314128bf319b24)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_USER_PROCESS_PARAMETERS.StandardInput", standard_input, 0x100, 0x40, true, 0xcf1b9073e3d940cf)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_USER_PROCESS_PARAMETERS.StandardOutput", standard_output, 0x140, 0x40, true, 0x957836121ff454d1)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_USER_PROCESS_PARAMETERS.StandardError", standard_error, 0x180, 0x40, true, 0xfd1a5176f4d60ebc)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::curdir_t), "_RTL_USER_PROCESS_PARAMETERS.CurrentDirectory", current_directory, 0x1c0, 0xc0, true, 0x703cd6442b05937d)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_RTL_USER_PROCESS_PARAMETERS.DllPath", dll_path, 0x280, 0x80, true, 0x5242f422414fe505)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_RTL_USER_PROCESS_PARAMETERS.ImagePathName", image_path_name, 0x300, 0x80, true, 0x8ff528d38818b4ef)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_RTL_USER_PROCESS_PARAMETERS.CommandLine", command_line, 0x380, 0x80, true, 0xb101b082a3cc964)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_USER_PROCESS_PARAMETERS.Environment", environment, 0x400, 0x40, true, 0x5a2c00e392a4ef66)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_USER_PROCESS_PARAMETERS.StartingX", starting_x, 0x440, 0x20, true, 0xa805225af5062a4)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_USER_PROCESS_PARAMETERS.StartingY", starting_y, 0x460, 0x20, true, 0xc016a23a69da7c6e)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_USER_PROCESS_PARAMETERS.CountX", count_x, 0x480, 0x20, true, 0x1fd9e7b3309b6d8e)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_USER_PROCESS_PARAMETERS.CountY", count_y, 0x4a0, 0x20, true, 0xaac8ce85ded538fc)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_USER_PROCESS_PARAMETERS.CountCharsX", count_chars_x, 0x4c0, 0x20, true, 0xd9fb2bd630a3bc89)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_USER_PROCESS_PARAMETERS.CountCharsY", count_chars_y, 0x4e0, 0x20, true, 0xc153ad9cd6b9708)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_USER_PROCESS_PARAMETERS.FillAttribute", fill_attribute, 0x500, 0x20, true, 0x49ceded68b9606e5)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_USER_PROCESS_PARAMETERS.WindowFlags", window_flags, 0x520, 0x20, true, 0xe8da5ff6870afbb9)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_USER_PROCESS_PARAMETERS.ShowWindowFlags", show_window_flags, 0x540, 0x20, true, 0x496a99c836663f32)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_RTL_USER_PROCESS_PARAMETERS.WindowTitle", window_title, 0x580, 0x80, true, 0x2ff4895d7c6643f9)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_RTL_USER_PROCESS_PARAMETERS.DesktopInfo", desktop_info, 0x600, 0x80, true, 0x2a6dec39fd700065)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_RTL_USER_PROCESS_PARAMETERS.ShellInfo", shell_info, 0x680, 0x80, true, 0x818ba44aa3757c03)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_RTL_USER_PROCESS_PARAMETERS.RuntimeData", runtime_data, 0x700, 0x80, true, 0xfa88c11c4d8499a5)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_USER_PROCESS_PARAMETERS.EnvironmentSize", environment_size, 0x1f80, 0x40, true, 0x8fd4ef0a392036db)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_USER_PROCESS_PARAMETERS.EnvironmentVersion", environment_version, 0x1fc0, 0x40, true, 0x83a4b1c1dce6edf7)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_USER_PROCESS_PARAMETERS.PackageDependencyData", package_dependency_data, 0x2000, 0x40, true, 0xda77c0addd7b4b)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_USER_PROCESS_PARAMETERS.ProcessGroupId", process_group_id, 0x2040, 0x20, true, 0x883e57f4fedd53b7)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_USER_PROCESS_PARAMETERS.LoaderThreads", loader_threads, 0x2060, 0x20, true, 0xe41e9583fc5ab28b)
#define _m032 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_RTL_USER_PROCESS_PARAMETERS.RedirectionDllName", redirection_dll_name, 0x2080, 0x80, true, 0x778f6768be5cdc35)
#define _m033 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_RTL_USER_PROCESS_PARAMETERS.HeapPartitionName", heap_partition_name, 0x2100, 0x80, true, 0x533e5c332b191c99)
#define _m034 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::variant<uint64_t, uint64_t*>), "_RTL_USER_PROCESS_PARAMETERS.DefaultThreadpoolCpuSetMasks", default_threadpool_cpu_set_masks, 0x2180, 0x40, true, 0x9da00de386e1298a)
#define _m035 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_USER_PROCESS_PARAMETERS.DefaultThreadpoolCpuSetMaskCount", default_threadpool_cpu_set_mask_count, 0x21c0, 0x20, true, 0x8db8c515b407a60a)
#define _m036 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct rtl::drive_letter_curdir_t, 32>), "_RTL_USER_PROCESS_PARAMETERS.CurrentDirectores", current_directores, 0x780, 0x0, true, 0xa9ee4ab52c61cf1c)
#define _m037 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_USER_PROCESS_PARAMETERS.DefaultThreadpoolThreadMaximum", default_threadpool_thread_maximum, 0x21e0, 0x20, true, 0x72eb9d0d8756c24b)
#define _m038 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct rtl::drive_letter_curdir_t, 32>), "_RTL_USER_PROCESS_PARAMETERS.CurrentDirectories", current_directories, 0x780, 0x0, true, 0xabc4e0087f72f272)
#define _m039 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_USER_PROCESS_PARAMETERS.HeapMemoryTypeMask", heap_memory_type_mask, 0x2200, 0x20, true, 0x3c3b45c7c5d1e06c)
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
#endif