/*
 * Gamedev Framework (gf)
 * Copyright (C) 2016-2019 Julien Bernard
 *
 * This software is provided 'as-is', without any express or implied
 * warranty.  In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 */
#ifndef GF_MAP_CELL_H
#define GF_MAP_CELL_H

namespace gf {
#ifndef DOXYGEN_SHOULD_SKIP_THIS
inline namespace v1 {
#endif

  /**
   * @ingroup game
   * @brief Map cell index in a map celled or hexagonal map.
   *
   * @sa gf::MapCellAxis
   */
  enum class MapCellIndex {
    Odd,  ///< A odd map cell index
    Even, ///< An even map cell index
  };

  /**
   * @ingroup game
   * @brief Map cell axis in a map celled
   *
   * @sa gf::MapCellIndex
   */
  enum class MapCellAxis {
    X,  ///< The x map cell axis
    Y,  ///< The y map cell axis
  };

#ifndef DOXYGEN_SHOULD_SKIP_THIS
}
#endif
}

#endif // GF_MAP_CELL_H
