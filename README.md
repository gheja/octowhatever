This is a rough DRAFT, most of this will be replaced by docs generated
by Doxygen.

  * The direction indexes follow the order in CSS styles: top/upper=0,
    right=1, bottom/lower=2, left=3.

types
-----

### level


### material

A "material" is an edge of a "tile" (upper, right, lower, left). It
interacts with "object"s (and with "tile"s?). A "tile" can have any kind
of edges, all of them from different "material"s, similarly a "material"
can be used on more than one "tile"s - therefore reducing the code
needed to be duplicated per similar tiles.


### tile

On a map each tile represents a block.


