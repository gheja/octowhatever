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


input
-----

Unified input. Each input channel has a pressure parameter, i.e. how
strong the button is pressed on analog controllers, released or pressed
on digital controllers (i.e. keyboard). There are special controllers as
well, for example, the "left key" - using the "left key" only, the
pressure parameter is at half of the maximum, holding the "run key"
maximizes the pressure. (On an analog controller this would be "halfway"
and "fully" pressed/tilted button/joystick.)
