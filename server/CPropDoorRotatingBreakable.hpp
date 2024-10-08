#pragma once
#include "source2sdk/server/CPropDoorRotating.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xfa8
    // Has VTable
    #pragma pack(push, 1)
    class CPropDoorRotatingBreakable : public server::CPropDoorRotating
    {
    public:
        bool m_bBreakable; // 0xf88        
        bool m_isAbleToCloseAreaPortals; // 0xf89        
        [[maybe_unused]] std::uint8_t pad_0xf8a[0x2]; // 0xf8a
        int32_t m_currentDamageState; // 0xf8c        
        // m_damageStates has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlSymbolLarge> m_damageStates;
        char m_damageStates[0x18]; // 0xf90        
        
        // Datamap fields:
        // void InputSetUnbreakable; // 0x0
        // void InputSetBreakable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPropDoorRotatingBreakable because it is not a standard-layout class
    static_assert(sizeof(CPropDoorRotatingBreakable) == 0xfa8);
};
