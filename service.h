/*
 * service.c
 *
 * Copyright 2015 Lukas Himsel <lukas.himsel@web.de>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef TOY_HTTP_SERVICE_H
#define TOY_HTTP_SERVICE_H

#define MAX_CONNECTIONS  64
#define HTTP_PORT        8976
#define SERVE_DIRECTORY  "."
#define DEFAULT_FILE     "index.html"

extern int serve(int http_port, int max_connections, char *serve_directory);

#endif