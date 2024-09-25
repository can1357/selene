#pragma once
#include <sdkgen/support_library.hpp>
#include "seek_t.hpp"
#include "cdb10_t.hpp"
#include "cdb12_t.hpp"
#include "cdb16_t.hpp"
#include "erase_t.hpp"
#include "print_t.hpp"
#include "unmap_t.hpp"
#include "locate_t.hpp"
#include "read12_t.hpp"
#include "read16_t.hpp"
#include "play_cd_t.hpp"
#include "read_cd_t.hpp"
#include "scan_cd_t.hpp"
#include "write12_t.hpp"
#include "write16_t.hpp"
#include "logsense_t.hpp"
#include "read_toc_t.hpp"
#include "sanitize_t.hpp"
#include "send_key_t.hpp"
#include "verify16_t.hpp"
#include "logselect_t.hpp"
#include "open_zone_t.hpp"
#include "partition_t.hpp"
#include "cdb6format_t.hpp"
#include "cdb6verify_t.hpp"
#include "close_zone_t.hpp"
#include "mode_sense_t.hpp"
#include "play_audio_t.hpp"
#include "report_key_t.hpp"
#include "seek_block_t.hpp"
#include "start_stop_t.hpp"
#include "subchannel_t.hpp"
#include "blank_media_t.hpp"
#include "cdb6generic_t.hpp"
#include "cdb6inquiry_t.hpp"
#include "close_track_t.hpp"
#include "finish_zone_t.hpp"
#include "load_unload_t.hpp"
#include "mech_status_t.hpp"
#include "mode_select_t.hpp"
#include "move_medium_t.hpp"
#include "read_cd_msf_t.hpp"
#include "read_header_t.hpp"
#include "report_luns_t.hpp"
#include "cdb6inquiry3_t.hpp"
#include "mode_sense10_t.hpp"
#include "pause_resume_t.hpp"
#include "repair_track_t.hpp"
#include "report_zones_t.hpp"
#include "set_cd_speed_t.hpp"
#include "write_buffer_t.hpp"
#include "cdb6readwrite_t.hpp"
#include "media_removal_t.hpp"
#include "mode_select10_t.hpp"
#include "nec_read_cdda_t.hpp"
#include "read_position_t.hpp"
#include "set_streaming_t.hpp"
#include "set_timestamp_t.hpp"
#include "get_lba_status_t.hpp"
#include "play_audio_msf_t.hpp"
#include "read_buffer_10_t.hpp"
#include "read_buffer_16_t.hpp"
#include "send_cue_sheet_t.hpp"
#include "set_read_ahead_t.hpp"
#include "stop_play_scan_t.hpp"
#include "exchange_medium_t.hpp"
#include "get_performance_t.hpp"
#include "plxtr_read_cdda_t.hpp"
#include "read_capacity16_t.hpp"
#include "send_diagnostic_t.hpp"
#include "send_volume_tag_t.hpp"
#include "token_operation_t.hpp"
#include "report_timestamp_t.hpp"
#include "space_tape_marks_t.hpp"
#include "write_tape_marks_t.hpp"
#include "ata_passthrough12_t.hpp"
#include "ata_passthrough16_t.hpp"
#include "cdb6readwritetape_t.hpp"
#include "get_configuration_t.hpp"
#include "read_dvd_structure_t.hpp"
#include "receive_diagnostic_t.hpp"
#include "send_dvd_structure_t.hpp"
#include "init_element_status_t.hpp"
#include "position_to_element_t.hpp"
#include "read_element_status_t.hpp"
#include "reserve_track_rzone_t.hpp"
#include "reset_write_pointer_t.hpp"
#include "synchronize_cache10_t.hpp"
#include "synchronize_cache16_t.hpp"
#include "read_buffer_capacity_t.hpp"
#include "send_opc_information_t.hpp"
#include "../../sec/protocol_in_t.hpp"
#include "persistent_reserve_in_t.hpp"
#include "read_disk_information_t.hpp"
#include "request_block_address_t.hpp"
#include "../../sec/protocol_out_t.hpp"
#include "persistent_reserve_out_t.hpp"
#include "read_track_information_t.hpp"
#include "initialize_element_range_t.hpp"
#include "read_formatted_capacities_t.hpp"
#include "receive_token_information_t.hpp"
#include "get_physical_element_status_t.hpp"
#include "remove_element_and_truncate_t.hpp"
#include "get_event_status_notification_t.hpp"
#include "request_volume_element_address_t.hpp"

