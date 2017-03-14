/**
Copyright (c) 2013, Philip Deegan.
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are
met:

    * Redistributions of source code must retain the above copyright
notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above
copyright notice, this list of conditions and the following disclaimer
in the documentation and/or other materials provided with the
distribution.
    * Neither the name of Philip Deegan nor the names of its
contributors may be used to endorse or promote products derived from
this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include <maiken.hpp>
#define KUL_EXPORT
#undef  _KUL_DEFS_HPP_
#include <kul/defs.hpp>

namespace mkn { namespace mod { namespace min {
class MaikenModule : public maiken::Module{
    public:
        MaikenModule(){
            KOUT(NON) << "MaikenModule Constructor!";
        }
        ~MaikenModule(){
            KOUT(NON) << "MaikenModule Destructor!";
        }
        void compile(maiken::Application& a, const YAML::Node& node) throw (std::exception) override{
            KOUT(NON) << "MaikenModule Compile!";
        }
        void link(maiken::Application& a, const YAML::Node& node) throw (std::exception) override{
            KOUT(NON) << "MaikenModule Link!";
        }
        void pack(maiken::Application& a, const YAML::Node& node) throw (std::exception) override{
            KOUT(NON) << "MaikenModule Pack!";
        }
};
}}}

extern "C" 
KUL_PUBLISH 
maiken::Module* maiken_module_construct() {
    return new mkn :: mod :: min :: MaikenModule;
}

extern "C" 
KUL_PUBLISH  
void maiken_module_destruct(maiken::Module* p) {
    delete p;
}
