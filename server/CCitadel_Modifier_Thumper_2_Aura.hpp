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
    // Size: 0x178
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Thumper_2_Aura : public server::CCitadelModifierAura
    {
    public:
        Vector m_vecOrigin; // 0xe0        
        Vector m_vecWorldSpaceMins; // 0xec        
        Vector m_vecWorldSpaceMaxs; // 0xf8        
        float m_flBarbedWireAuraRadius; // 0x104        
        [[maybe_unused]] std::uint8_t pad_0x108[0x70];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Thumper_2_Aura because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Thumper_2_Aura) == 0x178);
};