#include "magic/cdb_t.start.hpp"
namespace stor::port
{
    // [union _CDB]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union cdb_t                                                                               
    {                                                                                         
        using request_volume_element_address_t = struct stor::port::request_volume_element_address_t;                               
        using get_event_status_notification_t =  struct stor::port::get_event_status_notification_t;                               
                                                                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                                    
        _m000 struct stor::port::cdb6generic_t                 cdb6generic;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CDB6GENERIC
        _m001 struct stor::port::cdb6readwrite_t               cdb6readwrite;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CDB6READWRITE
        _m002 struct stor::port::cdb6inquiry_t                 cdb6inquiry;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CDB6INQUIRY
        _m003 struct stor::port::cdb6inquiry3_t                cdb6inquiry3;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CDB6INQUIRY3
        _m004 struct stor::port::cdb6verify_t                  cdb6verify;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CDB6VERIFY
        _m005 struct stor::port::receive_diagnostic_t          receive_diagnostic;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .RECEIVE_DIAGNOSTIC
        _m006 struct stor::port::send_diagnostic_t             send_diagnostic;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SEND_DIAGNOSTIC
        _m007 struct stor::port::cdb6format_t                  cdb6format;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CDB6FORMAT
        _m008 struct stor::port::cdb10_t                       cdb10;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CDB10
        _m009 struct stor::port::cdb12_t                       cdb12;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CDB12
        _m010 struct stor::port::cdb16_t                       cdb16;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CDB16
        _m011 struct sec::protocol_in_t                        security_protocol_in;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SECURITY_PROTOCOL_IN
        _m012 struct sec::protocol_out_t                       security_protocol_out;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SECURITY_PROTOCOL_OUT
        _m013 struct stor::port::unmap_t                       unmap;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .UNMAP
        _m014 struct stor::port::sanitize_t                    sanitize;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SANITIZE
        _m015 struct stor::port::pause_resume_t                pause_resume;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PAUSE_RESUME
        _m016 struct stor::port::read_toc_t                    read_toc;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .READ_TOC
        _m017 struct stor::port::read_disk_information_t       read_disk_information;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .READ_DISK_INFORMATION
        _m018 struct stor::port::read_disk_information_t       read_disc_information;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .READ_DISC_INFORMATION
        _m019 struct stor::port::read_track_information_t      read_track_information;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .READ_TRACK_INFORMATION
        _m020 struct stor::port::reserve_track_rzone_t         reserve_track_rzone;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .RESERVE_TRACK_RZONE
        _m021 struct stor::port::send_opc_information_t        send_opc_information;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SEND_OPC_INFORMATION
        _m022 struct stor::port::repair_track_t                repair_track;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .REPAIR_TRACK
        _m023 struct stor::port::close_track_t                 close_track;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CLOSE_TRACK
        _m024 struct stor::port::read_buffer_capacity_t        read_buffer_capacity;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .READ_BUFFER_CAPACITY
        _m025 struct stor::port::send_cue_sheet_t              send_cue_sheet;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SEND_CUE_SHEET
        _m026 struct stor::port::read_header_t                 read_header;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .READ_HEADER
        _m027 struct stor::port::play_audio_t                  play_audio;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PLAY_AUDIO
        _m028 struct stor::port::play_audio_msf_t              play_audio_msf;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PLAY_AUDIO_MSF
        _m029 struct stor::port::blank_media_t                 blank_media;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BLANK_MEDIA
        _m030 struct stor::port::play_cd_t                     play_cd;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PLAY_CD
        _m031 struct stor::port::scan_cd_t                     scan_cd;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SCAN_CD
        _m032 struct stor::port::stop_play_scan_t              stop_play_scan;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .STOP_PLAY_SCAN
        _m033 struct stor::port::subchannel_t                  subchannel;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SUBCHANNEL
        _m034 struct stor::port::read_cd_t                     read_cd;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .READ_CD
        _m035 struct stor::port::read_cd_msf_t                 read_cd_msf;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .READ_CD_MSF
        _m036 struct stor::port::plxtr_read_cdda_t             plxtr_read_cdda;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PLXTR_READ_CDDA
        _m037 struct stor::port::nec_read_cdda_t               nec_read_cdda;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NEC_READ_CDDA
        _m038 struct stor::port::mode_sense_t                  mode_sense;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MODE_SENSE
        _m039 struct stor::port::mode_sense10_t                mode_sense10;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MODE_SENSE10
        _m040 struct stor::port::mode_select_t                 mode_select;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MODE_SELECT
        _m041 struct stor::port::mode_select10_t               mode_select10;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MODE_SELECT10
        _m042 struct stor::port::locate_t                      locate;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .LOCATE
        _m043 struct stor::port::logsense_t                    logsense;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .LOGSENSE
        _m044 struct stor::port::logselect_t                   logselect;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .LOGSELECT
        _m045 struct stor::port::print_t                       print;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PRINT
        _m046 struct stor::port::seek_t                        seek;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SEEK
        _m047 struct stor::port::erase_t                       erase;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ERASE
        _m048 struct stor::port::start_stop_t                  start_stop;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .START_STOP
        _m049 struct stor::port::media_removal_t               media_removal;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MEDIA_REMOVAL
        _m050 struct stor::port::seek_block_t                  seek_block;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SEEK_BLOCK
        _m051 struct stor::port::request_block_address_t       request_block_address;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .REQUEST_BLOCK_ADDRESS
        _m052 struct stor::port::partition_t                   partition;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PARTITION
        _m053 struct stor::port::write_tape_marks_t            write_tape_marks;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .WRITE_TAPE_MARKS
        _m054 struct stor::port::space_tape_marks_t            space_tape_marks;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SPACE_TAPE_MARKS
        _m055 struct stor::port::read_position_t               read_position;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .READ_POSITION
        _m056 struct stor::port::cdb6readwritetape_t           cdb6readwritetape;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CDB6READWRITETAPE
        _m057 struct stor::port::init_element_status_t         init_element_status;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .INIT_ELEMENT_STATUS
        _m058 struct stor::port::initialize_element_range_t    initialize_element_range;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .INITIALIZE_ELEMENT_RANGE
        _m059 struct stor::port::position_to_element_t         position_to_element;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .POSITION_TO_ELEMENT
        _m060 struct stor::port::move_medium_t                 move_medium;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MOVE_MEDIUM
        _m061 struct stor::port::exchange_medium_t             exchange_medium;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .EXCHANGE_MEDIUM
        _m062 struct stor::port::read_element_status_t         read_element_status;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .READ_ELEMENT_STATUS
        _m063 struct stor::port::send_volume_tag_t             send_volume_tag;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SEND_VOLUME_TAG
        _m064 request_volume_element_address_t                 request_volume_element_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .REQUEST_VOLUME_ELEMENT_ADDRESS
        _m065 struct stor::port::load_unload_t                 load_unload;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .LOAD_UNLOAD
        _m066 struct stor::port::mech_status_t                 mech_status;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MECH_STATUS
        _m067 struct stor::port::synchronize_cache10_t         synchronize_cache10;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SYNCHRONIZE_CACHE10
        _m068 get_event_status_notification_t                  get_event_status_notification;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .GET_EVENT_STATUS_NOTIFICATION
        _m069 struct stor::port::get_performance_t             get_performance;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .GET_PERFORMANCE
        _m070 struct stor::port::read_dvd_structure_t          read_dvd_structure;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .READ_DVD_STRUCTURE
        _m071 struct stor::port::set_streaming_t               set_streaming;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SET_STREAMING
        _m072 struct stor::port::send_dvd_structure_t          send_dvd_structure;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SEND_DVD_STRUCTURE
        _m073 struct stor::port::send_key_t                    send_key;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SEND_KEY
        _m074 struct stor::port::report_key_t                  report_key;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .REPORT_KEY
        _m075 struct stor::port::set_read_ahead_t              set_read_ahead;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SET_READ_AHEAD
        _m076 struct stor::port::read_formatted_capacities_t   read_formatted_capacities;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .READ_FORMATTED_CAPACITIES
        _m077 struct stor::port::report_luns_t                 report_luns;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .REPORT_LUNS
        _m078 struct stor::port::persistent_reserve_in_t       persistent_reserve_in;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PERSISTENT_RESERVE_IN
        _m079 struct stor::port::persistent_reserve_out_t      persistent_reserve_out;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PERSISTENT_RESERVE_OUT
        _m080 struct stor::port::get_configuration_t           get_configuration;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .GET_CONFIGURATION
        _m081 struct stor::port::set_cd_speed_t                set_cd_speed;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SET_CD_SPEED
        _m082 struct stor::port::read12_t                      read12;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .READ12
        _m083 struct stor::port::write12_t                     write12;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .WRITE12
        _m084 struct stor::port::ata_passthrough12_t           ata_passthrough12;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ATA_PASSTHROUGH12
        _m085 struct stor::port::read16_t                      read16;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .READ16
        _m086 struct stor::port::write16_t                     write16;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .WRITE16
        _m087 struct stor::port::verify16_t                    verify16;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .VERIFY16
        _m088 struct stor::port::synchronize_cache16_t         synchronize_cache16;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SYNCHRONIZE_CACHE16
        _m089 struct stor::port::read_capacity16_t             read_capacity16;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .READ_CAPACITY16
        _m090 struct stor::port::ata_passthrough16_t           ata_passthrough16;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ATA_PASSTHROUGH16
        _m091 struct stor::port::get_lba_status_t              get_lba_status;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .GET_LBA_STATUS
        _m092 struct stor::port::token_operation_t             token_operation;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TOKEN_OPERATION
        _m093 struct stor::port::receive_token_information_t   receive_token_information;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .RECEIVE_TOKEN_INFORMATION
        _m094 struct stor::port::write_buffer_t                write_buffer;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .WRITE_BUFFER
        _m095 sdk::array<uint32_t, 4>                          as_ulong;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUlong
        _m096 sdk::array<uint8_t, 16>                          as_byte;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AsByte
                                                                                              
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                                    
        _m097 struct stor::port::read_buffer_10_t              read_buffer_10;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .READ_BUFFER_10
        _m098 struct stor::port::read_buffer_16_t              read_buffer_16;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .READ_BUFFER_16
        _m099 struct stor::port::report_timestamp_t            report_timestamp;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .REPORT_TIMESTAMP
        _m100 struct stor::port::set_timestamp_t               set_timestamp;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SET_TIMESTAMP
        _m101 struct stor::port::close_zone_t                  close_zone;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CLOSE_ZONE
        _m102 struct stor::port::finish_zone_t                 finish_zone;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FINISH_ZONE
        _m103 struct stor::port::open_zone_t                   open_zone;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OPEN_ZONE
        _m104 struct stor::port::reset_write_pointer_t         reset_write_pointer;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RESET_WRITE_POINTER
        _m105 struct stor::port::report_zones_t                report_zones;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .REPORT_ZONES
        _m106 struct stor::port::get_physical_element_status_t get_physical_element_status;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .GET_PHYSICAL_ELEMENT_STATUS
        _m107 struct stor::port::remove_element_and_truncate_t remove_element_and_truncate;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .REMOVE_ELEMENT_AND_TRUNCATE
                                                                                              
        SDK_NONVOL_PROPERTIES( "_CDB.$", 0x10, true, 0x51df46e79a2c74a2 );                               
        SDK_FIXED_SIZE( cdb_t, 0x10 );                                                        
    };                                                                                        
};
#include "magic/cdb_t.end.hpp"
SDK_VERIFY( union stor::port::cdb_t, 0x10 );
