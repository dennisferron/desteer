#include "desteer/controller/ISteeringController.hpp"
#include "desteer/entity/IBaseEntity.hpp"
#include "desteer/entity/IEntitySpace.hpp"

namespace desteer {
    namespace controller {
        ISteeringController::~ISteeringController() {}
    }
    namespace entity {
        IBaseEntity::~IBaseEntity() {}
        IEntitySpace::~IEntitySpace() {}
    }
}
