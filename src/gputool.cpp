/*
 * Copyright (C) 2017  Andres Rodriguez
 *
 * This file is part of gputool.
 *
 * gputool is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * gputool is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with gputool.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <gputool/config.h>
#include <stdio.h>
#include <util/util.h>
#include "GpuToolUi.h"

int main()
{
    int r = 0;

    printf("Starting gputool v%d.%d.%d\n", GPUTOOL_VERSION_MAJOR, GPUTOOL_VERSION_MINOR,
           GPUTOOL_VERSION_PATCH);

    try {
        auto ui = util::make_unique<gputool::GpuToolUi>();
        r = ui->run();
    } catch (...) {
        std::terminate();
    }

    return r;
}
