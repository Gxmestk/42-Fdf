# 42-Fdf

A 3D wireframe renderer built as part of the 42 School curriculum. FdF (Fil de Fer, "wireframe" in French) reads map files and renders them as interactive 3D wireframes using the MiniLibX graphics library.

## Features

- **3D Wireframe Rendering**: Isometric and top-down projection modes
- **Interactive Controls**: Rotate, pan, and zoom the map in real-time
- **Color Gradients**: Automatic color mapping based on elevation with multiple themes
- **Animation**: Auto-rotation animation mode
- **Cross-Platform**: Works on both Linux and macOS

## Requirements

- GCC compiler
- MiniLibX library (included)
- libft library (included)
- X11 development libraries (Linux only): `libxext-dev`, `libx11-dev`

## Installation

```bash
git clone https://github.com/yourusername/42-Fdf.git
cd 42-Fdf
make
```

## Usage

```bash
./fdf maps/42.fdf
```

## Controls

### Mouse
| Action | Control |
|--------|---------|
| Pan | Left-click + drag |
| Rotate | Right-click + drag |
| Zoom in | Scroll up |
| Zoom out | Scroll down |

### Keyboard
| Key | Action |
|-----|--------|
| `ESC` | Exit program |
| `TAB` | Toggle isometric/top-down view |
| `R` | Reset view to default |
| `SPACE` | Toggle auto-rotation animation |
| `Z` | Increase Z-axis scale |
| `X` | Decrease Z-axis scale |
| `H` | Toggle help menu |
| `1` | Default color theme |
| `2` | Peach/blue color theme |
| `3` | Monochrome theme |

## Map Format

Maps are plain text files where each number represents a point's Z-coordinate (height):

```
0  0  0  0  0
0 10 10 10  0
0 10 20 10  0
0 10 10 10  0
0  0  0  0  0
```

Custom colors can be specified using hexadecimal:
```
0  0  0,0xFF0000  0
0 10 10       10  0
```

## Project Structure

```
42-Fdf/
├── includes/        # Header files
├── srcs/            # Source files
│   ├── fdf.c        # Main program entry
│   ├── map_load.c   # Map parsing
│   ├── map_draw.c   # Rendering logic
│   ├── transform.c  # 3D transformations
│   ├── rotate.c     # Rotation functions
│   ├── translate.c  # Translation functions
│   ├── zoom.c       # Zoom functions
│   ├── event.c      # Event handling
│   ├── key.c        # Keyboard input
│   ├── mouse.c      # Mouse input
│   ├── color.c      # Color management
│   └── ...
├── libs/            # Libraries
│   ├── libft/       # Custom C library
│   └── minilibx-*/  # MiniLibX for Linux/macOS
├── maps/            # Sample map files
└── Makefile
```

## Author

**tkhemniw** - [gt.khemniwat@gmail.com](mailto:gt.khemniwat@gmail.com)

## License

This project is part of the 42 School curriculum.
