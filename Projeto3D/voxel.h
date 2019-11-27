#ifndef VOXEL_H
#define VOXEL_H

//Julia C C O
/** @brief The Voxel struct
 * Define os tipos de dados Voxel,
 * os quais possuem informação de cor,
 * transparência e se será incluído ou não
 * no modelo da escultura digital.
 */ 

struct Voxel {
  float r,g,b; // Colors
  float a;
// Transparency
  bool isOn; // Included or not
};

#endif // VOXEL_H
