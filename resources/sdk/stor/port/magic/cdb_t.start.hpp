#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::cdb6generic_t), "_CDB.CDB6GENERIC", cdb6generic, 0x0, 0x30, true, 0xdc02411bd35c89b8)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::cdb6readwrite_t), "_CDB.CDB6READWRITE", cdb6readwrite, 0x0, 0x30, true, 0x98d09e2dffe056a1)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::cdb6inquiry_t), "_CDB.CDB6INQUIRY", cdb6inquiry, 0x0, 0x30, true, 0x13f04d1c78efecc9)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::cdb6inquiry3_t), "_CDB.CDB6INQUIRY3", cdb6inquiry3, 0x0, 0x30, true, 0x653facd36804ccf7)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::cdb6verify_t), "_CDB.CDB6VERIFY", cdb6verify, 0x0, 0x30, true, 0xb2bb2c78e6477038)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::receive_diagnostic_t), "_CDB.RECEIVE_DIAGNOSTIC", receive_diagnostic, 0x0, 0x30, true, 0xcf80cea0910f3e3e)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::send_diagnostic_t), "_CDB.SEND_DIAGNOSTIC", send_diagnostic, 0x0, 0x30, true, 0x18db791930c67175)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::cdb6format_t), "_CDB.CDB6FORMAT", cdb6format, 0x0, 0x30, true, 0xd7976050414f65f1)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::cdb10_t), "_CDB.CDB10", cdb10, 0x0, 0x50, true, 0x317c3e61e0c6f053)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::cdb12_t), "_CDB.CDB12", cdb12, 0x0, 0x60, true, 0xdf1df71e8aaa8fa7)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::cdb16_t), "_CDB.CDB16", cdb16, 0x0, 0x80, true, 0xddb25856ddff3f97)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct sec::protocol_in_t), "_CDB.SECURITY_PROTOCOL_IN", security_protocol_in, 0x0, 0x60, true, 0x7b5d1fab8a9f6d3c)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct sec::protocol_out_t), "_CDB.SECURITY_PROTOCOL_OUT", security_protocol_out, 0x0, 0x60, true, 0x52f8d50e3d1478e8)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::unmap_t), "_CDB.UNMAP", unmap, 0x0, 0x50, true, 0x10f804422b01d7f7)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::sanitize_t), "_CDB.SANITIZE", sanitize, 0x0, 0x50, true, 0x7445c06063a172e5)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::pause_resume_t), "_CDB.PAUSE_RESUME", pause_resume, 0x0, 0x50, true, 0xb7b9aa89da0b412)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::read_toc_t), "_CDB.READ_TOC", read_toc, 0x0, 0x50, true, 0x7260380f0c72d0ac)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::read_disk_information_t), "_CDB.READ_DISK_INFORMATION", read_disk_information, 0x0, 0x50, true, 0xd7aabf5e91f19d1b)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::read_disk_information_t), "_CDB.READ_DISC_INFORMATION", read_disc_information, 0x0, 0x50, true, 0xd679ac10d8b38464)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::read_track_information_t), "_CDB.READ_TRACK_INFORMATION", read_track_information, 0x0, 0x50, true, 0x2fd52ccb9322866)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::reserve_track_rzone_t), "_CDB.RESERVE_TRACK_RZONE", reserve_track_rzone, 0x0, 0x50, true, 0xf82d194bed31da30)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::send_opc_information_t), "_CDB.SEND_OPC_INFORMATION", send_opc_information, 0x0, 0x50, true, 0x4a696e62780686d8)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::repair_track_t), "_CDB.REPAIR_TRACK", repair_track, 0x0, 0x50, true, 0x8f66511375e94122)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::close_track_t), "_CDB.CLOSE_TRACK", close_track, 0x0, 0x50, true, 0x20b3f6a341b121b7)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::read_buffer_capacity_t), "_CDB.READ_BUFFER_CAPACITY", read_buffer_capacity, 0x0, 0x50, true, 0x13cc8233442f1a6e)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::send_cue_sheet_t), "_CDB.SEND_CUE_SHEET", send_cue_sheet, 0x0, 0x50, true, 0x5ba354d87a1d53d1)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::read_header_t), "_CDB.READ_HEADER", read_header, 0x0, 0x50, true, 0xea3b4c7c98f7e054)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::play_audio_t), "_CDB.PLAY_AUDIO", play_audio, 0x0, 0x50, true, 0x3c230d3f4d2682b2)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::play_audio_msf_t), "_CDB.PLAY_AUDIO_MSF", play_audio_msf, 0x0, 0x50, true, 0xfeabae7450638f06)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::blank_media_t), "_CDB.BLANK_MEDIA", blank_media, 0x0, 0x60, true, 0xb2e93e4a8e9ed44b)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::play_cd_t), "_CDB.PLAY_CD", play_cd, 0x0, 0x60, true, 0x16b60993d021abcf)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::scan_cd_t), "_CDB.SCAN_CD", scan_cd, 0x0, 0x60, true, 0x30667045f20f854c)
#define _m032 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::stop_play_scan_t), "_CDB.STOP_PLAY_SCAN", stop_play_scan, 0x0, 0x50, true, 0x5a8e0de476b1126d)
#define _m033 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::subchannel_t), "_CDB.SUBCHANNEL", subchannel, 0x0, 0x50, true, 0x4f360326f2e6e6aa)
#define _m034 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::read_cd_t), "_CDB.READ_CD", read_cd, 0x0, 0x60, true, 0x51f5caf90d7092f1)
#define _m035 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::read_cd_msf_t), "_CDB.READ_CD_MSF", read_cd_msf, 0x0, 0x60, true, 0x5314db17629d843d)
#define _m036 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::plxtr_read_cdda_t), "_CDB.PLXTR_READ_CDDA", plxtr_read_cdda, 0x0, 0x60, true, 0xecc1592658c25931)
#define _m037 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::nec_read_cdda_t), "_CDB.NEC_READ_CDDA", nec_read_cdda, 0x0, 0x50, true, 0x128fc9eebabae3e7)
#define _m038 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::mode_sense_t), "_CDB.MODE_SENSE", mode_sense, 0x0, 0x30, true, 0xe1451272518a257b)
#define _m039 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::mode_sense10_t), "_CDB.MODE_SENSE10", mode_sense10, 0x0, 0x50, true, 0x820a746a604754a0)
#define _m040 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::mode_select_t), "_CDB.MODE_SELECT", mode_select, 0x0, 0x30, true, 0x1ed07850b07efbf8)
#define _m041 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::mode_select10_t), "_CDB.MODE_SELECT10", mode_select10, 0x0, 0x50, true, 0x29185ff0501df70d)
#define _m042 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::locate_t), "_CDB.LOCATE", locate, 0x0, 0x50, true, 0xbd9a0728f6073761)
#define _m043 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::logsense_t), "_CDB.LOGSENSE", logsense, 0x0, 0x50, true, 0x999097ac78c2abf9)
#define _m044 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::logselect_t), "_CDB.LOGSELECT", logselect, 0x0, 0x50, true, 0x446982b35bcb1a93)
#define _m045 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::print_t), "_CDB.PRINT", print, 0x0, 0x30, true, 0xabdd3ec018293f9f)
#define _m046 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::seek_t), "_CDB.SEEK", seek, 0x0, 0x50, true, 0x9590665b94309b5f)
#define _m047 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::erase_t), "_CDB.ERASE", erase, 0x0, 0x30, true, 0x524b8af499e3e186)
#define _m048 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::start_stop_t), "_CDB.START_STOP", start_stop, 0x0, 0x30, true, 0x3bb67e1cc85ed09c)
#define _m049 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::media_removal_t), "_CDB.MEDIA_REMOVAL", media_removal, 0x0, 0x30, true, 0x44e7d4be09de2b76)
#define _m050 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::seek_block_t), "_CDB.SEEK_BLOCK", seek_block, 0x0, 0x30, true, 0xedd26e77424493c3)
#define _m051 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::request_block_address_t), "_CDB.REQUEST_BLOCK_ADDRESS", request_block_address, 0x0, 0x30, true, 0x3c168b273b15c2e0)
#define _m052 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::partition_t), "_CDB.PARTITION", partition, 0x0, 0x30, true, 0x9f616132086429d7)
#define _m053 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::write_tape_marks_t), "_CDB.WRITE_TAPE_MARKS", write_tape_marks, 0x0, 0x30, true, 0xec18e6e34411c41d)
#define _m054 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::space_tape_marks_t), "_CDB.SPACE_TAPE_MARKS", space_tape_marks, 0x0, 0x30, true, 0x7398d0a84552aa87)
#define _m055 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::read_position_t), "_CDB.READ_POSITION", read_position, 0x0, 0x50, true, 0x1a202baeae8c2515)
#define _m056 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::cdb6readwritetape_t), "_CDB.CDB6READWRITETAPE", cdb6readwritetape, 0x0, 0x30, true, 0x1df38feab7ee0cb0)
#define _m057 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::init_element_status_t), "_CDB.INIT_ELEMENT_STATUS", init_element_status, 0x0, 0x30, true, 0x7f1795f4cc6b9942)
#define _m058 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::initialize_element_range_t), "_CDB.INITIALIZE_ELEMENT_RANGE", initialize_element_range, 0x0, 0x50, true, 0x94293b22203e2e09)
#define _m059 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::position_to_element_t), "_CDB.POSITION_TO_ELEMENT", position_to_element, 0x0, 0x50, true, 0xe014a3d20062bca2)
#define _m060 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::move_medium_t), "_CDB.MOVE_MEDIUM", move_medium, 0x0, 0x60, true, 0x6ea4fce544eedb7d)
#define _m061 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::exchange_medium_t), "_CDB.EXCHANGE_MEDIUM", exchange_medium, 0x0, 0x60, true, 0xef9bb56a4fc45311)
#define _m062 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::read_element_status_t), "_CDB.READ_ELEMENT_STATUS", read_element_status, 0x0, 0x60, true, 0x5cd5fcb130b45cd6)
#define _m063 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::send_volume_tag_t), "_CDB.SEND_VOLUME_TAG", send_volume_tag, 0x0, 0x60, true, 0x14a8c90de4b705d0)
#define _m064 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(request_volume_element_address_t ), "_CDB.REQUEST_VOLUME_ELEMENT_ADDRESS", request_volume_element_address, 0x0, 0x60, true, 0x62fc939949aae212)
#define _m065 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::load_unload_t), "_CDB.LOAD_UNLOAD", load_unload, 0x0, 0x60, true, 0x63ea05a37d586271)
#define _m066 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::mech_status_t), "_CDB.MECH_STATUS", mech_status, 0x0, 0x60, true, 0xe82878630d1ef41d)
#define _m067 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::synchronize_cache10_t), "_CDB.SYNCHRONIZE_CACHE10", synchronize_cache10, 0x0, 0x50, true, 0x6474d409c949bff2)
#define _m068 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(get_event_status_notification_t ), "_CDB.GET_EVENT_STATUS_NOTIFICATION", get_event_status_notification, 0x0, 0x50, true, 0x86ecf237f29869b)
#define _m069 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::get_performance_t), "_CDB.GET_PERFORMANCE", get_performance, 0x0, 0x60, true, 0x9606f96975eafce5)
#define _m070 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::read_dvd_structure_t), "_CDB.READ_DVD_STRUCTURE", read_dvd_structure, 0x0, 0x60, true, 0xf47ddca712ed1eea)
#define _m071 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::set_streaming_t), "_CDB.SET_STREAMING", set_streaming, 0x0, 0x60, true, 0xe7404067794e6836)
#define _m072 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::send_dvd_structure_t), "_CDB.SEND_DVD_STRUCTURE", send_dvd_structure, 0x0, 0x60, true, 0xfc6869efe774e36b)
#define _m073 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::send_key_t), "_CDB.SEND_KEY", send_key, 0x0, 0x60, true, 0xc4dcf6ed5f40bc0e)
#define _m074 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::report_key_t), "_CDB.REPORT_KEY", report_key, 0x0, 0x60, true, 0x196aa2098212f21c)
#define _m075 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::set_read_ahead_t), "_CDB.SET_READ_AHEAD", set_read_ahead, 0x0, 0x60, true, 0x9cd79a1d37bf933e)
#define _m076 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::read_formatted_capacities_t), "_CDB.READ_FORMATTED_CAPACITIES", read_formatted_capacities, 0x0, 0x50, true, 0x8e53318158ae1099)
#define _m077 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::report_luns_t), "_CDB.REPORT_LUNS", report_luns, 0x0, 0x60, true, 0x2df5f5b22907ea36)
#define _m078 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::persistent_reserve_in_t), "_CDB.PERSISTENT_RESERVE_IN", persistent_reserve_in, 0x0, 0x50, true, 0xdcd69d1d47bc3496)
#define _m079 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::persistent_reserve_out_t), "_CDB.PERSISTENT_RESERVE_OUT", persistent_reserve_out, 0x0, 0x50, true, 0xd4b1bd0adaaa4ea6)
#define _m080 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::get_configuration_t), "_CDB.GET_CONFIGURATION", get_configuration, 0x0, 0x50, true, 0xeb3524702d99652b)
#define _m081 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::set_cd_speed_t), "_CDB.SET_CD_SPEED", set_cd_speed, 0x0, 0x60, true, 0xdec4b4b7cc14b7aa)
#define _m082 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::read12_t), "_CDB.READ12", read12, 0x0, 0x60, true, 0xe16c9beb91a122c5)
#define _m083 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::write12_t), "_CDB.WRITE12", write12, 0x0, 0x60, true, 0xca7bd8a859dcf55b)
#define _m084 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::ata_passthrough12_t), "_CDB.ATA_PASSTHROUGH12", ata_passthrough12, 0x0, 0x60, true, 0xf68f341d207770ed)
#define _m085 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::read16_t), "_CDB.READ16", read16, 0x0, 0x80, true, 0xa34a66161c467540)
#define _m086 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::write16_t), "_CDB.WRITE16", write16, 0x0, 0x80, true, 0x5f3503a729395adc)
#define _m087 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::verify16_t), "_CDB.VERIFY16", verify16, 0x0, 0x80, true, 0xd607ec0319dae5db)
#define _m088 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::synchronize_cache16_t), "_CDB.SYNCHRONIZE_CACHE16", synchronize_cache16, 0x0, 0x80, true, 0x4f35f2507590d7da)
#define _m089 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::read_capacity16_t), "_CDB.READ_CAPACITY16", read_capacity16, 0x0, 0x80, true, 0xb93921eae779da22)
#define _m090 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::ata_passthrough16_t), "_CDB.ATA_PASSTHROUGH16", ata_passthrough16, 0x0, 0x80, true, 0x9e6d69c06c531ff9)
#define _m091 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::get_lba_status_t), "_CDB.GET_LBA_STATUS", get_lba_status, 0x0, 0x80, true, 0x4629b03b6e59fa30)
#define _m092 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::token_operation_t), "_CDB.TOKEN_OPERATION", token_operation, 0x0, 0x80, true, 0xf1ab9d7eae77cf1)
#define _m093 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::receive_token_information_t), "_CDB.RECEIVE_TOKEN_INFORMATION", receive_token_information, 0x0, 0x80, true, 0xf8cf40bcc46b388d)
#define _m094 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::write_buffer_t), "_CDB.WRITE_BUFFER", write_buffer, 0x0, 0x50, true, 0x966b10b12f9d0dd0)
#define _m095 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "_CDB.AsUlong", as_ulong, 0x0, 0x80, true, 0x7bcd6c53739f0a72)
#define _m096 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_CDB.AsByte", as_byte, 0x0, 0x80, true, 0x6aa72b21d1a7523a)
#define _m097 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::read_buffer_10_t), "_CDB.READ_BUFFER_10", read_buffer_10, 0x0, 0x50, true, 0xd9e5b9dcb88d0971)
#define _m098 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::read_buffer_16_t), "_CDB.READ_BUFFER_16", read_buffer_16, 0x0, 0x80, true, 0x7eecb4da19efdf6a)
#define _m099 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::report_timestamp_t), "_CDB.REPORT_TIMESTAMP", report_timestamp, 0x0, 0x60, true, 0x39afa7e0b0a72fb6)
#define _m100 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::set_timestamp_t), "_CDB.SET_TIMESTAMP", set_timestamp, 0x0, 0x60, true, 0xffe05d9640192eea)
#define _m101 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::close_zone_t), "_CDB.CLOSE_ZONE", close_zone, 0x0, 0x80, true, 0x6b473db1227568b0)
#define _m102 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::finish_zone_t), "_CDB.FINISH_ZONE", finish_zone, 0x0, 0x80, true, 0x3a95332e8f8c8d1c)
#define _m103 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::open_zone_t), "_CDB.OPEN_ZONE", open_zone, 0x0, 0x80, true, 0x1ec9db6335994e9b)
#define _m104 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::reset_write_pointer_t), "_CDB.RESET_WRITE_POINTER", reset_write_pointer, 0x0, 0x80, true, 0x3ad36ad4b78736a4)
#define _m105 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::report_zones_t), "_CDB.REPORT_ZONES", report_zones, 0x0, 0x80, true, 0x821997e8f9343904)
#define _m106 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::get_physical_element_status_t), "_CDB.GET_PHYSICAL_ELEMENT_STATUS", get_physical_element_status, 0x0, 0x80, true, 0x90dee7d20b39d267)
#define _m107 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct stor::port::remove_element_and_truncate_t), "_CDB.REMOVE_ELEMENT_AND_TRUNCATE", remove_element_and_truncate, 0x0, 0x80, true, 0xe2892e6a94d55859)
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
#define _m051
#define _m052
#define _m053
#define _m054
#define _m055
#define _m056
#define _m057
#define _m058
#define _m059
#define _m060
#define _m061
#define _m062
#define _m063
#define _m064
#define _m065
#define _m066
#define _m067
#define _m068
#define _m069
#define _m070
#define _m071
#define _m072
#define _m073
#define _m074
#define _m075
#define _m076
#define _m077
#define _m078
#define _m079
#define _m080
#define _m081
#define _m082
#define _m083
#define _m084
#define _m085
#define _m086
#define _m087
#define _m088
#define _m089
#define _m090
#define _m091
#define _m092
#define _m093
#define _m094
#define _m095
#define _m096
#define _m097
#define _m098
#define _m099
#define _m100
#define _m101
#define _m102
#define _m103
#define _m104
#define _m105
#define _m106
#define _m107
#endif