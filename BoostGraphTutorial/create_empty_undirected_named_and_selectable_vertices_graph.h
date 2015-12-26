#ifndef CREATE_EMPTY_UNDIRECTED_NAMED_AND_SELECTABLE_VERTICES_GRAPH_H
#define CREATE_EMPTY_UNDIRECTED_NAMED_AND_SELECTABLE_VERTICES_GRAPH_H

#include <string>
#include <boost/graph/adjacency_list.hpp>
#include "install_vertex_is_selected.h"

boost::adjacency_list<
  boost::vecS,
  boost::vecS,
  boost::undirectedS,
  boost::property<
    boost::vertex_name_t, std::string,
    boost::property<
      boost::vertex_is_selected_t, bool
    >
  >
>
create_empty_undirected_named_and_selectable_vertices_graph() noexcept;

void create_empty_undirected_named_and_selectable_vertices_graph_test() noexcept;

#endif // CREATE_EMPTY_UNDIRECTED_NAMED_AND_SELECTABLE_VERTICES_GRAPH_H