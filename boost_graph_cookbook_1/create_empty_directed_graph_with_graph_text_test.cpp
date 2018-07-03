#include "create_empty_directed_graph_with_graph_text.h"
#include "create_empty_directed_graph_with_graph_text_demo.impl"

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(create_empty_directed_graph_with_graph_text_thorough)
{
  {
    auto g = create_empty_directed_graph_with_graph_text();
    BOOST_CHECK(boost::num_edges(g) == 0);
    BOOST_CHECK(boost::num_vertices(g) == 0);
  }
}
