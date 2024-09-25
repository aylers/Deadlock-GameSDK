#pragma once
#include "source2sdk/server/CCitadelModifierAura.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x160
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Item_AOESilence : public server::CCitadelModifierAura
    {
    public:
        float m_flStartRadius; // 0xe0        
        float m_flEndRadius; // 0xe4        
        float m_flSpreadDuration; // 0xe8        
        [[maybe_unused]] std::uint8_t pad_0xec[0x74];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Item_AOESilence because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Item_AOESilence) == 0x160);
};