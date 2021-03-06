// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptActorQuery {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTACTORQUERY
public:
    class ScriptActorQuery& operator=(class ScriptActorQuery const &) = delete;
    ScriptActorQuery(class ScriptActorQuery const &) = delete;
    ScriptActorQuery() = delete;
#endif

public:
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptActorIterator> createActorIterator(class CommandSelectorResults<class Actor> &&, class Scripting::WeakLifetimeScope const &);
    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptPlayerIterator> createPlayerIterator(class CommandSelectorResults<class Player> &&, class Scripting::WeakLifetimeScope const &, class Dimension const *);
    MCAPI static class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptActorIterator>> queryActors(enum ActorSelectorType, class std::optional<struct ScriptActorQueryOptions> const &, class Scripting::WeakLifetimeScope const &, class Dimension *, class Level &);
    MCAPI static class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptPlayerIterator>> queryPlayers(class std::optional<struct ScriptActorQueryOptions> const &, class Scripting::WeakLifetimeScope const &, class Dimension *, class Level &);

protected:

private:
    MCAPI static class ScriptingCommandOrigin _createScriptingOrigin(class Dimension *, class ServerLevel &);

};