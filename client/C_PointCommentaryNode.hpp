#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb98
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bActive"
    // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
    // static metadata: MNetworkVarNames "float32 m_flStartTimeInCommentary"
    // static metadata: MNetworkVarNames "string_t m_iszCommentaryFile"
    // static metadata: MNetworkVarNames "string_t m_iszTitle"
    // static metadata: MNetworkVarNames "string_t m_iszSpeakers"
    // static metadata: MNetworkVarNames "int m_iNodeNumber"
    // static metadata: MNetworkVarNames "int m_iNodeNumberMax"
    // static metadata: MNetworkVarNames "bool m_bListenedTo"
    // static metadata: MNetworkVarNames "CHandle< C_BaseEntity> m_hViewPosition"
    #pragma pack(push, 1)
    class C_PointCommentaryNode : public client::CBaseAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb48[0x8]; // 0xb48
        // metadata: MNetworkEnable
        bool m_bActive; // 0xb50        
        bool m_bWasActive; // 0xb51        
        [[maybe_unused]] std::uint8_t pad_0xb52[0x2]; // 0xb52
        entity2::GameTime_t m_flEndTime; // 0xb54        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartTime; // 0xb58        
        // metadata: MNetworkEnable
        float m_flStartTimeInCommentary; // 0xb5c        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszCommentaryFile; // 0xb60        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszTitle; // 0xb68        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszSpeakers; // 0xb70        
        // metadata: MNetworkEnable
        int32_t m_iNodeNumber; // 0xb78        
        // metadata: MNetworkEnable
        int32_t m_iNodeNumberMax; // 0xb7c        
        // metadata: MNetworkEnable
        bool m_bListenedTo; // 0xb80        
        [[maybe_unused]] std::uint8_t pad_0xb81[0xf]; // 0xb81
        // metadata: MNetworkEnable
        // m_hViewPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hViewPosition;
        char m_hViewPosition[0x4]; // 0xb90        
        bool m_bRestartAfterRestore; // 0xb94        
        [[maybe_unused]] std::uint8_t pad_0xb95[0x3];
        
        // Datamap fields:
        // void m_sndCommentary; // 0xb88
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PointCommentaryNode because it is not a standard-layout class
    static_assert(sizeof(C_PointCommentaryNode) == 0xb98);
};