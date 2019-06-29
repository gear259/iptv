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

#pragma once

#include "stream/streams/builders/encoding/encoding_stream_builder.h"

namespace iptv_cloud {
namespace stream {
namespace streams {
namespace builders {

class FakeStreamBuilder : public EncodingStreamBuilder {
 public:
  FakeStreamBuilder(const EncodingConfig* api, SrcDecodeBinStream* observer);

  Connector BuildOutput(Connector conn) override;

 private:
  Connector BuildFakeOutput(Connector conn);
};

}  // namespace builders
}  // namespace streams
}  // namespace stream
}  // namespace iptv_cloud