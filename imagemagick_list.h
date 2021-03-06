/* {{{ COPYING 
 *
 * +-----------------------------------------------------------------+
 * | Copyright (C) 2004 2005 2006 Florent Monnier                    |
 * +-----------------------------------------------------------------+
 * | This binding aims to provide the ImageMagick methods to OCaml.  |
 * +-----------------------------------------------------------------+
 * |                                                                 |
 * | This program is free software; you can redistribute it and/or   |
 * | modify it under the terms of the GNU General Public License     |
 * | as published by the Free Software Foundation; either version 2  |
 * | of the License, or (at your option) any later version.          |
 * |                                                                 |
 * | This program is distributed in the hope that it will be useful, |
 * | but WITHOUT ANY WARRANTY; without even the implied warranty of  |
 * | MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the   |
 * | GNU General Public License for more details.                    |
 * |                                                                 |
 * | http://www.fsf.org/licensing/licenses/gpl.html                  |
 * |                                                                 |
 * | You should have received a copy of the GNU General Public       |
 * | License along with this program; if not,                        |
 * | write to the Free Software Foundation, Inc.,                    |
 * | 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA    |
 * |                                                                 |
 * +-----------------------------------------------------------------+
 * | Author: Florent Monnier <fmonnier@linux-nantes.fr.eu.org>       |
 * | Thanks to Matthieu Dubuget for his help with OCamlMakefile use. |
 * +-----------------------------------------------------------------+
 *
 * $Id$
 *
 * }}} */

int MagickBoolean_val(value);

CAMLprim value imper_flipimage(value);
CAMLprim value imper_flopimage(value);
CAMLprim value imper_magnifyimage(value);
CAMLprim value imper_minifyimage(value);
CAMLprim value imper_enhanceimage(value);
CAMLprim value imper_trimimage(value);
CAMLprim value imper_despeckle(value);

CAMLprim value imper_deconstructimages(value);
CAMLprim value imper_coalesceimages(value);
CAMLprim value imper_flattenimages(value);


CAMLprim value imper_negateimage(value, value);
CAMLprim value imper_contrastimage(value, value);
CAMLprim value imper_equalizeimage(value);
CAMLprim value imper_normalizeimage(value);
CAMLprim value imper_blackthresholdimage(value, value);
CAMLprim value imper_cyclecolormapimage(value, value);
CAMLprim value imper_modulateimage(value, value);
CAMLprim value imper_solarizeimage(value, value);
CAMLprim value imper_stripimage(value);



CAMLprim value imper_blurimage(value, value, value);
CAMLprim value imper_charcoalimage(value, value, value);
CAMLprim value imper_edgeimage(value, value);
CAMLprim value imper_embossimage(value, value, value);
CAMLprim value imper_gaussianblurimage(value, value, value);
CAMLprim value imper_implodeimage(value, value);
CAMLprim value imper_medianfilterimage(value, value);
CAMLprim value imper_motionblurimage(value, value, value, value);
CAMLprim value imper_oilpaintimage(value, value);
CAMLprim value imper_reducenoiseimage(value, value);
CAMLprim value imper_rollimage(value, value, value);
CAMLprim value imper_shadeimage(value, value, value, value);
CAMLprim value imper_sharpenimage(value, value, value);
CAMLprim value imper_spreadimage(value, value);
CAMLprim value imper_swirlimage(value, value);
CAMLprim value imper_unsharpmaskimage(value, value, value, value, value);
CAMLprim value imper_waveimage(value, value, value);

CAMLprim value imper_rotateimage(value, value);
CAMLprim value imper_shearimage(value, value, value);
CAMLprim value imper_sampleimage(value, value, value);
CAMLprim value imper_scaleimage(value, value, value);
CAMLprim value imper_thumbnailimage(value, value, value);

CAMLprim value imper_adaptivethresholdimage(value, value, value, value);

CAMLprim value imper_cropimage(value, value, value, value, value);
CAMLprim value imper_chopimage(value, value, value, value, value);

CAMLprim value imper_blurimagechannel(value, value, value, value);
CAMLprim value imper_gaussianblurimagechannel(value, value, value, value);
CAMLprim value imper_bilevelimagechannel(value, value, value);
CAMLprim value imper_sharpenimagechannel(value, value, value, value);


CAMLprim value imper_addnoiseimage(value, value);


CAMLprim value imper_resizeimage(value, value, value, value, value);

CAMLprim value imper_orderedditherimage(value);
CAMLprim value imper_compressimagecolormap(value);
CAMLprim value imper_posterizeimage(value, value, value);
CAMLprim value imper_mapimage(value, value, value);




CAMLprim value fun_blurimage(value, value, value);
CAMLprim value fun_charcoalimage(value, value, value);
CAMLprim value fun_edgeimage(value, value);
CAMLprim value fun_embossimage(value, value, value);
CAMLprim value fun_gaussianblurimage(value, value, value);
CAMLprim value fun_implodeimage(value, value);
CAMLprim value fun_medianfilterimage(value, value);
CAMLprim value fun_motionblurimage(value, value, value, value);
CAMLprim value fun_oilpaintimage(value, value);
CAMLprim value fun_reducenoiseimage(value, value);
CAMLprim value fun_rollimage(value, value, value);
CAMLprim value fun_shadeimage(value, value, value, value);
CAMLprim value fun_sharpenimage(value, value, value);
CAMLprim value fun_spreadimage(value, value);
CAMLprim value fun_swirlimage(value, value);
CAMLprim value fun_unsharpmaskimage(value, value, value, value, value);
CAMLprim value fun_waveimage(value, value, value);
CAMLprim value fun_rotateimage(value, value);
CAMLprim value fun_shearimage(value, value, value);
CAMLprim value fun_sampleimage(value, value, value);
CAMLprim value fun_scaleimage(value, value, value);
CAMLprim value fun_thumbnailimage(value, value, value);
CAMLprim value fun_adaptivethresholdimage(value, value, value, value);
CAMLprim value fun_blurimagechannel(value, value, value, value);
CAMLprim value fun_gaussianblurimagechannel(value, value, value, value);
CAMLprim value fun_addnoiseimage(value, value);
CAMLprim value fun_resizeimage(value, value, value, value, value);




/* vim: fdm=marker
 */
