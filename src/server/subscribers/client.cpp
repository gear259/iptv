/*  Copyright (C) 2014-2019 FastoGT. All right reserved.
    This file is part of iptv_cloud.
    iptv_cloud is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    iptv_cloud is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with iptv_cloud.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <string>

#include "server/subscribers/client.h"

#include <fastotv/server/commands_factory.h>

namespace iptv_cloud {
namespace server {
namespace subscribers {

SubscriberClient::SubscriberClient(common::libev::IoLoop* server, const common::net::socket_info& info)
    : base_class(server, info) {}

const char* SubscriberClient::ClassName() const {
  return "SubscriberClient";
}

void SubscriberClient::SetServerHostInfo(const host_info_t& info) {
  hinfo_ = info;
}

SubscriberClient::host_info_t SubscriberClient::GetServerHostInfo() const {
  return hinfo_;
}

void SubscriberClient::SetCurrentStreamID(fastotv::stream_id sid) {
  current_stream_id_ = sid;
}

fastotv::stream_id SubscriberClient::GetCurrentStreamID() const {
  return current_stream_id_;
}

}  // namespace subscribers
}  // namespace server
}  // namespace iptv_cloud
