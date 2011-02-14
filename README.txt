======================================================================
              ATRIUM TIME TRACKER REPORTS - README.txt
======================================================================

--- OVERVIEW ---

This is a Feature specifically for Open Atrium and the Time Tracker 
(drupal.org/project/time_tracker) module.

The purpose of this feature is simply to include the atrium 'group' into
the original time tracker reports view as well as provide some extra 
AHAH/AJAX powered dependent drop downs to the exposed filters.


--- SETUP ---

To enable goto admin/build/modules and enable as you would a module.

Once enabled you will have the following:

  - A new view (time_tracker/atrium_reports)
      This new view extends the original time tracker reporting page
      (time_tracker/reports) and adds a filter for atrium 'groups'.
      The new 'groups' filter will also auto fill the Projects filter
      with projects from the chosen group.
      NOTE: The filters are also 'spaces aware' so they will only give
      you options relative to the current space / project you are in
      

--- NOTES ----

Please note that this view is really just for administrators. The option
list for filtering groups and projects does not take into consideration 
which groups the current user is a member of.

However, you can easily create your own views that take this into account.
Time Tracker data is readily available in views so it should be no problem
to create a new view or extend the original time_tracker reports view
to accommodate for your needs.
      