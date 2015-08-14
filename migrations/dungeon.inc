<?php

// extending the basic class, so there's a nice clean place to start from
// stolen wholesale from beer.inc in the Migrate examples!
// add any code that applies to ALL dungeon_migrate migrations.
abstract class DungeonMigration extends Migration {
  // A Migration constructor takes an array of arguments as its first parameter.
  // The arguments must be passed through to the parent constructor.
  public function __construct($arguments) {
    parent::__construct($arguments);

    // With migrate_ui enabled, migration pages will indicate people involved in
    // the particular migration, with their role and contact info. We default the
    // list in the shared class; it can be overridden for specific migrations.
    $this->team = array(
      new MigrateTeamMember('Elaine Nelson', 'me@elainenelson.org',
                            t('Coder')),
      new MigrateTeamMember('Chad Akins', 'chad.akins@gmail.com',
                            t('Dungeonmaster')),
    );
  }
  
  //if connecting to a db as part of the migration, maybe add that here.
  //see Migrate video series, ch 8, 10minute mark.
  
}