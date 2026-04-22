#include <stdlib.h>
#include <stdio.h>

#include "commit.h"

static int next_id;

/**
  * new_commit - allocate and initialise a commit
  *
  * @major: major version
  * @minor: minor version
  * @comment: pointer to a comment
  *
  * @return: a pointer to a newly allocated and initialised commit
  */
struct commit *new_commit(unsigned short major, unsigned long minor,
			  char *comment)
{
  // Musterlösung
  struct commit *c;
  c = (struct commit *) malloc(sizeof(struct commit));

  if (!c) {
    return NULL;
  }

  // In case struct version *version (see struct commit)
  // struct version *v;
  // v = (struct version *) malloc(sizeof(struct vesrsion));
  //
  // if (!v) {
  //   free(c); // IMPORTANT! DO NOT FORGET TO FREE PREVIOUSLY ALLOCATED MEMORY
  //   return NULL;
  // }

  // Beispiel next_id = 0
  c->id = next_id++; // Hier: c->id = 0
  // c->id = ++next_id; // Hier: c->id = 1
  c->next = c->prev = c;
  c->version.major = major;
  c->version.minor = minor;
  c->comment = comment;
  return c;

  /* own solution
  struct version my_version;
  my_version.major = major;
  my_version.minor = minor;

  struct commit my_commit;
  my_commit.version = my_version;
  (my_commit.comment)->comment;
	return my_commit;
  */
}

/**
  * insert_commit - insert a commit after another one without modifying them
  *
  * @from: commit that will be the predecessor of the new one
  * @new: commit to be inserted after from
  *
  * @return: a pointer to the newly inserted commit
  */
static struct commit *insert_commit(struct commit *from, struct commit *new)
{
	return NULL;
}

/**
  * add_minor_commit - create and insert a new minor commit
  *
  * @from: predecessor of the new minor commit
  * @comment: comment for the new commit
  *
  * @return: pointer to the new minor commit
  */
struct commit *add_minor_commit(struct commit *from, char *comment)
{
	return NULL;
}

/**
  * add_major_commit - create and insert a new major commit
  *
  * @from: predecessor of the new major commit
  * @comment: comment for the new commit
  *
  * @return: pointer to the new major commit
  */
struct commit *add_major_commit(struct commit *from, char *comment)
{
	return NULL;
}

/**
  * display_commit - display a comit as follows:
  *                    "<id>: <major>.<minor> (stable|unstable) '<comment>'"
  *
  * @c: commit to display
  */
void display_commit(struct commit *c)
{
}

/**
  * commitOf - returns the commit containing the version passed as a parameter
  *
  * @version: pointer to a version
  *
  * @return: the commit containing the version in parameter
  *
  * Note:      this function must still work if the order and number of members
  *            in struct commit changes!
  */
struct commit *commitOf(struct version *version)
{
	return NULL;
}
