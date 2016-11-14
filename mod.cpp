

#include <maiken.hpp>
#define KUL_EXPORT
#undef  _KUL_DEFS_HPP_
#include <kul/defs.hpp>

class MaikenModule : public maiken::Module{
    public:
        void compile(maiken::Application& a, const YAML::Node& node) throw (std::exception) override{
            KOUT(NON) << "MaikenModule SUCCESS!";
        }
};

extern "C" 
KUL_PUBLISH 
maiken::Module* maiken_module_construct() {
    return new MaikenModule;
}

extern "C" 
KUL_PUBLISH  
void maiken_module_destruct(maiken::Module* p) {
    delete p;
}
