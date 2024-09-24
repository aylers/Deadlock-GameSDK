#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
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
    // Size: 0x500
    // Has VTable
    #pragma pack(push, 1)
    class COrbSpawner : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4d8[0x28];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(COrbSpawner) == 0x500);
};
