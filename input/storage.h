/*
 *
 *  BlueZ - Bluetooth protocol stack for Linux
 *
 *  Copyright (C) 2004-2007  Marcel Holtmann <marcel@holtmann.org>
 *
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

int get_stored_device_info(bdaddr_t *sba, bdaddr_t *dba,
				struct hidp_connadd_req *req);

int del_stored_device_info(bdaddr_t *sba, bdaddr_t *dba);

int store_device_info(bdaddr_t *sba, bdaddr_t *dba,
				struct hidp_connadd_req *req);

int parse_stored_device_info(const char *str,
				struct hidp_connadd_req *req);
