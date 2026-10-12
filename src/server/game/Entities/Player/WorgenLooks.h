/*
 * Ryker's Realm (2026-10-12): Worgen Two Forms. While a worgen shows its human form, PLAYER_BYTES hold the human's
 * looks; the character's own (skin, face, hair style, hair colour, facial style) are kept here, by character, and are
 * what Player::_SaveCharacter writes. Set and cleared by spell_worgen_human_form (spell_generic.cpp).
 */

#ifndef _WORGENLOOKS_H
#define _WORGENLOOKS_H

#include "Define.h"
#include <array>
#include <optional>

namespace WorgenLooks
{
    using Looks = std::array<uint8, 5>;
    void Save(uint32 guidLow, Looks const& looks);
    void Clear(uint32 guidLow);
    std::optional<Looks> Get(uint32 guidLow);
}

#endif
