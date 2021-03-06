/*
 * Bygone Islands, the journey of a pirate in dangerous islands
 * Copyright (C) 2017  Hatunruna team
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef BI_MESSAGES_H
#define BI_MESSAGES_H

#include <gf/Message.h>
#include <gf/Vector.h>

using namespace gf::literals;

namespace bi {

  struct HeroPosition: public gf::Message {
    static constexpr gf::Id type = "HeroPosition"_id;

    gf::Vector2f position;
    float angle;
    bool isOnIsland;
  };

  struct StartScan: public gf::Message {
    static constexpr gf::Id type = "StartScan"_id;
  };

  struct StopScan: public gf::Message {
    static constexpr gf::Id type = "StopScan"_id;
  };

  struct NearestTreasure: public gf::Message {
    static constexpr gf::Id type = "NearestTreasure"_id;

    gf::Vector2f position;
  };

  struct GoldLooted: public gf::Message {
    static constexpr gf::Id type = "GoldLooted"_id;

    unsigned value;
    gf::Vector2f next;
  };

  struct GameOver: public gf::Message {
    static constexpr gf::Id type = "GameOver"_id;
  };
}

#endif // BI_MESSAGES_H
